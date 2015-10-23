//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TCounterpartyRouteSheet : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TADOConnection *ADOConnection1;
        TADOTable *Counterparty;
        TDataSource *DataSource1;
        TLabel *Search;
        TEdit *SearchString;
        TButton *SearchButton;
        TButton *CancelButton;
        TPopupMenu *PopupMenu1;
        TMenuItem *N2;
        TButton *AddButton;
        void __fastcall SearchButtonClick(TObject *Sender);
        void __fastcall CancelButtonClick(TObject *Sender);
        void __fastcall AddButtonClick(TObject *Sender);
        void __fastcall DBGrid1DblClick(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TCounterpartyRouteSheet(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCounterpartyRouteSheet *CounterpartyRouteSheet;
//---------------------------------------------------------------------------
#endif
