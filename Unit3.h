//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TNewCounterparty : public TForm
{
__published:	// IDE-managed Components
        TLabel *Name;
        TLabel *Address;
        TLabel *ContractNumber;
        TLabel *Period;
        TLabel *Contact;
        TLabel *Phone;
        TLabel *Mail;
  TLabel *Label8;
  TLabel *Label9;
  TDateTimePicker *DateTimePicker1;
  TDateTimePicker *DateTimePicker2;
        TEdit *NameEdit;
        TEdit *AddressEdit;
        TEdit *ContractNumberEdit;
        TEdit *ContactEdit;
        TEdit *PhoneEdit;
        TEdit *MailEdit;
  TLabel *Label10;
  TLabel *Label11;
        TButton *OKButton;
        TButton *CancelButton;
        TEdit *DinnerEdit;
        TLabel *Dinner;
  void __fastcall CancelButtonClick(TObject *Sender);
        void __fastcall OKButtonClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TNewCounterparty(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNewCounterparty *NewCounterparty;
//---------------------------------------------------------------------------
#endif
