/*
*********************************************************************************************************
*
*	模块名称 : 汉字点阵字库。有效显示区 高16x宽15, 最右一列留白
*	文件名称 : hz16.c
*	版    本 : V1.0
*	说    明 : 只包含本程序用到汉字字库
*	修改记录 :
*		版本号  日期      
*		v1.0    2012-12-12 
*
*
*********************************************************************************************************
*/


/*
	FLASH中内嵌小字库，只包括本程序用到的汉字点阵
	每行点阵数据，头2字节是汉子的内码，后面32字节是16点阵汉子的字模数据。
*/

unsigned char const g_Hz16[] = {
0xB0,0xB2, 0x02,0x00,0x01,0x00,0x7F,0xFE,0x40,0x02,0x82,0x04,0x02,0x00,0x02,0x04,0xFF,0xFE,// 安 //
           0x04,0x20,0x08,0x20,0x18,0x20,0x06,0x40,0x01,0x80,0x02,0x40,0x0C,0x30,0x30,0x10,

0xB1,0xB3, 0x04,0x40,0x04,0x44,0x7C,0x78,0x04,0x42,0x1C,0x42,0xE4,0x3E,0x40,0x10,0x1F,0xF8,// 背 //
           0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x50,0x10,0x20,

0xB1,0xEA, 0x10,0x00,0x10,0x10,0x13,0xF8,0x10,0x00,0xFC,0x00,0x10,0x04,0x37,0xFE,0x38,0x40,// 标 //
           0x54,0x40,0x51,0x50,0x91,0x48,0x12,0x4C,0x14,0x44,0x10,0x40,0x11,0x40,0x10,0x80,

0xB3,0xCC, 0x08,0x04,0x1D,0xFE,0xF1,0x04,0x11,0x04,0x11,0x04,0xFF,0x04,0x11,0xFC,0x38,0x00,// 程 //
           0x37,0xFE,0x54,0x20,0x50,0x28,0x91,0xFC,0x10,0x20,0x10,0x24,0x17,0xFE,0x10,0x00,

0xB4,0xA5, 0x20,0x20,0x20,0x20,0x3C,0x20,0x48,0x24,0x51,0xFE,0xFD,0x24,0x55,0x24,0x55,0x24,// 触 //
           0x7D,0x24,0x55,0x24,0x55,0xFC,0x7D,0x20,0x54,0x28,0x54,0x3C,0x55,0xE2,0x8C,0x82,

0xB4,0xA6, 0x00,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x1E,0x40,0x22,0x60,0x22,0x50,0x22,0x4C,// 处 //
           0x54,0x44,0x94,0x40,0x08,0x40,0x14,0x40,0x14,0x40,0x22,0x06,0x41,0xFC,0x80,0x00,

0xB4,0xAE, 0x01,0x00,0x01,0x08,0x3F,0xFC,0x21,0x08,0x21,0x08,0x3F,0xF8,0x01,0x00,0x01,0x04,// 串 //
           0x7F,0xFE,0x41,0x04,0x41,0x04,0x7F,0xFC,0x41,0x04,0x01,0x00,0x01,0x00,0x01,0x00,

0xB5,0xB1, 0x01,0x00,0x21,0x08,0x19,0x18,0x09,0x20,0x01,0x00,0x01,0x08,0x7F,0xFC,0x00,0x08,// 当 //
           0x00,0x08,0x00,0x08,0x3F,0xF8,0x00,0x08,0x00,0x08,0x00,0x08,0x7F,0xF8,0x00,0x08,

0xB5,0xE3, 0x02,0x00,0x02,0x00,0x02,0x08,0x03,0xFC,0x02,0x00,0x02,0x10,0x3F,0xF8,0x20,0x10,// 点 //
           0x20,0x10,0x20,0x10,0x3F,0xF0,0x00,0x00,0x29,0x10,0x24,0xC8,0x44,0x44,0x80,0x04,

0xB5,0xF7, 0x40,0x04,0x27,0xFE,0x24,0x44,0x04,0x44,0x05,0xF4,0xE4,0x44,0x24,0x54,0x27,0xFC,// 调 //
           0x24,0x04,0x25,0xF4,0x25,0x14,0x2D,0x14,0x35,0xF4,0x25,0x04,0x08,0x14,0x10,0x08,

0xB6,0xC8, 0x01,0x00,0x00,0x84,0x3F,0xFE,0x22,0x20,0x22,0x28,0x3F,0xFC,0x22,0x20,0x23,0xE0,// 度 //
           0x20,0x00,0x2F,0xF0,0x22,0x20,0x21,0x40,0x20,0x80,0x43,0x60,0x8C,0x1E,0x30,0x04,

0xB8,0xBB, 0x02,0x00,0x01,0x00,0x7F,0xFE,0x40,0x22,0x9F,0xF4,0x00,0x00,0x1F,0xF0,0x10,0x10,// 富 //
           0x1F,0xF0,0x00,0x08,0x3F,0xFC,0x21,0x08,0x3F,0xF8,0x21,0x08,0x3F,0xF8,0x20,0x08,

0xB8,0xCB, 0x10,0x00,0x10,0x08,0x11,0xFC,0x10,0x20,0xFC,0x20,0x10,0x20,0x30,0x24,0x3B,0xFE,// 杆 //
           0x54,0x20,0x50,0x20,0x90,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x20,0x10,0x20,

0xB9,0xE2, 0x01,0x00,0x21,0x08,0x11,0x0C,0x09,0x10,0x09,0x20,0x01,0x04,0xFF,0xFE,0x04,0x40,// 光 //
           0x04,0x40,0x04,0x40,0x04,0x40,0x08,0x40,0x08,0x42,0x10,0x42,0x20,0x3E,0x40,0x00,

0xBA,0xBA, 0x00,0x00,0x40,0x08,0x37,0xFC,0x10,0x08,0x82,0x08,0x62,0x08,0x22,0x10,0x09,0x10,// 汉 //
           0x11,0x20,0x20,0xA0,0xE0,0x40,0x20,0xA0,0x21,0x10,0x22,0x08,0x24,0x0E,0x08,0x04,

0xBC,0xFC, 0x20,0x10,0x27,0x10,0x39,0x7C,0x41,0x14,0x82,0xFE,0x7A,0x14,0x24,0x7C,0x27,0x10,// 键 //
           0xF9,0x7C,0x21,0x10,0x25,0x14,0x22,0xFE,0x2A,0x10,0x35,0x10,0x28,0x96,0x00,0x7C,

0xBD,0xDA, 0x04,0x40,0x04,0x44,0xFF,0xFE,0x04,0x40,0x04,0x48,0x7F,0xFC,0x02,0x08,0x02,0x08,// 节 //
           0x02,0x08,0x02,0x08,0x02,0x48,0x02,0x28,0x02,0x10,0x02,0x00,0x02,0x00,0x02,0x00,

0xBE,0xB0, 0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x01,0x04,0xFF,0xFE,0x00,0x10,// 景 //
           0x1F,0xF8,0x10,0x10,0x10,0x10,0x1F,0xF0,0x09,0x20,0x11,0x18,0x65,0x08,0x02,0x00,

0xC0,0xB3, 0x08,0x20,0x08,0x24,0xFF,0xFE,0x09,0x20,0x01,0x08,0x7F,0xFC,0x01,0x00,0x09,0x20,// 莱 //
           0x05,0x44,0xFF,0xFE,0x03,0x80,0x05,0x40,0x09,0x30,0x31,0x0E,0xC1,0x04,0x01,0x00,

0xC0,0xFD, 0x10,0x04,0x10,0x44,0x1F,0xE4,0x22,0x04,0x22,0x14,0x67,0xD4,0xA4,0x54,0x28,0x54,// 例 //
           0x34,0x94,0x22,0x94,0x21,0x14,0x22,0x04,0x24,0x04,0x28,0x04,0x20,0x14,0x20,0x08,

0xC1,0xC1, 0x01,0x08,0x7F,0xFC,0x00,0x10,0x1F,0xF8,0x10,0x10,0x10,0x10,0x1F,0xF0,0x00,0x00,// 亮 //
           0x7F,0xFE,0x40,0x22,0x8F,0xF4,0x08,0x20,0x08,0x20,0x08,0x22,0x10,0x22,0x60,0x1E,

0xC3,0xFE, 0x11,0x10,0x11,0x14,0x1F,0xFE,0x11,0x10,0xFD,0x18,0x13,0xFC,0x16,0x08,0x1B,0xF8,// 摸 //
           0x32,0x08,0xD3,0xF8,0x10,0x40,0x1F,0xFE,0x10,0x40,0x10,0xA0,0x51,0x1C,0x26,0x08,

0xC6,0xC1, 0x00,0x08,0x3F,0xFC,0x20,0x08,0x20,0x08,0x3F,0xF8,0x22,0x20,0x21,0x48,0x2F,0xFC,// 屏 //
           0x22,0x20,0x22,0x24,0x3F,0xFE,0x22,0x20,0x22,0x20,0x42,0x20,0x84,0x20,0x08,0x20,

0xC7,0xB0, 0x10,0x10,0x0C,0x30,0x04,0x44,0xFF,0xFE,0x00,0x00,0x3E,0x08,0x22,0x48,0x22,0x48,// 前 //
           0x3E,0x48,0x22,0x48,0x22,0x48,0x3E,0x48,0x22,0x08,0x22,0x08,0x2A,0x28,0x24,0x10,

0xC9,0xCF, 0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x10,0x01,0xF8,0x01,0x00,0x01,0x00,// 上 //
           0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x04,0xFF,0xFE,0x00,0x00,

0xCA,0xBE, 0x00,0x10,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xFF,0xFE,0x01,0x00,// 示 //
           0x01,0x00,0x09,0x20,0x19,0x18,0x21,0x0C,0x41,0x04,0x01,0x00,0x05,0x00,0x02,0x00,

0xCF,0xC2, 0x00,0x04,0xFF,0xFE,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x80,0x02,0x40,0x02,0x30,// 下 //
           0x02,0x10,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,

0xCF,0xD4, 0x00,0x10,0x1F,0xF8,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,// 显 //
           0x14,0x50,0x44,0x44,0x34,0x4C,0x14,0x50,0x04,0x40,0x04,0x44,0xFF,0xFE,0x00,0x00,

0xD0,0xA3, 0x10,0x40,0x10,0x20,0x10,0x04,0x13,0xFE,0xFC,0x00,0x10,0x88,0x31,0x06,0x3A,0x8A,// 校 //
           0x54,0x88,0x50,0x50,0x90,0x50,0x10,0x20,0x10,0x50,0x10,0x88,0x13,0x0E,0x1C,0x04,

0xD2,0xA1, 0x10,0x08,0x10,0x3C,0x17,0xC0,0x12,0x48,0xFD,0x48,0x11,0x50,0x16,0x00,0x1B,0xFC,// 摇 //
           0x34,0x40,0xD0,0x44,0x1F,0xFE,0x10,0x40,0x12,0x48,0x12,0x48,0x53,0xF8,0x22,0x08,

0xD2,0xBB, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xFF,0xFE,// 一 //
           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0xD4,0xDA, 0x02,0x00,0x02,0x00,0x02,0x04,0xFF,0xFE,0x04,0x00,0x04,0x40,0x08,0x40,0x08,0x50,// 在 //
           0x13,0xF8,0x30,0x40,0x50,0x40,0x90,0x40,0x10,0x40,0x10,0x44,0x17,0xFE,0x10,0x00,

0xD5,0xF3, 0x00,0x80,0x78,0x84,0x4F,0xFE,0x50,0x80,0x50,0xA0,0x61,0x20,0x51,0x28,0x4B,0xFC,// 阵 //
           0x48,0x20,0x48,0x20,0x68,0x24,0x57,0xFE,0x40,0x20,0x40,0x20,0x40,0x20,0x40,0x20,

0xD6,0xB5, 0x08,0x40,0x08,0x48,0x0F,0xFC,0x10,0x40,0x10,0x48,0x33,0xFC,0x52,0x08,0x93,0xF8,// 值 //
           0x12,0x08,0x13,0xF8,0x12,0x08,0x13,0xF8,0x12,0x08,0x12,0x08,0x1F,0xFE,0x10,0x00,

0xD7,0xBC, 0x01,0x40,0x41,0x20,0x31,0x24,0x13,0xFE,0x02,0x20,0x16,0x28,0x1B,0xFC,0x12,0x20,// 准 //
           0x22,0x28,0xE3,0xFC,0x22,0x20,0x22,0x20,0x22,0x24,0x23,0xFE,0x22,0x00,0x02,0x00,

0xD7,0xD6, 0x02,0x00,0x01,0x00,0x3F,0xFC,0x20,0x04,0x40,0x08,0x1F,0xE0,0x00,0x40,0x00,0x80,// 字 //
           0x01,0x04,0xFF,0xFE,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x05,0x00,0x02,0x00,

0xD7,0xF8, 0x01,0x00,0x01,0x00,0x11,0x10,0x11,0x10,0x11,0x10,0x29,0x28,0x25,0x24,0x45,0x44,// 坐 //
           0x81,0x80,0x01,0x10,0x3F,0xF8,0x01,0x00,0x01,0x00,0x01,0x04,0xFF,0xFE,0x00,0x00,

0xC7,0xE5, 0x00,0x40,0x40,0x48,0x37,0xFC,0x10,0x40,0x83,0xF8,0x60,0x40,0x2F,0xFE,0x08,0x08,// 清 //
           0x13,0xFC,0x22,0x08,0xE3,0xF8,0x22,0x08,0x23,0xF8,0x22,0x08,0x22,0x28,0x22,0x10,

0xB3,0xF6, 0x01,0x00,0x01,0x00,0x21,0x08,0x21,0x08,0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,// 出 //
           0x01,0x00,0x41,0x04,0x41,0x04,0x41,0x04,0x41,0x04,0x41,0x04,0x7F,0xFC,0x40,0x04,

0xC8,0xB7, 0x00,0x40,0x04,0x40,0xFE,0x78,0x10,0x90,0x11,0x24,0x23,0xFE,0x25,0x24,0x7D,0x24,// 确 //
           0xA5,0xFC,0x25,0x24,0x25,0x24,0x25,0xFC,0x25,0x24,0x3D,0x24,0x22,0x24,0x04,0x0C,

0xC8,0xCF, 0x00,0x40,0x40,0x40,0x30,0x40,0x10,0x40,0x00,0x40,0x00,0x40,0xF0,0xA0,0x10,0xA0,// 认 //
           0x10,0xA0,0x11,0x10,0x11,0x10,0x15,0x10,0x1A,0x08,0x12,0x08,0x04,0x06,0x08,0x04,

0xCD,0xCB, 0x03,0xF8,0x42,0x08,0x32,0x08,0x13,0xF8,0x02,0x08,0x02,0x08,0xF3,0xFC,0x12,0x08,// 退 //
           0x12,0xD0,0x12,0x20,0x12,0x90,0x13,0x0C,0x12,0x04,0x28,0x00,0x44,0x06,0x03,0xFC,

0xD6,0xD0, 0x01,0x00,0x01,0x00,0x01,0x04,0x7F,0xFE,0x41,0x04,0x41,0x04,0x41,0x04,0x41,0x04,// 中 //
           0x7F,0xFC,0x41,0x04,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,

/* 最后一行必须用0xFF,0xFF结束，这是字库数组结束标志 */
0xFF,0xFF

};
