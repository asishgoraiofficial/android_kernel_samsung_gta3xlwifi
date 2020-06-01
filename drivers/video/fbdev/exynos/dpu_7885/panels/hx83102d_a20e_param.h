#ifndef __HX83102D_PARAM_H__
#define __HX83102D_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

struct i2c_rom_data {
	u8 addr;
	u8 val;
};

static const struct i2c_rom_data S2DPS01_INIT[] = {
	{0x1C, 0x10},
	{0x1D, 0x8F},
	{0x1E, 0x66},
	{0x1F, 0x00},
	{0x20, 0x01},
	{0x21, 0x0F},
	{0x22, 0x00},
	{0x23, 0x00},
	{0x24, 0x00},
	{0x25, 0x01},
	{0x26, 0x02},
};

static const unsigned char SEQ_SET_B9_EXTC[] = {
	0xB9,
	0x83, 0x10, 0x2D
};

static const unsigned char SEQ_SET_B1_POWER[] = {
	0xB1,
	0x22, 0x44, 0x31, 0x31, 0x22, 0x34, 0x2F, 0x57,
	0x08, 0x08, 0x08, 
};


static const unsigned char SEQ_SET_B2_DISPLSAY[] = {
	0xB2,
	0x00, 0x00, 0x06, 0x18, 0x00, 0x0E, 0xAE, 0x40,
	0x00, 0x00, 0x00, 0x00, 0xF4, 0xA0,
};

static const unsigned char SEQ_SET_B4_TIMING[] = {
	0xB4,
	0x19, 0x59, 0x19, 0x59, 0x19, 0x59, 0x19, 0x59,
	0x06, 0xFF, 0x06, 0x20, 0x00, 0xFF,
};

static const unsigned char SEQ_SET_CC_PANEL_TYPE[] = {
	0xCC,
	0x02,
};

static const unsigned char SEQ_SET_D3_GIP[] = {
	0xD3,
	0x00, 0x00, 0x3C, 0x03, 0x00, 0x08, 0x00, 0x37,
	0x00, 0x33, 0x33, 0x08, 0x08, 0x00, 0x00, 0x32,
	0x10, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x05, 0x12, 0x00, 0x00,
};

static const unsigned char SEQ_SET_D5_GIP[] = {
	0xD5,
	0x18, 0x18, 0x18, 0x18, 0x39, 0x39, 0x18, 0x18,
	0x20, 0x21, 0x22, 0x23, 0x19, 0x19, 0x19, 0x19,
	0x04, 0x05, 0x06, 0x07, 0x00, 0x01, 0x02, 0x03,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
};

static const unsigned char SEQ_SET_D6_GIP[] = {
	0xD6,
	0x18, 0x18, 0x19, 0x19, 0x39, 0x39, 0x18, 0x18,
	0x23, 0x22, 0x21, 0x20, 0x18, 0x18, 0x19, 0x19,
	0x03, 0x02, 0x01, 0x00, 0x07, 0x06, 0x05, 0x04,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
};

static const unsigned char SEQ_SET_E7_BANK0_TP[] = {
	0xE7,
	0xFF, 0x0F, 0x00, 0x00,
};

static const unsigned char SEQ_SET_BD_SWITCH_BANK1[] = {
	0xBD,
	0x01,
};

static const unsigned char SEQ_SET_E7_BANK1_TP[] = {
	0xE7,
	0x01,
};

static const unsigned char SEQ_SET_BD_SWITCH_BANK0[] = {
	0xBD,
	0x00,
};

static const unsigned char SEQ_SET_BD_SWITCH_BANK2[] = {
	0xBD,
	0x02,
};

static const unsigned char SEQ_SET_D8_BANK2[] = {
	0xD8,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xF0,
};

static const unsigned char SEQ_SET_BD_SWITCH_BANK3[] = {
	0xBD,
	0x03
};

static const unsigned char SEQ_SET_D8_BANK3[] = {
	0xD8,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA0, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xA0, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xA0, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA0,
};

static const unsigned char SEQ_SET_E0_GAMMA[] = {
	0xE0,
	0x00, 0x01, 0x06, 0x09, 0x0E, 0x13, 0x27, 0x2D,
	0x36, 0x35, 0x56, 0x62, 0x70, 0x86, 0x8A, 0x9D,
	0xA8, 0xBF, 0xC2, 0x62, 0x6B, 0x77, 0x7F, 0x00,
	0x01, 0x06, 0x09, 0x0E, 0x13, 0x27, 0x2D, 0x36,
	0x35, 0x56, 0x62, 0x70, 0x86, 0x8A, 0x9D, 0xA8,
	0xBF, 0xC2, 0x62, 0x6B, 0x77, 0x7F,
};

static const unsigned char SEQ_SET_BA_DSI[] = {
	0xBA,
	0x70, 0x23, 0xA8, 0x8B, 0xB2, 0x80, 0x80, 0x01,
	0x10, 0x00, 0x00, 0x00, 0x08, 0x3D, 0x02, 0x77,
	0x04, 0x01, 0x00,
};

static const unsigned char SEQ_SET_CB_BANK1[] = {
	0xCB,
	0x01
};

static const unsigned char SEQ_SET_CB_BANK0[] = {
	0xCB,
	0x00, 0x53, 0x00, 0x02, 0x6C,
};

static const unsigned char SEQ_SET_BF_POWER[] = {
	0xBF,
	0xFC, 0x00, 0x24, 0x9E, 0xF6, 0x00, 0x5D,
};

static const unsigned char SEQ_SET_B4_BANK2[] = {
	0xB4,
	0x42, 0x00, 0x33, 0x00, 0x33, 0x88, 0xB3, 0x00,
};

static const unsigned char SEQ_SET_D1_TP[] = {
	0xD1,
	0x20, 0x01,
};

static const unsigned char SEQ_SET_B1_BANK2[] = {
	0xB1,
	0x7F, 0x03, 0xFF,
};

static const unsigned char SEQ_SET_D3_BANK1[] = {
	0xD3,
	0x01, 0x00, 0x39,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char SEQ_HX83102D_BL[] = {
	0x51,
	0x00, 0x00,
};

static const unsigned char SEQ_HX83102D_BLON[] = {
	0x53,
	0x2C,
};

/* platform brightness <-> bl reg */
static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	8, 17, 27, 37, 47, 56, 66, 76, 86, 95,
	105, 115, 125, 134, 144, 154, 164, 173, 183, 193,
	203, 213, 222, 232, 242, 252, 261, 271, 281, 291,
	300, 310, 320, 330, 339, 349, 359, 369, 379, 388,
	398, 408, 418, 427, 437, 447, 457, 466, 476, 486,
	496, 505, 515, 525, 535, 545, 554, 564, 574, 584,
	593, 603, 613, 623, 632, 642, 652, 662, 671, 681,
	691, 701, 710, 720, 730, 740, 750, 759, 769, 779,
	789, 798, 808, 818, 828, 837, 847, 857, 867, 876,
	886, 896, 906, 916, 925, 935, 945, 955, 964, 974,
	984, 994, 1003, 1013, 1023, 1033, 1042, 1052, 1062, 1072,
	1082, 1091, 1101, 1111, 1121, 1130, 1140, 1150, 1160, 1169,
	1179, 1189, 1199, 1208, 1218, 1228, 1238, 1248, 1263, 1278,
	1294, 1309, 1325, 1340, 1356, 1371, 1386, 1402, 1417, 1433,
	1448, 1464, 1479, 1494, 1510, 1525, 1541, 1556, 1572, 1587,
	1602, 1618, 1633, 1649, 1664, 1680, 1695, 1710, 1726, 1741,
	1757, 1772, 1788, 1803, 1819, 1834, 1849, 1865, 1880, 1896,
	1911, 1927, 1942, 1957, 1973, 1988, 2004, 2019, 2035, 2050,
	2065, 2081, 2096, 2112, 2127, 2143, 2158, 2173, 2189, 2204,
	2220, 2235, 2251, 2266, 2282, 2297, 2312, 2328, 2343, 2359,
	2374, 2390, 2405, 2420, 2436, 2451, 2467, 2482, 2498, 2513,
	2528, 2544, 2559, 2575, 2590, 2606, 2621, 2636, 2652, 2667,
	2683, 2698, 2714, 2729, 2745, 2760, 2775, 2791, 2806, 2822,
	2837, 2853, 2868, 2883, 2899, 2914, 2930, 2945, 2961, 2976,
	2991, 3007, 3022, 3038, 3053, 3069, 3084, 3099, 3115, 3130,
	3146, 3161, 3177, 3192, 3208, 3208, 3208, 3208, 3208, 3208,
	3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208,
	3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208,
	3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208,
	3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208, 3208,
	3208, 3208, 3208, 3208, 3208, 3994,
 };
#endif /* __HX83102D_PARAM_H__ */
