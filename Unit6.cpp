//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit5.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCounterpartyRouteSheet *CounterpartyRouteSheet;
//---------------------------------------------------------------------------
__fastcall TCounterpartyRouteSheet::TCounterpartyRouteSheet(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TCounterpartyRouteSheet::SearchButtonClick(TObject *Sender) //Поиск по организациям
{
 Counterparty->Filtered = true;
 Counterparty->Filter = "Организация =" + QuotedStr(SearchString->Text);

}
//---------------------------------------------------------------------------

void __fastcall TCounterpartyRouteSheet::CancelButtonClick(TObject *Sender) //Сброс фильтрации
{
  Counterparty->Filtered = false;
}
//---------------------------------------------------------------------------

void __fastcall TCounterpartyRouteSheet::AddButtonClick(TObject *Sender)  //Перенос данных из БД контрагентов в БД маршрутного листа
{
AddDriverTask->Show();
RouteSheet->Itinerary->Insert();
RouteSheet->Itinerary->Fields->Fields[0]=(Counterparty->Fields->Fields[0]);
RouteSheet->Itinerary->Fields->Fields[1]=(Counterparty->Fields->Fields[1]);
RouteSheet->Itinerary->Fields->Fields[2]=(Counterparty->Fields->Fields[2]);
RouteSheet->Itinerary->Fields->Fields[3]=(Counterparty->Fields->Fields[4]);
RouteSheet->Itinerary->Fields->Fields[4]=(Counterparty->Fields->Fields[5]);
RouteSheet->Itinerary->Fields->Fields[5]=(Counterparty->Fields->Fields[7]);
Close();
}
//---------------------------------------------------------------------------

void __fastcall TCounterpartyRouteSheet::DBGrid1DblClick(TObject *Sender) //Перенос данных из БД контрагентов в БД маршрутного листа
{
AddDriverTask->Show();
RouteSheet->Itinerary->Insert();
RouteSheet->Itinerary->Fields->Fields[0]=(Counterparty->Fields->Fields[0]);
RouteSheet->Itinerary->Fields->Fields[1]=(Counterparty->Fields->Fields[1]);
RouteSheet->Itinerary->Fields->Fields[2]=(Counterparty->Fields->Fields[2]);
RouteSheet->Itinerary->Fields->Fields[3]=(Counterparty->Fields->Fields[4]);
RouteSheet->Itinerary->Fields->Fields[4]=(Counterparty->Fields->Fields[5]);
RouteSheet->Itinerary->Fields->Fields[5]=(Counterparty->Fields->Fields[7]);
Close();
}
//---------------------------------------------------------------------------

void __fastcall TCounterpartyRouteSheet::N2Click(TObject *Sender)  //Перенос данных из БД контрагентов в БД маршрутного листа
{
AddDriverTask->Show();
RouteSheet->Itinerary->Insert();
RouteSheet->Itinerary->Fields->Fields[0]=(Counterparty->Fields->Fields[0]);
RouteSheet->Itinerary->Fields->Fields[1]=(Counterparty->Fields->Fields[1]);
RouteSheet->Itinerary->Fields->Fields[2]=(Counterparty->Fields->Fields[2]);
RouteSheet->Itinerary->Fields->Fields[3]=(Counterparty->Fields->Fields[4]);
RouteSheet->Itinerary->Fields->Fields[4]=(Counterparty->Fields->Fields[5]);
RouteSheet->Itinerary->Fields->Fields[5]=(Counterparty->Fields->Fields[7]);
Close();
}
//---------------------------------------------------------------------------



