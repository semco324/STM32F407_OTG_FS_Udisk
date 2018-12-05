/*
*********************************************************************************************************
*
*	ģ������ : RA8875оƬ����ģ��������ģ��
*	�ļ����� : LCD_RA8875.h
*	��    �� : V1.0
*	˵    �� : ͷ�ļ�
*
*	Copyright (C), 2010-2011, ���������� www.armfly.com
*
*********************************************************************************************************
*/


#ifndef _LCD_RA8875_H
#define _LCD_RA8875_H

#include "stm32f4xx.h"
#include "fonts.h"
#include "bsp_tft_lcd.h"

/* ����LCD��ʾ����ķֱ��� */
#define LCD_30_HEIGHT	240		/* 3.0����� �߶ȣ���λ������ */
#define LCD_30_WIDTH	400		/* 3.0����� ���ȣ���λ������ */

#define LCD_43_HEIGHT	272		/* 4.3����� �߶ȣ���λ������ */
#define LCD_43_WIDTH	480		/* 4.3����� ���ȣ���λ������ */

#define LCD_70_HEIGHT	480		/* 7.0����� �߶ȣ���λ������ */
#define LCD_70_WIDTH	800		/* 7.0����� ���ȣ���λ������ */

typedef unsigned long LCD_COLOR;
// enum
// {
// 	CL_WHITE        = 0xFFFF,	/* ��ɫ */
// 	CL_BLACK        = 0x0000,	/* ��ɫ */
// 	CL_GREY         = 0xF7DE,	/* ��ɫ */
// 	CL_BLUE         = 0x001F,	/* ��ɫ */
// 	CL_BLUE2        = 0x051F,	/* ǳ��ɫ */
// 	CL_RED          = 0xF800,	/* ��ɫ */
// 	CL_MAGENTA      = 0xF81F,	/* ����ɫ�����ɫ */
// 	CL_GREEN        = 0x07E0,	/* ��ɫ */
// 	CL_CYAN         = 0x7FFF,	/* ����ɫ����ɫ */
// 	CL_YELLOW       = 0xFFE0,	/* ��ɫ */
// 	CL_MASK			= 0x9999	/* ��ɫ���룬�������ֱ���͸�� */
// };

enum
{
	RA_FONT_16 = 0,		/* RA8875 ���� 16���� */
	RA_FONT_24 = 1,		/* RA8875 ���� 24���� */
	RA_FONT_32 = 2		/* RA8875 ���� 32���� */
};
/* �������Խṹ, ����LCD_DispStr() */

// /* ���ַŴ���� */
// enum
// {
// 	RA_SIZE_X1 = 0,		/* ԭʼ��С */
// 	RA_SIZE_X2 = 1,		/* �Ŵ�2�� */
// 	RA_SIZE_X3 = 2,		/* �Ŵ�3�� */
// 	RA_SIZE_X4 = 3		/* �Ŵ�4�� */
// };

// typedef struct
// {
// 	uint16_t usFontCode;	/* ������� 0 ��ʾ16���� */
// 	uint16_t usTextColor;	/* ������ɫ */
// 	uint16_t usBackColor;	/* ���ֱ�����ɫ��͸�� */
// 	uint16_t usSpace;		/* ���ּ�࣬��λ = ���� */
// }FONT_T;

/* �ɹ��ⲿģ����õĺ��� */
uint8_t RA8875_ReadReg(uint8_t _ucRegAddr);
void RA8875_InitHard(void);
uint8_t RA8875_IsBusy(void);
void RA8875_Layer1Visable(void);
void RA8875_Layer2Visable(void);
void RA8875_DispOn(void);
void RA8875_DispOff(void);
void RA8875_PutPixel(uint16_t _usX, uint16_t _usY, uint16_t _usColor);
uint16_t RA8875_GetPixel(uint16_t _usX, uint16_t _usY);
void RA8875_SetFrontColor(uint16_t _usColor);
void RA8875_SetBackColor(uint16_t _usColor);
void RA8875_SetFont(uint8_t _ucFontType, uint8_t _ucLineSpace, uint8_t _ucCharSpace);
void RA8875_SetTextZoom(uint8_t _ucHSize, uint8_t _ucVSize);
void RA8875_DispAscii(uint16_t _usX, uint16_t _usY, char *_ptr);
void RA8875_DispStrChip(uint16_t _usX, uint16_t _usY, char *_ptr);
void RA8875_DispStr(uint16_t _usX, uint16_t _usY, char *_ptr, FONT_T *_tFont);
void RA8875_ClrScr(uint16_t _usColor);
void RA8875_DrawBMP(uint16_t _usX, uint16_t _usY, uint16_t _usHeight, uint16_t _usWidth, uint16_t *_ptr);
void RA8875_DrawLine(uint16_t _usX1 , uint16_t _usY1 , uint16_t _usX2 , uint16_t _usY2 , uint16_t _usColor);
void RA8875_DrawRect(uint16_t _usX, uint16_t _usY, uint16_t _usHeight, uint16_t _usWidth, uint16_t _usColor);
void RA8875_FillRect(uint16_t _usX, uint16_t _usY, uint16_t _usHeight, uint16_t _usWidth, uint16_t _usColor);
void RA8875_DrawCircle(uint16_t _usX, uint16_t _usY, uint16_t _usRadius, uint16_t _usColor);
void RA8875_FillCircle(uint16_t _usX, uint16_t _usY, uint16_t _usRadius, uint16_t _usColor);
void RA8875_SetDispWin(uint16_t _usX, uint16_t _usY, uint16_t _usHeight, uint16_t _usWidth);
void RA8875_QuitWinMode(void);
void RA8875_SetBackLight(uint8_t _bright);

void RA8875_TouchInit(void);
uint16_t RA8875_TouchReadX(void);
uint16_t RA8875_TouchReadY(void);

void RA8875_InitSPI(void);

void RA8875_Delaly1ms(void);
void clear_TP_interrupt(void);	
u8   RA8875_ReadTP(void);
void RA8875_SetFrontColor(uint16_t _usColor);


/* ����LCD�������ķ��ʵ�ַ */
#define RA8875_BASE		((uint32_t)(0x60000000 | 0x08000000))
//#define RA8875_REG		*(__IO uint16_t *)(RA8875_BASE + 2)
//#define RA8875_REG		*(__IO uint16_t *)(RA8875_BASE | 0x00020000)//CSF1.11,A16
//#define RA8875_RAM		*(__IO uint16_t *)(RA8875_BASE)

#define RA8875_REG		(*((volatile unsigned short *) 0x60020000))
#define RA8875_RAM		(*((volatile unsigned short *) 0x60000000)) /* RS = 1 */

#define ReadData()  (RA8875_RAM)	   //���ݶ�ȡ
#define ReadCOMM()  (RA8875_REG)	   //״̬��ȡ
#define WriteCommand(cmd)	{RA8875_WAITSTATUS();RA8875_REG = cmd;}//RA8875_WAITSTATUS();
#define WriteData(data)		{RA8875_RAM = data;}
void RA8875_WriteCmd(uint8_t _ucRegAddr);
void RA8875_WriteData(uint8_t _ucRegValue);
uint16_t RA8875_ReadData16(void);
void RA8875_WriteReg(uint8_t _ucRegAddr, uint8_t _ucRegValue);
uint8_t RA8875_ReadReg(uint8_t _ucRegAddr);
uint8_t RA8875_ReadStatus(void);
void RA8875_SetCursor(uint16_t _usX, uint16_t _usY);
void RA8875_SetReadCursor(uint16_t _usX, uint16_t _usY);
void RA8875_SetTextCursor(uint16_t _usX, uint16_t _usY);
void RA8875_DrawHLine(uint16_t _usX1 , uint16_t _usY1 , uint16_t _usX2 , uint16_t _usColor);
void RA8875_DrawHColorLine(uint16_t _usX1 , uint16_t _usY1, uint16_t _usWidth, uint16_t *_pColor);
void RA8875_DrawVLine(uint16_t _usX1 , uint16_t _usY1 , uint16_t _usY2 , uint16_t _usColor);
void LCD_DrawHColorLine(uint16_t _usX1 , uint16_t _usY1, uint16_t _usWidth, uint16_t *_pColor);
void LCD_DrawLineV(uint16_t _usX1 , uint16_t _usY1 , uint16_t _usY2, uint16_t _usColor);
void LCD_DrawLineH(uint16_t _usX1 , uint16_t _usY1 , uint16_t _usX2, uint16_t _usColor);
void LCD_PutPixel(uint16_t _usX, uint16_t _usY, uint16_t _usColor);
uint16_t LCD_GetPixel(uint16_t _usX, uint16_t _usY);
void Active_Window(u16 XL,u16 XR ,u16 YT ,u16 YB);
void DMA_Continuous_mode_size_setting(u32 set_size);
void DMA_block_mode_size_setting(u16 BWR,u16 BHR,u16 SPWR);
void DMA_Continuous_mode(void);
void DMA_Block_mode(void);
void DMA_Start_enable(void);
void XY_Coordinate(u16 X,u16 Y);
void Serial_ROM_select1(void);
void Text_Mode(void);
void Chk_DMA_Busy(void);
void DMA_Start_address_setting(u32 set_address);
void SERIAL_ROM_Dual_mode0(void);
void SERIAL_ROM_DMA_mode(void);
void SERIAL_ROM_COMMON_mode(void);
void Graphic_Mode(void);
void SERIAL_ROM_Font_mode(void);
void bmp_dispflash(u32 bmpaddress,u16 x0,u16 y0,u16 bmp_x,u16 bmp_y);
void RA8875_SetTextMode(uint8_t Mode);
u16 GUIColorToRGB(LCD_COLOR color);
void RA8875_DispChar(unsigned short c);

void BTE_Start(void);
void BTE_Wait(void);


extern __IO uint8_t s_ucRA8875Busy;

#endif

