//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
TAboutBox *AboutBox;
//--------------------------------------------------------------------- 
__fastcall TAboutBox::TAboutBox(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------

void __fastcall TAboutBox::OKButtonClick(TObject *Sender) //Закрыть
{
AboutBox->Close();
}
//---------------------------------------------------------------------------

