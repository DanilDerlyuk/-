//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit7.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
TPrintCautionDlg *PrintCautionDlg;
//---------------------------------------------------------------------
__fastcall TPrintCautionDlg::TPrintCautionDlg(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall TPrintCautionDlg::OKBtnClick(TObject *Sender) //Печать
{
PrintRouteSheet->QuickRep1->PreviewModal();
PrintCautionDlg->Close();        
}
//---------------------------------------------------------------------------

void __fastcall TPrintCautionDlg::CancelBtnClick(TObject *Sender) //Отмена
{
PrintCautionDlg->Close();
}
//---------------------------------------------------------------------------

