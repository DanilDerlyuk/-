//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRouteSheet *RouteSheet;
//---------------------------------------------------------------------------
__fastcall TRouteSheet::TRouteSheet(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRouteSheet::AddButtonClick(TObject *Sender) //���������� �����������
{
//CounterpartyRouteSheet->Show();
  TForm *myCounterpartyRouteSheet = new TCounterpartyRouteSheet(this);
  myCounterpartyRouteSheet->ShowModal();
  delete myCounterpartyRouteSheet;
}
//---------------------------------------------------------------------------

void __fastcall TRouteSheet::DelButtonClick(TObject *Sender) //�������� �������
{
Itinerary->Delete();

}
//---------------------------------------------------------------------------
void __fastcall TRouteSheet::PrintButtonClick(TObject *Sender) //������ �������������� ����� �������
{
PrintCautionDlg->Show();
}
//---------------------------------------------------------------------------

void __fastcall TRouteSheet::SaveButtonClick(TObject *Sender)
{
AnsiString FileNameRep;
        SaveDialog1->Title="���������� ����������� �����";
        if (SaveDialog1->Execute()) {
        FileNameRep = SaveDialog1->FileName;
        }
PrintRouteSheet->QuickRep1->Prepare();
PrintRouteSheet->QuickRep1->QRPrinter->Save(FileNameRep + ".QRP");
PrintRouteSheet->QuickRep1->QRPrinter->Free();
}
//---------------------------------------------------------------------------

