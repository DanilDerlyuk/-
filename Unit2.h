//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TCreateNotes : public TForm
{
__published:	// IDE-managed Components
        TDateTimePicker *DateTimePicker1;
        TEdit *NotesBox;
        TButton *OKButton;
        TButton *CancelButton;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall OKButtonClick(TObject *Sender);
        void __fastcall CancelButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TCreateNotes(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCreateNotes *CreateNotes;
//---------------------------------------------------------------------------
#endif
