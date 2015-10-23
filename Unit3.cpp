//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TNewCounterparty *NewCounterparty;
//---------------------------------------------------------------------------
__fastcall TNewCounterparty::TNewCounterparty(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TNewCounterparty::CancelButtonClick(TObject *Sender)
{
Close();
}
//--------------------------------------------------------------------------


void __fastcall TNewCounterparty::OKButtonClick(TObject *Sender)
{
if (ContractNumberEdit->Text == "")
{ShowMessage("¬ведите номер контракта!");
return;
}
CounterpartyList->Counterparty->Insert();
CounterpartyList->Counterparty->Fields->Fields[0]->Text=(NameEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[1]->Text=(AddressEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[2]->Text=(ContractNumberEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[3]->AsString=" c " + DateTimePicker1->Date.DateString() + " по " + DateTimePicker2->Date.DateString();
CounterpartyList->Counterparty->Fields->Fields[4]->Text=(ContactEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[5]->Text=(PhoneEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[6]->Text=(MailEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[7]->Text=(DinnerEdit->Text);
CounterpartyList->Counterparty->First();
Close();
}
//---------------------------------------------------------------------------

void __fastcall TNewCounterparty::FormCreate(TObject *Sender)
{
DateTimePicker1->Date=Now();
DateTimePicker2->Date=Now();
}
//---------------------------------------------------------------------------


