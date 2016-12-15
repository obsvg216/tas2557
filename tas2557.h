/*
** =============================================================================
** Copyright (c) 2016  Texas Instruments Inc.
**
** This program is free software; you can redistribute it and/or modify it under
** the terms of the GNU General Public License as published by the Free Software 
** Foundation; version 2.
**
** This program is distributed in the hope that it will be useful, but WITHOUT
** ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
** FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License along with
** this program; if not, write to the Free Software Foundation, Inc., 51 Franklin
** Street, Fifth Floor, Boston, MA 02110-1301, USA.
**
** File:
**     tas2557.h
**
** Description:
**     definitions and data structures for TAS2557 Android Linux driver
**
** =============================================================================
*/

#ifndef _TAS2557_H
#define _TAS2557_H

/* Page Control Register */
#define TAS2557_PAGECTL_REG			0

/* Book Control Register (available in page0 of each book) */
#define TAS2557_BOOKCTL_PAGE			0
#define TAS2557_BOOKCTL_REG			127

#define TAS2557_REG(book, page, reg)		(((book * 256 * 128) + \
						 (page * 128)) + reg)

#define TAS2557_BOOK_ID(reg)			(reg / (256 * 128))
#define TAS2557_PAGE_ID(reg)			((reg % (256 * 128)) / 128)
#define TAS2557_BOOK_REG(reg)			(reg % (256 * 128))
#define TAS2557_PAGE_REG(reg)			((reg % (256 * 128)) % 128)

/* Book0, Page0 registers */
#define TAS2557_SW_RESET_REG			TAS2557_REG(0, 0, 1)

#define TAS2557_REV_PGID_REG			TAS2557_REG(0, 0, 3)
#define TAS2557_PG_VERSION_1P0			0x00
#define TAS2557_PG_VERSION_2P0			0x10
#define TAS2557_PG_VERSION_2P1			0x20

#define TAS2557_POWER_CTRL1_REG			TAS2557_REG(0, 0, 4)
#define TAS2557_POWER_CTRL2_REG			TAS2557_REG(0, 0, 5)
#define TAS2557_SPK_CTRL_REG			TAS2557_REG(0, 0, 6)
#define TAS2557_MUTE_REG				TAS2557_REG(0, 0, 7)
#define TAS2557_SNS_CTRL_REG			TAS2557_REG(0, 0, 8)
#define TAS2557_ADC_INPUT_SEL_REG		TAS2557_REG(0, 0, 9)
#define TAS2557_DBOOST_CTL_REG			TAS2557_REG(0, 0, 10)
#define TAS2557_NONAME11_REG			TAS2557_REG(0, 0, 11)
#define TAS2557_NONAME12_REG			TAS2557_REG(0, 0, 12)
#define TAS2557_NONAME13_REG			TAS2557_REG(0, 0, 13)
#define TAS2557_NONAME14_REG			TAS2557_REG(0, 0, 14)
#define TAS2557_NONAME15_REG			TAS2557_REG(0, 0, 15)
#define TAS2557_NONAME16_REG			TAS2557_REG(0, 0, 16)
#define TAS2557_NONAME17_REG			TAS2557_REG(0, 0, 17)
#define TAS2557_NONAME18_REG			TAS2557_REG(0, 0, 18)
#define TAS2557_SAR_SAMPLING_TIME_REG		TAS2557_REG(0, 0, 19)
#define TAS2557_SAR_ADC1_REG			TAS2557_REG(0, 0, 20)
#define TAS2557_SAR_ADC2_REG			TAS2557_REG(0, 0, 21)
#define TAS2557_CRC_CHECKSUM_REG		TAS2557_REG(0, 0, 32)
#define TAS2557_CRC_RESET_REG			TAS2557_REG(0, 0, 33)
#define TAS2557_DSP_MODE_SELECT_REG		TAS2557_REG(0, 0, 34)
#define TAS2557_ASI_CTRL_REG			TAS2557_REG(0, 0, 42)
#define TAS2557_CLK_ERR_CTRL			TAS2557_REG(0, 0, 44)
#define TAS2557_DBOOST_CFG_REG			TAS2557_REG(0, 0, 52)
#define TAS2557_POWER_UP_FLAG_REG		TAS2557_REG(0, 0, 100)
#define TAS2557_FLAGS_1				TAS2557_REG(0, 0, 104)
#define TAS2557_FLAGS_2				TAS2557_REG(0, 0, 108)
/* Book0, Page1 registers */
#define TAS2557_ASI1_DAC_FORMAT_REG		TAS2557_REG(0, 1, 1)
#define TAS2557_ASI1_ADC_FORMAT_REG		TAS2557_REG(0, 1, 2)
#define TAS2557_ASI1_OFFSET1_REG		TAS2557_REG(0, 1, 3)
#define TAS2557_ASI1_ADC_PATH_REG		TAS2557_REG(0, 1, 7)
#define TAS2557_ASI1_DAC_BCLK_REG		TAS2557_REG(0, 1, 8)
#define TAS2557_ASI1_DAC_WCLK_REG		TAS2557_REG(0, 1, 9)
#define TAS2557_ASI1_ADC_BCLK_REG		TAS2557_REG(0, 1, 10)
#define TAS2557_ASI1_ADC_WCLK_REG		TAS2557_REG(0, 1, 11)
#define TAS2557_ASI1_DIN_DOUT_MUX_REG		TAS2557_REG(0, 1, 12)
#define TAS2557_ASI1_BDIV_CLK_SEL_REG		TAS2557_REG(0, 1, 13)
#define TAS2557_ASI1_BDIV_CLK_RATIO_REG		TAS2557_REG(0, 1, 14)
#define TAS2557_ASI1_WDIV_CLK_RATIO_REG		TAS2557_REG(0, 1, 15)
#define TAS2557_ASI1_DAC_CLKOUT_REG		TAS2557_REG(0, 1, 16)
#define TAS2557_ASI1_ADC_CLKOUT_REG		TAS2557_REG(0, 1, 17)

#define TAS2557_ASI2_DAC_FORMAT_REG		TAS2557_REG(0, 1, 21)
#define TAS2557_ASI2_ADC_FORMAT_REG		TAS2557_REG(0, 1, 22)
#define TAS2557_ASI2_OFFSET1_REG		TAS2557_REG(0, 1, 23)
#define TAS2557_ASI2_ADC_PATH_REG		TAS2557_REG(0, 1, 27)
#define TAS2557_ASI2_DAC_BCLK_REG		TAS2557_REG(0, 1, 28)
#define TAS2557_ASI2_DAC_WCLK_REG		TAS2557_REG(0, 1, 29)
#define TAS2557_ASI2_ADC_BCLK_REG		TAS2557_REG(0, 1, 30)
#define TAS2557_ASI2_ADC_WCLK_REG		TAS2557_REG(0, 1, 31)
#define TAS2557_ASI2_DIN_DOUT_MUX_REG		TAS2557_REG(0, 1, 32)
#define TAS2557_ASI2_BDIV_CLK_SEL_REG		TAS2557_REG(0, 1, 33)
#define TAS2557_ASI2_BDIV_CLK_RATIO_REG		TAS2557_REG(0, 1, 34)
#define TAS2557_ASI2_WDIV_CLK_RATIO_REG		TAS2557_REG(0, 1, 35)
#define TAS2557_ASI2_DAC_CLKOUT_REG		TAS2557_REG(0, 1, 36)
#define TAS2557_ASI2_ADC_CLKOUT_REG		TAS2557_REG(0, 1, 37)

#define TAS2557_GPIO1_PIN_REG			TAS2557_REG(0, 1, 61)
#define TAS2557_GPIO2_PIN_REG			TAS2557_REG(0, 1, 62)
#define TAS2557_GPIO3_PIN_REG			TAS2557_REG(0, 1, 63)
#define TAS2557_GPIO4_PIN_REG			TAS2557_REG(0, 1, 64)
#define TAS2557_GPIO5_PIN_REG			TAS2557_REG(0, 1, 65)
#define TAS2557_GPIO6_PIN_REG			TAS2557_REG(0, 1, 66)
#define TAS2557_GPIO7_PIN_REG			TAS2557_REG(0, 1, 67)
#define TAS2557_GPIO8_PIN_REG			TAS2557_REG(0, 1, 68)
#define TAS2557_GPIO9_PIN_REG			TAS2557_REG(0, 1, 69)
#define TAS2557_GPIO10_PIN_REG			TAS2557_REG(0, 1, 70)

#define TAS2557_GPI_PIN_REG			TAS2557_REG(0, 1, 77)
#define TAS2557_GPIO_HIZ_CTRL1_REG		TAS2557_REG(0, 1, 79)
#define TAS2557_GPIO_HIZ_CTRL2_REG		TAS2557_REG(0, 1, 80)
#define TAS2557_GPIO_HIZ_CTRL3_REG		TAS2557_REG(0, 1, 81)
#define TAS2557_GPIO_HIZ_CTRL4_REG		TAS2557_REG(0, 1, 82)
#define TAS2557_GPIO_HIZ_CTRL5_REG		TAS2557_REG(0, 1, 83)

#define TAS2557_BIT_BANG_CTRL_REG		TAS2557_REG(0, 1, 87)
#define TAS2557_BIT_BANG_OUT1_REG		TAS2557_REG(0, 1, 88)
#define TAS2557_BIT_BANG_OUT2_REG		TAS2557_REG(0, 1, 89)
#define TAS2557_BIT_BANG_IN1_REG		TAS2557_REG(0, 1, 90)
#define TAS2557_BIT_BANG_IN2_REG		TAS2557_REG(0, 1, 91)
#define TAS2557_BIT_BANG_IN3_REG		TAS2557_REG(0, 1, 92)

#define TAS2557_PDM_IN_CLK_REG			TAS2557_REG(0, 1, 94)
#define TAS2557_PDM_IN_PIN_REG			TAS2557_REG(0, 1, 95)

#define TAS2557_ASIM_IFACE1_REG			TAS2557_REG(0, 1, 98)
#define TAS2557_ASIM_FORMAT_REG			TAS2557_REG(0, 1, 99)
#define TAS2557_ASIM_IFACE3_REG			TAS2557_REG(0, 1, 100)
#define TAS2557_ASIM_IFACE4_REG			TAS2557_REG(0, 1, 101)
#define TAS2557_ASIM_IFACE5_REG			TAS2557_REG(0, 1, 102)
#define TAS2557_ASIM_IFACE6_REG			TAS2557_REG(0, 1, 103)
#define TAS2557_ASIM_IFACE7_REG			TAS2557_REG(0, 1, 104)
#define TAS2557_ASIM_IFACE8_REG			TAS2557_REG(0, 1, 105)
#define TAS2557_ASIM_IFACE9_REG			TAS2557_REG(0, 1, 106)

#define TAS2557_MAIN_CLKIN_REG			TAS2557_REG(0, 1, 115)
#define TAS2557_PLL_CLKIN_REG			TAS2557_REG(0, 1, 116)
#define TAS2557_CLKOUT_MUX_REG			TAS2557_REG(0, 1, 117)
#define TAS2557_CLKOUT_CDIV_REG			TAS2557_REG(0, 1, 118)

#define TAS2557_HACK_GP01_REG			TAS2557_REG(0, 1, 122)
#define TAS2557_HACK01_REG			TAS2557_REG(0, 2, 10)

#define TAS2557_ISENSE_THRESHOLD		TAS2557_REG(0, 50, 104)
#define TAS2557_BOOSTON_EFFICIENCY		TAS2557_REG(0, 51, 16)
#define TAS2557_BOOSTOFF_EFFICIENCY		TAS2557_REG(0, 51, 20)
#define TAS2557_BOOST_HEADROOM			TAS2557_REG(0, 51, 24)
#define TAS2557_THERMAL_FOLDBACK_REG	TAS2557_REG(0, 51, 100)
#define TAS2557_VPRED_COMP_REG			TAS2557_REG(0, 53, 24)

#define TAS2557_TEST_MODE_REG			TAS2557_REG(0, 253, 13)
#define TAS2557_CRYPTIC_REG			TAS2557_REG(0, 253, 71)

//#define TAS2557__REG      TAS2557_REG(0, 1, )
//#define TAS2557__REG      TAS2557_REG(1, 0, )
#define TAS2557_DAC_INTERPOL_REG		TAS2557_REG(100, 0, 1)
#define TAS2557_SOFT_MUTE_REG			TAS2557_REG(100, 0, 7)
#define TAS2557_PLL_P_VAL_REG			TAS2557_REG(100, 0, 27)
#define TAS2557_PLL_J_VAL_REG			TAS2557_REG(100, 0, 28)
#define TAS2557_PLL_D_VAL_MSB_REG		TAS2557_REG(100, 0, 29)
#define TAS2557_PLL_D_VAL_LSB_REG		TAS2557_REG(100, 0, 30)
#define TAS2557_CLK_MISC_REG			TAS2557_REG(100, 0, 31)
#define TAS2557_PLL_N_VAL_REG			TAS2557_REG(100, 0, 32)
#define TAS2557_DAC_MADC_VAL_REG		TAS2557_REG(100, 0, 33)
#define TAS2557_ISENSE_DIV_REG			TAS2557_REG(100, 0, 42)
#define TAS2557_RAMP_CLK_DIV_MSB_REG		TAS2557_REG(100, 0, 43)
#define TAS2557_RAMP_CLK_DIV_LSB_REG		TAS2557_REG(100, 0, 44)
/* Bits */
/* B0P0R4 - TAS2557_POWER_CTRL1_REG */
#define TAS2557_SW_SHUTDOWN			(0x1 << 0)
#define TAS2557_MADC_POWER_UP			(0x1 << 3)
#define TAS2557_MDAC_POWER_UP			(0x1 << 4)
#define TAS2557_NDIV_POWER_UP			(0x1 << 5)
#define TAS2557_PLL_POWER_UP			(0x1 << 6)
#define TAS2557_DSP_POWER_UP			(0x1 << 7)

/* B0P0R5 - TAS2557_POWER_CTRL2_REG */
#define TAS2557_VSENSE_ENABLE			(0x1 << 0)
#define TAS2557_ISENSE_ENABLE			(0x1 << 1)
#define TAS2557_BOOST_ENABLE			(0x1 << 5)
#define TAS2557_CLASSD_ENABLE			(0x1 << 7)

/* B0P0R6 - TAS2557_SPK_CTRL_REG */
#define TAS2557_DAC_GAIN_MASK			(0xf << 3)

/* B0P0R7 - TAS2557_MUTE_REG */
#define TAS2557_CLASSD_MUTE			(0x1 << 0)
#define TAS2557_ISENSE_MUTE			(0x1 << 1)

/* B0P253R13 - TAS2557_TEST_MODE_REG */
#define TAS2557_TEST_MODE_ENABLE		(13)
#define TAS2557_TEST_MODE_MASK			(0xf << 0)

/* B0P253R71 - TAS2557_CRYPTIC_REG */
#define TAS2557_OSC_TRIM_CAP(x)			((x & 0x3f) << 0)
#define TAS2557_DISABLE_ENCRYPTION		(0x1 << 6)
#define TAS2557_SL_COMP				(0x1 << 7)

/* B0P1R115/6 - TAS2557_MAIN/PLL_CLKIN_REG */
#define TAS2557_XXX_CLKIN_GPIO1			(0)
#define TAS2557_XXX_CLKIN_GPIO2			(1)
#define TAS2557_XXX_CLKIN_GPIO3			(2)
#define TAS2557_XXX_CLKIN_GPIO4			(3)
#define TAS2557_XXX_CLKIN_GPIO5			(4)
#define TAS2557_XXX_CLKIN_GPIO6			(5)
#define TAS2557_XXX_CLKIN_GPIO7			(6)
#define TAS2557_XXX_CLKIN_GPIO8			(7)
#define TAS2557_XXX_CLKIN_GPIO9			(8)
#define TAS2557_XXX_CLKIN_GPIO10		(9)
#define TAS2557_XXX_CLKIN_GPI1			(12)
#define TAS2557_XXX_CLKIN_GPI2			(13)
#define TAS2557_XXX_CLKIN_GPI3			(14)
#define TAS2557_NDIV_CLKIN_PLL			(15)
#define TAS2557_PLL_CLKIN_INT_OSC		(15)

#define TAS2557_MCLK_CLKIN_SRC_GPIO1       (0)
#define TAS2557_MCLK_CLKIN_SRC_GPIO2       (1)
#define TAS2557_MCLK_CLKIN_SRC_GPIO3       (2)
#define TAS2557_MCLK_CLKIN_SRC_GPIO4       (3)
#define TAS2557_MCLK_CLKIN_SRC_GPIO5       (4)
#define TAS2557_MCLK_CLKIN_SRC_GPIO6       (5)
#define TAS2557_MCLK_CLKIN_SRC_GPIO7       (6)
#define TAS2557_MCLK_CLKIN_SRC_GPIO8       (7)
#define TAS2557_MCLK_CLKIN_SRC_GPIO9       (8)
#define TAS2557_MCLK_CLKIN_SRC_GPIO10      (9)
#define TAS2557_MCLK_CLKIN_SRC_GPI1        (12)
#define TAS2557_MCLK_CLKIN_SRC_GPI2        (13)
#define TAS2557_MCLK_CLKIN_SRC_GPI3        (14)

#define TAS2557_FORMAT_I2S			(0x0 << 5)
#define TAS2557_FORMAT_DSP			(0x1 << 5)
#define TAS2557_FORMAT_RIGHT_J			(0x2 << 5)
#define TAS2557_FORMAT_LEFT_J			(0x3 << 5)
#define TAS2557_FORMAT_MONO_PCM			(0x4 << 5)
#define TAS2557_FORMAT_MASK			(0x7 << 5)

#define TAS2557_WORDLENGTH_16BIT		(0x0 << 3)
#define TAS2557_WORDLENGTH_20BIT		(0x1 << 3)
#define TAS2557_WORDLENGTH_24BIT		(0x2 << 3)
#define TAS2557_WORDLENGTH_32BIT		(0x3 << 3)
#define TAS2557_WORDLENGTH_MASK			TAS2557_WORDLENGTH_32BIT

/* B100P0R7 - TAS2557_SOFT_MUTE_REG */
#define TAS2557_PDM_SOFT_MUTE			(0x1 << 0)
#define TAS2557_VSENSE_SOFT_MUTE		(0x1 << 1)
#define TAS2557_ISENSE_SOFT_MUTE		(0x1 << 2)
#define TAS2557_CLASSD_SOFT_MUTE		(0x1 << 3)

/* B100P0R27 - TAS2557_PLL_P_VAL_REG */
#define TAS2557_PLL_P_VAL_MASK			(0x3f << 0)

/* B100P0R28 - TAS2557_PLL_J_VAL_REG */
#define TAS2557_PLL_J_VAL_MASK			((unsigned int ) (0x7f << 0))
#define TAS2557_PLL_J_VAL_MASKX	0x00

/* B100P0R29-30 - TAS2557_PLL_D_VAL_MSB/LSB_REG */
#define TAS2557_PLL_D_MSB_VAL(x)		((x >> 8) & 0x3f)
#define TAS2557_PLL_D_LSB_VAL(x)		(x & 0xff)

/* B100P0R31 - TAS2557_CLK_MISC_REG */
#define TAS2557_DSP_CLK_FROM_PLL		(0x1 << 5)

#define TAS2557_FW_NAME     "tas2557_uCDSP.bin"

#define LEFT_CHANNEL	0
#define RIGHT_CHANNEL	1

typedef struct {
	unsigned int mnType;
	unsigned int mnCommands;
	unsigned char *mpData;
} TBlock;

typedef struct {
	char mpName[64];
	char *mpDescription;
	unsigned int mnBlocks;
	TBlock *mpBlocks;
} TData;

typedef struct {
	char mpName[64];
	char *mpDescription;
	unsigned char mnAppMode;
	unsigned short mnBoost;
	TData mData;
} TProgram;

typedef struct {
	char mpName[64];
	char *mpDescription;
	TBlock mBlock;
} TPLL;

typedef struct {
	char mpName[64];
	char *mpDescription;
	unsigned int mnProgram;
	unsigned int mnPLL;
	unsigned int mnSamplingRate;
	TData mData;
} TConfiguration;

typedef struct
{
	char mpName[64];
	char *mpDescription;
	unsigned int mnProgram;
	unsigned int mnConfiguration;
	TBlock mBlock;
} TCalibration;

typedef struct {
	unsigned int mnFWSize;
	unsigned int mnChecksum;
	unsigned int mnPPCVersion;
	unsigned int mnFWVersion;
	unsigned int mnDriverVersion;
	unsigned int mnTimeStamp;
	char mpDDCName[64];
	char *mpDescription;
	unsigned int mnDeviceFamily;
	unsigned int mnDevice;
	unsigned int mnPLLs;
	TPLL *mpPLLs;
	unsigned int mnPrograms;
	TProgram *mpPrograms;
	unsigned int mnConfigurations;
	TConfiguration *mpConfigurations;
	unsigned int mnCalibrations;
	TCalibration *mpCalibrations;
} TFirmware;

struct tas2557_register {
	int book;
	int page;
	int reg;
};

struct tas2557_priv {
	struct device *dev;
	struct regmap *mpRegmap;
	int mnLoad;
	int mnPGID;
	int mnResetGPIO;	
	struct mutex dev_lock;	
	TFirmware *mpFirmware;
	TFirmware *mpCalFirmware;
	unsigned int mnCurrentProgram;
	unsigned int mnCurrentSampleRate;
	unsigned int mnCurrentConfiguration;
	unsigned int mnCurrentCalibration;
	int mnCurrentBook;
	int mnCurrentPage;
	int mnDevChl;
	bool mbTILoadActive;
	bool mbPowerUp;
	bool mbLoadConfigurationPostPowerUp;
	bool mbLoadCalibrationPostPowerUp;
	unsigned int mnPowerCtrl;
	bool mbCalibrationLoaded;
	int (*read) (struct tas2557_priv * pTAS2557, unsigned int reg,
		unsigned int *pValue);
	int (*write) (struct tas2557_priv * pTAS2557, unsigned int reg,
		unsigned int Value);
	int (*bulk_read) (struct tas2557_priv * pTAS2557, unsigned int reg,
		unsigned char *pData, unsigned int len);
	int (*bulk_write) (struct tas2557_priv * pTAS2557, unsigned int reg,
		unsigned char *pData, unsigned int len);
	int (*update_bits) (struct tas2557_priv * pTAS2557, unsigned int reg,
		unsigned int mask, unsigned int value);
	int (*set_config) (struct tas2557_priv *pTAS2557, int config);
	int (*set_calibration) (struct tas2557_priv *pTAS2557, int calibration);	
#ifdef CONFIG_TAS2557_CODEC	
	struct mutex codec_lock;
#endif	
#ifdef CONFIG_TAS2557_MISC	
	int mnDBGCmd;
	int mnCurrentReg;	
	struct mutex file_lock;
#endif	
};

#endif /* _TAS2557_H */