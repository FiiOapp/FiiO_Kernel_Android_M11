/*
 * Copyright (C) 2014 Samsung Electronics Co.Ltd
 * http://www.samsung.com
 *
 * Shared memory driver
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
*/

#include <linux/io.h>
#include <linux/platform_device.h>
#include <linux/module.h>
#include <linux/of.h>
#include <linux/of_platform.h>
#include <linux/dma-mapping.h>
#include <linux/slab.h>
#include <linux/shm_ipc.h>
#include <linux/of_reserved_mem.h>

struct shm_plat_data {
	unsigned long p_addr;
	unsigned p_acpm_addr;
	void __iomem *v_boot;
	void __iomem *v_ipc;
	void __iomem *v_vss;
	void __iomem *v_acpm;
	unsigned t_size;
	unsigned cp_size;
	unsigned vss_size;
	unsigned acpm_size;
	unsigned ipc_off;
	unsigned ipc_size;

	unsigned long p_sysram_addr;
	unsigned t_sysram_size;
} pdata;

unsigned long shm_get_phys_base(void)
{
	return pdata.p_addr;
}

unsigned shm_get_phys_size(void)
{
	return pdata.t_size;
}

unsigned long shm_get_sysram_base(void)
{
	return pdata.p_sysram_addr;
}

unsigned shm_get_sysram_size(void)
{
	return pdata.t_sysram_size;
}

unsigned shm_get_boot_size(void)
{
	return pdata.ipc_off;
}

unsigned shm_get_ipc_rgn_offset(void)
{
	return pdata.ipc_off;
}

unsigned shm_get_ipc_rgn_size(void)
{
	return pdata.ipc_size;
}

unsigned shm_get_vss_size(void)
{
	return pdata.vss_size;
}

unsigned shm_get_acpm_size(void)
{
	return pdata.acpm_size;
}

unsigned shm_get_cp_size(void)
{
	return pdata.cp_size;
}

unsigned long shm_get_security_param3(unsigned long mode, u32 main_size)
{
	unsigned long ret;

	switch (mode) {
	case 0: /* CP_BOOT_MODE_NORMAL */
		ret = main_size;
		break;
	case 1: /* CP_BOOT_MODE_DUMP */
#ifdef CP_NONSECURE_BOOT
		ret = pdata.p_addr;
#else
		ret = pdata.p_addr + pdata.ipc_off;
#endif
		break;
	case 2: /* CP_BOOT_RE_INIT */
		ret = 0;
		break;
	default:
		pr_info("%s: Invalid sec_mode(%lu)\n", __func__, mode);
		ret = 0;
		break;
	}
	return ret;
}

unsigned long shm_get_security_param2(unsigned long mode, u32 bl_size)
{
	unsigned long ret;

	switch (mode) {
	case 0: /* CP_BOOT_MODE_NORMAL */
	case 1: /* CP_BOOT_MODE_DUMP */
		ret = bl_size;
		break;
	case 2: /* CP_BOOT_RE_INIT */
		ret = 0;
		break;
	default:
		pr_info("%s: Invalid sec_mode(%lu)\n", __func__, mode);
		ret = 0;
		break;
	}
	return ret;
}

void __iomem *shm_request_region(unsigned long sh_addr, unsigned size)
{
	int i;
	unsigned int num_pages = (size >> PAGE_SHIFT);
	pgprot_t prot = pgprot_writecombine(PAGE_KERNEL);
	struct page **pages;
	void *v_addr;

	if (!sh_addr)
		return NULL;

	if (size > (num_pages << PAGE_SHIFT))
		num_pages++;

	pages = kmalloc(sizeof(struct page *) * num_pages, GFP_ATOMIC);
	if (!pages) {
		pr_err("%s: pages allocation fail!\n", __func__);
		return NULL;
	}

	for (i = 0; i < (num_pages); i++) {
		pages[i] = phys_to_page(sh_addr);
		sh_addr += PAGE_SIZE;
	}

	v_addr = vmap(pages, num_pages, VM_MAP, prot);
	kfree(pages);

	return (void __iomem *)v_addr;
}


void __iomem *shm_get_boot_region(void)
{
	if (!pdata.v_boot)
		pdata.v_boot = shm_request_region(pdata.p_addr, pdata.ipc_off);

	return pdata.v_boot;
}

void __iomem *shm_get_ipc_region(void)
{
	if (!pdata.v_ipc)
		pdata.v_ipc = shm_request_region(pdata.p_addr + pdata.ipc_off,
				pdata.t_size - pdata.ipc_off);

	return pdata.v_ipc;
}

void __iomem *shm_get_vss_region(void)
{
	if (!pdata.v_vss)
		pdata.v_vss = shm_request_region(pdata.p_addr + pdata.cp_size,
				pdata.vss_size);

	return pdata.v_vss;
}

void __iomem *shm_get_acpm_region(void)
{
	if (!pdata.v_acpm)
		pdata.v_acpm = shm_request_region(pdata.p_acpm_addr,
				pdata.acpm_size);

	return pdata.v_acpm;
}

void shm_release_region(void *v_addr)
{
	vunmap(v_addr);
}

void shm_release_regions(void)
{
	if (pdata.v_boot)
		vunmap(pdata.v_boot);

	if (pdata.v_ipc)
		vunmap(pdata.v_ipc);

	if (pdata.v_vss)
		vunmap(pdata.v_vss);

	if (pdata.v_acpm)
		vunmap(pdata.v_acpm);
}

#ifdef CONFIG_OF_RESERVED_MEM
static int __init modem_if_reserved_mem_setup(struct reserved_mem *remem)
{
   pdata.p_addr = remem->base;
   pdata.t_size = remem->size;

   pr_err("%s: memory reserved: paddr=%lu, t_size=%u\n",
        __func__, pdata.p_addr, pdata.t_size);

   return 0;
}
RESERVEDMEM_OF_DECLARE(modem_if, "exynos,modem_if", modem_if_reserved_mem_setup);

#if !defined (CONFIG_SOC_EXYNOS7570)
static int __init deliver_cp_reserved_mem_setup(struct reserved_mem *remem)
{
   pdata.p_sysram_addr = remem->base;
   pdata.t_sysram_size = remem->size;

   pr_err("%s: memory reserved: paddr=%u, t_size=%u\n",
        __func__, (u32)remem->base, (u32)remem->size);

   return 0;
}
RESERVEDMEM_OF_DECLARE(deliver_cp, "exynos,deliver_cp", deliver_cp_reserved_mem_setup);
#endif

#endif

static int shm_probe(struct platform_device *pdev)
{
	struct device *dev = &pdev->dev;
	int ret;
	struct device_node *np_acpm = of_find_node_by_name(NULL, "acpm_ipc");

	dev_err(dev, "%s: shmem driver init\n", __func__);

	if (dev->of_node) {
		ret = of_property_read_u32(dev->of_node, "shmem,ipc_offset",
				&pdata.ipc_off);
		if (ret) {
			dev_err(dev, "failed to get property, ipc_offset\n");
			return -EINVAL;
		}

		ret = of_property_read_u32(dev->of_node, "shmem,ipc_size",
				&pdata.ipc_size);
		if (ret) {
			dev_err(dev, "failed to get property, ipc_size\n");
			return -EINVAL;
		}

		ret = of_property_read_u32(dev->of_node, "shmem,cp_size",
				&pdata.cp_size);
		if (ret)
			dev_err(dev, "failed to get property, cp_size\n");

		ret = of_property_read_u32(dev->of_node, "shmem,vss_size",
				&pdata.vss_size);
		if (ret)
			dev_err(dev, "failed to get property, vss_size\n");


		ret = of_property_read_u32(np_acpm, "dump-base",
				&pdata.p_acpm_addr);
		if (ret)
			dev_err(dev, "failed to get property, acpm_base\n");

		ret = of_property_read_u32(np_acpm, "dump-size",
				&pdata.acpm_size);
		if (ret)
			dev_err(dev, "failed to get property, acpm_size\n");

	} else {
		/* To do: In case of non-DT */
	}

	dev_err(dev, "paddr=%lu, t_size=%u, ipc_off=%u, ipc_size=%u cp_size=%u vss_size=%u\n",
		pdata.p_addr, pdata.t_size, pdata.ipc_off, pdata.ipc_size,
		pdata.cp_size, pdata.vss_size);

	dev_err(dev, "acpm_base=0x%08X, acpm_size=0x%08X\n", pdata.p_acpm_addr,
			pdata.acpm_size);

	return 0;
}

static int shm_remove(struct platform_device *pdev)
{
	return 0;
}

static const struct of_device_id exynos_shm_dt_match[] = {
		{ .compatible = "samsung,exynos7580-shm_ipc", },
		{ .compatible = "samsung,exynos8890-shm_ipc", },
		{ .compatible = "samsung,exynos7870-shm_ipc", },
		{ .compatible = "samsung,exynos-shm_ipc", },
		{},
};
MODULE_DEVICE_TABLE(of, exynos_shm_dt_match);

static struct platform_driver shmem_driver = {
	.probe		= shm_probe,
	.remove		= shm_remove,
	.driver		= {
		.name = "shm_ipc",
		.owner = THIS_MODULE,
		.of_match_table = of_match_ptr(exynos_shm_dt_match),
	},
};
module_platform_driver(shmem_driver);

MODULE_DESCRIPTION("");
MODULE_AUTHOR("");
MODULE_LICENSE("GPL");
