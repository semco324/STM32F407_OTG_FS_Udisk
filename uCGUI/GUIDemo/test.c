/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.22                          *
*        Compiled Jul  4 2013, 15:16:01                              *
*        (c) 2013 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/
#include "DIALOG.h"
#include "test.h"
#include "PROGBAR.h"
#include "glcd.h"
#include <stdio.h>
#include "WM.h"
#include "bsp_tft_lcd.h"
#include "main.h"
#include "GUI_task.h"
#include "main.h"
#include "ucOS_Task.h"

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window",   ID_WINDOW_1,   10, 420, 780, 60 },
 //CreateIndirect, " ", ID_BUTTON_2,   0,   0, 195, 60 },
  { BUTTON_CreateIndirect, " ", ID_BUTTON_3, 195,   0, 195, 60 },
  { BUTTON_CreateIndirect, " ", ID_BUTTON_4, 390,   0, 195, 60 },
  { BUTTON_CreateIndirect, " ", ID_BUTTON_5, 585,   0, 195, 60 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  WM_HWIN hDlg_Qc;
	FONT_T tFont;			/* 定义一个字体结构体变量，用于设置字体参数 */
	static unsigned char test_choice = 0;
  hDlg_Qc = pMsg->hWin;
	
	{
		tFont.usFontCode = FC_ST_16;	/* 字体代码 16点阵 */ // 汉字大小为16*16 字母大小为 宽8高16
		tFont.usTextColor = CL_BLACK;	/* 字体颜色 */
		tFont.usBackColor = CL_WHITE;	/* 文字背景颜色 */
		tFont.usSpace = 0;				/* 文字间距，单位 = 像素 */
	}
	
	
  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Window'
    //
//     hItem = pMsg->hWin;
//     WINDOW_SetBkColor(hItem, 0x00808040);
//     
	
//     hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_2);
//     BUTTON_SetText(hItem, " ");
// 	  BUTTON_SetBitmap(hItem,BUTTON_BI_PRESSED,&bm_logo1);
	  //BUTTON_SetBkColor(hItem,BUTTON_BI_UNPRESSED,0xDBC0);
	
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_3);
    BUTTON_SetText(hItem, "SETTING");
	
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_4);
    BUTTON_SetText(hItem, "CONTROL");
	  //BUTTON_SetBitmap(hItem,BUTTON_BI_UNPRESSED,&bmcontrol);
	
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_5);
    BUTTON_SetText(hItem, "HISTORY");

	  //GUI_DrawBitmap(&bm_logo1, 0, 370);
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
	  switch(NCode) 
	  {
			case WM_NOTIFICATION_RELEASED:      /* React only if released */
				switch(Id) 
				{
// 					case ID_BUTTON_2: 
// 					{
// 						test_choice = 0;
// 						//GUI_EndDialog(hDlg_Qc,0);
// 						//window_flag = 0;
// // 						hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_2);
// // 				    BUTTON_Delete(hItem);
// 						break;
// 					}
					case ID_BUTTON_3: 
					{
						test_choice = 1;
						//GUI_EndDialog(hDlg_Qc,0);
						//window_flag = 0;
						break;
					}
					case ID_BUTTON_4: 
					{
						test_choice = 2;
						//GUI_EndDialog(hDlg_Qc,0);
						//window_flag = 0;
						break;
					}
					case ID_BUTTON_5: 
					{
						test_choice = 3;
						//GUI_EndDialog(hDlg_Qc,0);
						//window_flag = 0;
						break;
					}
					default:
					{
						break;
					}
			 }
			 break;
	  }
		switch(test_choice)
		{
			case 1:
			{
				//bmp_dispflash(0x177020,0,0);	
				SERIAL_ROM_Font_mode();
				Graphic_Mode();
				break;
			}
			case 2:
			{
				//bmp_dispflash(0x232830,0,0);	
				SERIAL_ROM_Font_mode();
				Graphic_Mode();
				break;
			}
			case 3:
			{
				//bmp_dispflash(0x2EE040,0,0);	
				SERIAL_ROM_Font_mode();
				Graphic_Mode();
				break;
			}
			default:
			{
				
				break;
			}
		}
    		
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateWindow
*/

WM_HWIN CreateTest(void) {
  WM_HWIN hWin;

  hWin = GUI_ExecDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
