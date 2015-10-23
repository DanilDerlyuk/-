//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit5.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAddDriverTask *AddDriverTask;
//---------------------------------------------------------------------------
__fastcall TAddDriverTask::TAddDriverTask(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAddDriverTask::AddButtonClick(TObject *Sender)  //Добавление задания для водителя
{
RouteSheet->Itinerary->Fields->Fields[6]->Text=(TaskEdit->Text);
RouteSheet->Itinerary->First();
TaskEdit->Clear();
Close();
}
//---------------------------------------------------------------------------
