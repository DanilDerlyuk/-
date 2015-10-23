//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "Unit11.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEditCounterparty *EditCounterparty;
//---------------------------------------------------------------------------
__fastcall TEditCounterparty::TEditCounterparty(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TEditCounterparty::CancelButtonClick(TObject *Sender)
{
Close();
}
//--------------------------------------------------------------------------


void __fastcall TEditCounterparty::SaveButtonClick(TObject *Sender)
{
CounterpartyList->Counterparty->Edit();
CounterpartyList->Counterparty->Fields->Fields[0]->Text=(NameEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[1]->Text=(AddressEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[2]->Text=(ContractNumberEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[3]->Text=(PeriodEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[4]->Text=(ContactEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[5]->Text=(PhoneEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[6]->Text=(MailEdit->Text);
CounterpartyList->Counterparty->Fields->Fields[7]->Text=(DinnerEdit->Text);
Close();
}
//---------------------------------------------------------------------------



