//---------------------------------------------------------------------------

#ifndef Unit11H
#define Unit11H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TEditCounterparty : public TForm
{
__published:	// IDE-managed Components
        TLabel *Name;
        TLabel *Address;
        TLabel *ContractNumber;
        TLabel *Period;
        TLabel *Contact;
        TLabel *Phone;
        TLabel *Mail;
        TEdit *NameEdit;
        TEdit *AddressEdit;
        TEdit *ContractNumberEdit;
        TEdit *ContactEdit;
        TEdit *PhoneEdit;
        TEdit *MailEdit;
  TLabel *Label10;
  TLabel *Label11;
        TButton *SaveButton;
        TButton *CancelButton;
        TEdit *DinnerEdit;
        TLabel *Dinner;
        TEdit *PeriodEdit;
  void __fastcall CancelButtonClick(TObject *Sender);
        void __fastcall SaveButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TEditCounterparty(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEditCounterparty *EditCounterparty;
//---------------------------------------------------------------------------
#endif
