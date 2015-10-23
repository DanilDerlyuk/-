//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit4.h"
#include "Unit3.h"
#include "Unit11.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCounterpartyList *CounterpartyList;
//---------------------------------------------------------------------------
__fastcall TCounterpartyList::TCounterpartyList(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TCounterpartyList::SearchButtonClick(TObject *Sender) //Поиск по организациям
{
 Counterparty->Filtered = true;
 Counterparty->Filter = "Организация =" + QuotedStr(SearchString->Text);

}
//---------------------------------------------------------------------------

void __fastcall TCounterpartyList::CancelButtonClick(TObject *Sender) //Сброс поиска
{
  Counterparty->Filtered = false;
}
//---------------------------------------------------------------------------


void __fastcall TCounterpartyList::N2Click(TObject *Sender) //Удаление записи ПКМ
{
  Counterparty->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TCounterpartyList::AddButtonClick(TObject *Sender) //Добавление нового контрагента
{
  TForm *myNewCounterparty = new TNewCounterparty(this);
  myNewCounterparty->ShowModal();
  delete myNewCounterparty;
}
//---------------------------------------------------------------------------

void __fastcall TCounterpartyList::N3Click(TObject *Sender)
{
EditCounterparty->Show();
EditCounterparty->NameEdit->Text = CounterpartyList->Counterparty->Fields->Fields[0]->AsString;
EditCounterparty->AddressEdit->Text = CounterpartyList->Counterparty->Fields->Fields[1]->Text; //=(AddressEdit->Text);
EditCounterparty->ContractNumberEdit->Text = CounterpartyList->Counterparty->Fields->Fields[2]->Text; //=(ContractNumberEdit->Text);
EditCounterparty->PeriodEdit->Text = Counterparty->Fields->Fields[3]->AsString; //=" c " + DateTimePicker1->Date.DateString() + " по " + DateTimePicker2->Date.DateString();
EditCounterparty->ContactEdit->Text = CounterpartyList->Counterparty->Fields->Fields[4]->Text; //=(ContactEdit->Text);
EditCounterparty->PhoneEdit->Text = CounterpartyList->Counterparty->Fields->Fields[5]->Text; //=(PhoneEdit->Text);
EditCounterparty->MailEdit->Text = CounterpartyList->Counterparty->Fields->Fields[6]->Text; //=(MailEdit->Text);
EditCounterparty->DinnerEdit->Text = CounterpartyList->Counterparty->Fields->Fields[7]->Text; //=(DinnerEdit->Text);
}
//---------------------------------------------------------------------------

