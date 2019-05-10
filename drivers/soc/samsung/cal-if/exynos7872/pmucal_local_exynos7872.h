struct pmucal_seq dispaud_on[] = {
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "DISPAUD_CONFIGURATION", 0x11C80000, 0x4020, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "DISPAUD_STATUS", 0x11C80000, 0x4024, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq dispaud_save[] = {
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_LOCKTIME_PLL_AUD", 0x14800000, 0x0000, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON1_PLL_AUD", 0x14800000, 0x0204, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON3_PLL_AUD", 0x14800000, 0x024C, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON4_PLL_AUD", 0x14800000, 0x0270, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "PLL_CON0_PLL_AUD", 0x14800000, 0x01E0, (0x1 << 4), (0x0 << 4), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_PLL_AUD", 0x14800000, 0x01E0, (0x7ffffff << 5) | (0xf << 0), 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_DISPAUD_BUSP", 0x14800000, 0x1824, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_AUD_UAIF3", 0x14800000, 0x1820, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_AUD_UAIF2", 0x14800000, 0x181c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_AUD_UAIF0", 0x14800000, 0x1818, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_AUD_PLL", 0x14800000, 0x1814, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_AUD_FM", 0x14800000, 0x1810, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_AUD_CPU_PCLKDBG", 0x14800000, 0x180c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_AUD_CPU_ACLK", 0x14800000, 0x1808, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_AUD_BUS", 0x14800000, 0x1804, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_AUD_AUDIF", 0x14800000, 0x1800, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_MUX_MUX_CLK_AUD_UAIF3", 0x14800000, 0x1010, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_MUX_MUX_CLK_AUD_UAIF2", 0x14800000, 0x100c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_MUX_MUX_CLK_AUD_UAIF0", 0x14800000, 0x1008, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_MUX_MUX_CLK_AUD_CPU_HCH", 0x14800000, 0x1004, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_MUX_MUX_CLK_AUD_CPU", 0x14800000, 0x1000, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_MUX_CLKCMU_AUD_CPU_USER", 0x14800000, 0x0100, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_MUX_CLKCMU_DISPAUD_BUS_USER", 0x14800000, 0x0120, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "PLL_CON0_PLL_AUD", 0x14800000, 0x01E0, (0x1 << 29), (0x1 << 29), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "PLL_CON0_PLL_AUD", 0x14800000, 0x01E0, (0x1 << 4), (0x1 << 4), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON2_PLL_AUD", 0x14800000, 0x0228, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_WDT_ABOXCPU_QCH", 0x14800000, 0x3050, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_SYSREG_DISPAUD_QCH", 0x14800000, 0x304c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_SMMU_DPU_QCH", 0x14800000, 0x3048, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_SMMU_ABOX_QCH", 0x14800000, 0x3044, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_PPMU_DPU_QCH", 0x14800000, 0x3040, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_PPMU_ABOX_QCH", 0x14800000, 0x303c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_LHS_AXI_D_DPU_QCH", 0x14800000, 0x3038, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_LHS_AXI_D_ABOX_QCH", 0x14800000, 0x3034, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_LHM_AXI_P_DISPAUD_QCH", 0x14800000, 0x3030, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_GPIO_DISPAUD_QCH", 0x14800000, 0x302c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_DPU_QCH_DPP", 0x14800000, 0x3028, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_DPU_QCH_DMA", 0x14800000, 0x3024, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_DPU_QCH_DECON0", 0x14800000, 0x3020, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_DISPAUD_CMU_DISPAUD_QCH", 0x14800000, 0x301c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_ABOX_QCH_UAIF3", 0x14800000, 0x3018, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_ABOX_QCH_UAIF2", 0x14800000, 0x3014, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_ABOX_QCH_UAIF0", 0x14800000, 0x3010, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_ABOX_QCH_BUS", 0x14800000, 0x300c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "DMYQCH_CON_ABOX_QCH_FM", 0x14800000, 0x3008, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "DMYQCH_CON_ABOX_QCH_CPU", 0x14800000, 0x3004, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "DMYQCH_CON_ABOX_QCH_ABOX", 0x14800000, 0x3000, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_DMYQCH_CON_ABOX_QCH_ABOX", 0x14800000, 0x7000, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_DMYQCH_CON_ABOX_QCH_CPU", 0x14800000, 0x7004, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_DMYQCH_CON_ABOX_QCH_FM", 0x14800000, 0x7008, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_ABOX_QCH_BUS", 0x14800000, 0x700c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_ABOX_QCH_UAIF0", 0x14800000, 0x7010, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_ABOX_QCH_UAIF2", 0x14800000, 0x7014, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_ABOX_QCH_UAIF3", 0x14800000, 0x7018, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_DISPAUD_CMU_DISPAUD_QCH", 0x14800000, 0x701c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_DPU_QCH_DECON0", 0x14800000, 0x7020, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_DPU_QCH_DMA", 0x14800000, 0x7024, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_DPU_QCH_DPP", 0x14800000, 0x7028, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_GPIO_DISPAUD_QCH", 0x14800000, 0x702c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_LHM_AXI_P_DISPAUD_QCH", 0x14800000, 0x7030, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_LHS_AXI_D_ABOX_QCH", 0x14800000, 0x7034, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_LHS_AXI_D_DPU_QCH", 0x14800000, 0x7038, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_PPMU_ABOX_QCH", 0x14800000, 0x703c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_PPMU_DPU_QCH", 0x14800000, 0x7040, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_SMMU_ABOX_QCH", 0x14800000, 0x7044, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_SMMU_DPU_QCH", 0x14800000, 0x7048, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_SYSREG_DISPAUD_QCH", 0x14800000, 0x704c, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_WDT_ABOXCPU_QCH", 0x14800000, 0x7050, 0xffffffff, 0, 0x11C80000, 0x4024, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "DISPAUD_CMU_CONTROLLER_OPTION", 0x14800000, 0x0800, (0x3 << 28), (0x3 << 28), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "SYSREG_DISPAUD_BUS_COMPONENT_DRCG_EN", 0x14820000, 0x0200, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "DPP_NS_DPP_VG0_DYNAMIC_GATING_EN", 0x14850000, 0x4A54, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "DPU_DMA_NS_IDMA_G0_DYNAMIC_GATING_EN", 0x148B0000, 0x1058, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "DPU_DMA_NS_IDMA_G1_DYNAMIC_GATING_EN", 0x148B0000, 0x2058, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "DPU_DMA_NS_IDMA_GF_DYNAMIC_GATING_EN", 0x148B0000, 0x3058, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "DPU_DMA_NS_IDMA_VG0_DYNAMIC_GATING_EN", 0x148B0000, 0x4058, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq dispaud_off[] = {
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "CLKSTOP_OPEN_CMU_DISPAUD_SYS_PWR_REG", 0x11C80000, 0x13C4, (0x3 << 0), (0x3 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "FORCE_AUTOCLKGATE_CMU_DISPAUD_SYS_PWR_REG", 0x11C80000, 0x1444, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "CLKSTOP_CMU_DISPAUD_SYS_PWR_REG", 0x11C80000, 0x1484, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "DISABLE_PLL_CMU_DISPAUD_SYS_PWR_REG", 0x11C80000, 0x14C4, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "RESET_LOGIC_DISPAUD_SYS_PWR_REG", 0x11C80000, 0x1504, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "MEMORY_DISPAUD_SYS_PWR_REG", 0x11C80000, 0x1544, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "RESET_CMU_DISPAUD_SYS_PWR_REG", 0x11C80000, 0x1584, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "LPI_RESIDUAL_CMU_DISPAUD_SYS_PWR_REG", 0x11C80000, 0x1604, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "ABOX_CA7_SYS_PWR_REG", 0x11C80000, 0x10A4, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "PAD_RETENTION_ABOX_SYS_PWR_REG", 0x11C80000, 0x1208, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "GPIO_MODE_ABOX_SYS_PWR_REG", 0x11C80000, 0x1308, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "DISPAUD_CONFIGURATION", 0x11C80000, 0x4020, (0xf << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "DISPAUD_STATUS", 0x11C80000, 0x4024, (0xf << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq dispaud_status[] = {
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DISPAUD_STATUS", 0x11C80000, 0x4024, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq mfcmscl_on[] = {
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "MFCMSCL_CONFIGURATION", 0x11C80000, 0x4040, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "MFCMSCL_STATUS", 0x11C80000, 0x4044, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq mfcmscl_save[] = {
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_MFCMSCL_BUSP", 0x12CB0000, 0x1800, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_MUX_CLKCMU_MFCMSCL_MFC_USER", 0x12CB0000, 0x0100, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_MUX_CLKCMU_MFCMSCL_MSCL_USER", 0x12CB0000, 0x0120, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_SYSREG_MFCMSCL_QCH", 0x12CB0000, 0x3024, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_SMMU_MFCMSCL_QCH", 0x12CB0000, 0x3020, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_PPMU_MFCMSCL_QCH", 0x12CB0000, 0x301c, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_MSCL_QCH", 0x12CB0000, 0x3018, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_MFC_QCH", 0x12CB0000, 0x3014, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_MFCMSCL_CMU_MFCMSCL_QCH", 0x12CB0000, 0x3010, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_LHS_AXI_D_MFCMSCL_QCH", 0x12CB0000, 0x300c, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_LHM_AXI_P_MFCMSCL_QCH", 0x12CB0000, 0x3008, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_JPEG_QCH", 0x12CB0000, 0x3004, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_G2D_QCH", 0x12CB0000, 0x3000, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_G2D_QCH", 0x12CB0000, 0x7000, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_JPEG_QCH", 0x12CB0000, 0x7004, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_LHM_AXI_P_MFCMSCL_QCH", 0x12CB0000, 0x7008, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_LHS_AXI_D_MFCMSCL_QCH", 0x12CB0000, 0x700c, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_MFCMSCL_CMU_MFCMSCL_QCH", 0x12CB0000, 0x7010, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_MFC_QCH", 0x12CB0000, 0x7014, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_MSCL_QCH", 0x12CB0000, 0x7018, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_PPMU_MFCMSCL_QCH", 0x12CB0000, 0x701c, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_SMMU_MFCMSCL_QCH", 0x12CB0000, 0x7020, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_SYSREG_MFCMSCL_QCH", 0x12CB0000, 0x7024, 0xffffffff, 0, 0x11C80000, 0x4044, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "MFCMSCL_CMU_CONTROLLER_OPTION", 0x12CB0000, 0x0800, (0x3 << 28), (0x3 << 28), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "SYSREG_MFCMSCL_MFCMSCL_DRCG_EN", 0x12CA0000, 0x3000, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "M2M_SCALER_P_SCALER_CFG_DRCG_ENABLE", 0x12C10000, 0x0004, (0x1 << 31), (0x1 << 31), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "M2M_SCALER_P_SCALER_CFG_SRAM_CG_EN", 0x12C10000, 0x0004, (0x1 << 28), (0x1 << 28), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq mfcmscl_off[] = {
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "CLKSTOP_OPEN_CMU_MFCMSCL_SYS_PWR_REG", 0x11C80000, 0x13C8, (0x3 << 0), (0x3 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "FORCE_AUTOCLKGATE_CMU_MFCMSCL_SYS_PWR_REG", 0x11C80000, 0x1448, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "CLKSTOP_CMU_MFCMSCL_SYS_PWR_REG", 0x11C80000, 0x1488, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "DISABLE_PLL_CMU_MFCMSCL_SYS_PWR_REG", 0x11C80000, 0x14C8, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "RESET_LOGIC_MFCMSCL_SYS_PWR_REG", 0x11C80000, 0x1508, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "MEMORY_MFCMSCL_SYS_PWR_REG", 0x11C80000, 0x1548, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "RESET_CMU_MFCMSCL_SYS_PWR_REG", 0x11C80000, 0x1588, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "LPI_RESIDUAL_CMU_MFCMSCL_SYS_PWR_REG", 0x11C80000, 0x1608, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "MFCMSCL_CONFIGURATION", 0x11C80000, 0x4040, (0xf << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "MFCMSCL_STATUS", 0x11C80000, 0x4044, (0xf << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq mfcmscl_status[] = {
	PMUCAL_SEQ_DESC(PMUCAL_READ, "MFCMSCL_STATUS", 0x11C80000, 0x4044, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq is_on[] = {
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "IS_CONFIGURATION", 0x11C80000, 0x4060, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "IS_STATUS", 0x11C80000, 0x4064, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq is_save[] = {
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_IS_3AA_HALF", 0x144B0000, 0x1800, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_IS_APB", 0x144B0000, 0x1804, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_MUX_CLKCMU_IS_3AA_USER", 0x144B0000, 0x0100, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_MUX_CLKCMU_IS_IS_USER", 0x144B0000, 0x0120, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_MUX_CLKCMU_IS_TPU_USER", 0x144B0000, 0x0180, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_MUX_CLKCMU_IS_VRA_USER", 0x144B0000, 0x01E0, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_ASYNCM_P_IS_QCH", 0x144B0000, 0x3000, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_ASYNCS_D0_IS_QCH", 0x144B0000, 0x3004, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_ASYNCS_D1_IS_QCH", 0x144B0000, 0x3008, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_IS5P15P0_IS_QCH_CSIS_0", 0x144B0000, 0x300c, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_IS5P15P0_IS_QCH_CSIS_1", 0x144B0000, 0x3010, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_IS5P15P0_IS_QCH_CSIS_DMA", 0x144B0000, 0x3014, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_IS5P15P0_IS_QCH_ISP", 0x144B0000, 0x301c, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_IS5P15P0_IS_QCH_IS_3AA", 0x144B0000, 0x3020, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_IS5P15P0_IS_QCH_MCSC", 0x144B0000, 0x3024, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_IS5P15P0_IS_QCH_TPU", 0x144B0000, 0x3028, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_IS5P15P0_IS_QCH_VRA", 0x144B0000, 0x302c, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_IS_CMU_IS_QCH", 0x144B0000, 0x3030, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_PPMU_NRT_QCH", 0x144B0000, 0x3034, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_PPMU_RT_QCH", 0x144B0000, 0x3038, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_SMMU_IS_QCH", 0x144B0000, 0x303c, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_SYSREG_IS_QCH", 0x144B0000, 0x3040, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_SYSREG_IS_QCH", 0x144B0000, 0x7040, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_SMMU_IS_QCH", 0x144B0000, 0x703c, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_PPMU_RT_QCH", 0x144B0000, 0x7038, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_PPMU_NRT_QCH", 0x144B0000, 0x7034, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS_CMU_IS_QCH", 0x144B0000, 0x7030, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS5P15P0_IS_QCH_VRA", 0x144B0000, 0x702c, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS5P15P0_IS_QCH_TPU", 0x144B0000, 0x7028, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS5P15P0_IS_QCH_MCSC", 0x144B0000, 0x7024, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS5P15P0_IS_QCH_IS_3AA", 0x144B0000, 0x7020, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS5P15P0_IS_QCH_ISP", 0x144B0000, 0x701c, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS5P15P0_IS_QCH_EWGEN_CSISX2", 0x144B0000, 0x7018, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS5P15P0_IS_QCH_CSIS_DMA", 0x144B0000, 0x7014, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS5P15P0_IS_QCH_CSIS_1", 0x144B0000, 0x7010, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_IS5P15P0_IS_QCH_CSIS_0", 0x144B0000, 0x700c, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_ASYNCS_D1_IS_QCH", 0x144B0000, 0x7008, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_ASYNCS_D0_IS_QCH", 0x144B0000, 0x7004, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_ASYNCM_P_IS_QCH", 0x144B0000, 0x7000, 0xffffffff, 0, 0x11C80000, 0x4064, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "IS_CMU_CONTROLLER_OPTION", 0x144B0000, 0x0800, (0x3 << 28), (0x3 << 28), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "SYSREG_IS_IS_XIU_DRCT_EN", 0x144C0000, 0x1000, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PPMU_acg_enable", 0x144C0000, 0x1100, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq is_off[] = {
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "CLKSTOP_OPEN_CMU_IS_SYS_PWR_REG", 0x11C80000, 0x13CC, (0x3 << 0), (0x3 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "FORCE_AUTOCLKGATE_CMU_IS_SYS_PWR_REG", 0x11C80000, 0x144C, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "CLKSTOP_CMU_IS_SYS_PWR_REG", 0x11C80000, 0x148C, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "DISABLE_PLL_CMU_IS_SYS_PWR_REG", 0x11C80000, 0x14CC, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "RESET_LOGIC_IS_SYS_PWR_REG", 0x11C80000, 0x150C, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "MEMORY_IS_SYS_PWR_REG", 0x11C80000, 0x154C, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "RESET_CMU_IS_SYS_PWR_REG", 0x11C80000, 0x158C, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "LPI_RESIDUAL_CMU_IS_SYS_PWR_REG", 0x11C80000, 0x160C, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "IS_CONFIGURATION", 0x11C80000, 0x4060, (0xf << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "IS_STATUS", 0x11C80000, 0x4064, (0xf << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq is_status[] = {
	PMUCAL_SEQ_DESC(PMUCAL_READ, "IS_STATUS", 0x11C80000, 0x4064, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq g3d_on[] = {
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "G3D_CONFIGURATION", 0x11C80000, 0x40A0, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "G3D_STATUS", 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq g3d_save[] = {
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_LOCKTIME_PLL_G3D", 0x11400000, 0x0000, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON1_PLL_G3D", 0x11400000, 0x0124, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON4_PLL_G3D", 0x11400000, 0x0130, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "PLL_CON0_PLL_G3D", 0x11400000, 0x0120, (0x1 << 4), (0x0 << 4), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_PLL_G3D", 0x11400000, 0x0120, (0x7ffffff << 5) | (0xf << 0), 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_DIV_DIV_CLK_G3D_BUSP", 0x11400000, 0x1800, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "CLK_CON_MUX_MUX_CLK_G3D_BUSD", 0x11400000, 0x1004, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON0_MUX_CLKCMU_G3D_SWITCH_USER", 0x11400000, 0x0100, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "PLL_CON0_PLL_G3D", 0x11400000, 0x0120, (0x1 << 29), (0x1 << 29), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "PLL_CON0_PLL_G3D", 0x11400000, 0x0120, (0x1 << 4), (0x1 << 4), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "PLL_CON2_PLL_G3D", 0x11400000, 0x0128, 0xffffffff, 0, 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_SYSREG_G3D_QCH", 0x11400000, 0x3018, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_LHS_AXI_G3DSFR_QCH", 0x11400000, 0x3014, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_LHS_AXI_D_G3D_QCH", 0x11400000, 0x3010, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_LHM_AXI_P_G3D_QCH", 0x11400000, 0x300c, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_LHM_AXI_G3DSFR_QCH", 0x11400000, 0x3008, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_G3D_CMU_G3D_QCH", 0x11400000, 0x3004, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "QCH_CON_AGPU_QCH", 0x11400000, 0x3000, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_AGPU_QCH", 0x11400000, 0x7000, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_G3D_CMU_G3D_QCH", 0x11400000, 0x7004, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_LHM_AXI_G3DSFR_QCH", 0x11400000, 0x7008, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_LHM_AXI_P_G3D_QCH", 0x11400000, 0x700c, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_LHS_AXI_D_G3D_QCH", 0x11400000, 0x7010, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_LHS_AXI_G3DSFR_QCH", 0x11400000, 0x7014, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_READ, "DBG_NFO_QCH_CON_SYSREG_G3D_QCH", 0x11400000, 0x7018, 0xffffffff, 0, 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0)),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "G3D_CMU_CONTROLLER_OPTION", 0x11400000, 0x0800, (0x3 << 28), (0x3 << 28), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_SAVE_RESTORE, "SYSREG_G3D_BUS_COMPONENT_DRCG_EN", 0x11430000, 0x0104, (0xffffffff << 0), (0xFFFFFFFF << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq g3d_off[] = {
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "PLL_CON2_PLL_G3D", 0x11400000, 0x0128, (0x3 << 0), (0x2 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "PLL_CON0_PLL_G3D", 0x11400000, 0x0120, (0x1 << 4), (0x1 << 4), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "CLKSTOP_OPEN_CMU_G3D_SYS_PWR_REG", 0x11C80000, 0x13D4, (0x3 << 0), (0x3 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "FORCE_AUTOCLKGATE_CMU_G3D_SYS_PWR_REG", 0x11C80000, 0x1454, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "CLKSTOP_CMU_G3D_SYS_PWR_REG", 0x11C80000, 0x1494, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "DISABLE_PLL_CMU_G3D_SYS_PWR_REG", 0x11C80000, 0x14D4, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "RESET_LOGIC_G3D_SYS_PWR_REG", 0x11C80000, 0x1514, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "MEMORY_G3D_SYS_PWR_REG", 0x11C80000, 0x1554, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "RESET_CMU_G3D_SYS_PWR_REG", 0x11C80000, 0x1594, (0x3 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "LPI_RESIDUAL_CMU_G3D_SYS_PWR_REG", 0x11C80000, 0x1614, (0x1 << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WRITE, "G3D_CONFIGURATION", 0x11C80000, 0x40A0, (0xf << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
	PMUCAL_SEQ_DESC(PMUCAL_WAIT, "G3D_STATUS", 0x11C80000, 0x40A4, (0xf << 0), (0x0 << 0), 0, 0, 0xffffffff, 0),
};

struct pmucal_seq g3d_status[] = {
	PMUCAL_SEQ_DESC(PMUCAL_READ, "G3D_STATUS", 0x11C80000, 0x40A4, (0xf << 0), (0xF << 0), 0, 0, 0xffffffff, 0),
};

enum pmucal_local_pdnum {
	PD_DISPAUD,
	PD_MFCMSCL,
	PD_IS,
	PD_G3D,
};

struct pmucal_pd pmucal_pd_list[PMUCAL_NUM_PDS] = {
	[PD_DISPAUD] = {
		.id = PD_DISPAUD,
		.name = "blkpwr_dispaud",
		.on = dispaud_on,
		.save = dispaud_save,
		.off = dispaud_off,
		.status = dispaud_status,
		.num_on = ARRAY_SIZE(dispaud_on),
		.num_save = ARRAY_SIZE(dispaud_save),
		.num_off = ARRAY_SIZE(dispaud_off),
		.num_status = ARRAY_SIZE(dispaud_status),
	},
	[PD_MFCMSCL] = {
		.id = PD_MFCMSCL,
		.name = "blkpwr_mfcmscl",
		.on = mfcmscl_on,
		.save = mfcmscl_save,
		.off = mfcmscl_off,
		.status = mfcmscl_status,
		.num_on = ARRAY_SIZE(mfcmscl_on),
		.num_save = ARRAY_SIZE(mfcmscl_save),
		.num_off = ARRAY_SIZE(mfcmscl_off),
		.num_status = ARRAY_SIZE(mfcmscl_status),
	},
	[PD_IS] = {
		.id = PD_IS,
		.name = "blkpwr_is",
		.on = is_on,
		.save = is_save,
		.off = is_off,
		.status = is_status,
		.num_on = ARRAY_SIZE(is_on),
		.num_save = ARRAY_SIZE(is_save),
		.num_off = ARRAY_SIZE(is_off),
		.num_status = ARRAY_SIZE(is_status),
	},
	[PD_G3D] = {
		.id = PD_G3D,
		.name = "blkpwr_g3d",
		.on = g3d_on,
		.save = g3d_save,
		.off = g3d_off,
		.status = g3d_status,
		.num_on = ARRAY_SIZE(g3d_on),
		.num_save = ARRAY_SIZE(g3d_save),
		.num_off = ARRAY_SIZE(g3d_off),
		.num_status = ARRAY_SIZE(g3d_status),
	},
};
unsigned int pmucal_pd_list_size = 4;
