//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TRouteSheet : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TButton *AddButton;
        TButton *DelButton;
        TButton *PrintButton;
        TADOConnection *ADOConnection1;
        TADOTable *Itinerary;
        TDataSource *DataSource1;
        TSaveDialog *SaveDialog1;
        TButton *SaveButton;
        void __fastcall AddButtonClick(TObject *Sender);
        void __fastcall DelButtonClick(TObject *Sender);
        void __fastcall PrintButtonClick(TObject *Sender);
        void __fastcall SaveButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TRouteSheet(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRouteSheet *RouteSheet;
//---------------------------------------------------------------------------
#endif
