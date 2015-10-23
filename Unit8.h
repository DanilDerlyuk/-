//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TAddDriverTask : public TForm
{
__published:	// IDE-managed Components
        TEdit *TaskEdit;
        TButton *AddButton;
        void __fastcall AddButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TAddDriverTask(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddDriverTask *AddDriverTask;
//---------------------------------------------------------------------------
#endif
