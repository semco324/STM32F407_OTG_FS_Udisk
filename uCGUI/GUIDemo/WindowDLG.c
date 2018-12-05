/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.16                          *
*        Compiled Jun  4 2012, 15:48:59                              *
*        (c) 2011 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "WindowDLG.h"
#include "LISTVIEW.h"
#include "main.h"
#include "glcd.h"
#include "WM.h"
#include "bsp_tft_lcd.h"
#include "LCD_RA8875.h"
#include "GUI_task.h"
#include "ucOS_Task.h"

#define NULL 0


/*********************************************************************
*
*       Defines
*
**********************************************************************
*/



// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 150, 80, 500, 300 },
  { LISTVIEW_CreateIndirect, "Listview", ID_LISTVIEW_0, 50, 50, 400, 200,WM_CF_SHOW  },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_1, 200, 250, 100, 50 },
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
  int Id, NCode;
	WM_HWIN hDlg_Qc;
	FONT_T tFont;			/* ����һ������ṹ���������������������� */
  hDlg_Qc = pMsg->hWin;
  // USER START (Optionally insert additional variables)
  // USER END
	
	{
		tFont.usFontCode = FC_ST_16;	/* ������� 16���� */ // ���ִ�СΪ16*16 ��ĸ��СΪ ��8��16
		tFont.usTextColor = CL_BLACK;	/* ������ɫ */
		tFont.usBackColor = CL_WHITE;	/* ���ֱ�����ɫ */
		tFont.usSpace = 0;				/* ���ּ�࣬��λ = ���� */
	}

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Listview'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0);
    LISTVIEW_AddColumn(hItem, 100, "Name", GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_AddColumn(hItem, 100, "ID", GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_AddColumn(hItem, 100, "RESULT", GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_AddRow(hItem, NULL);
    LISTVIEW_SetGridVis(hItem, 1);
    LISTVIEW_AddColumn(hItem, 100, "TIME", GUI_TA_HCENTER | GUI_TA_VCENTER);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
	  switch(NCode) 
	  {
      case WM_NOTIFICATION_RELEASED:
			{
				switch(Id)
				{
					case ID_BUTTON_1:
					{
						RA8875_DispStr(200, 30, "Button is clicked", &tFont);
						GUI_EndDialog(hDlg_Qc,0);
// 						window_flag = 0;
						break;
					}
					case ID_LISTVIEW_0:
					{
						break;
					}
					default:break;
				}
				break;
			}
			default: break;
		}
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
	{
    WM_DefaultProc(pMsg);
    break;
	}
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

WM_HWIN CreateWindow(void) {
  WM_HWIN hWin;
  WM_SetCreateFlags(WM_CF_MEMDEV);
  hWin = GUI_ExecDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), &_cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/