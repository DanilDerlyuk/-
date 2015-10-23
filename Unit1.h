//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
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
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Dialogs.hpp>
#include "trayicon.h"
#include <AppEvnts.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *N2;
        TMenuItem *N4;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *N9;
        TMenuItem *N10;
        TMenuItem *N11;
        TMenuItem *N14;
        TDataSource *DataSource1;
        TDBGrid *NotesGrid;
        TADOConnection *ADOConnection1;
        TADOTable *Notes;
        TMonthCalendar *MonthCalendar1;
        TLabel *Date_Now;
        TLabel *Time;
        TTimer *Timer1;
        TLabel *Separator;
        TImage *CounterpartyListImage;
        TImage *NewRouteSheet;
        TImage *NewNotes;
        TPopupMenu *PopupMenu1;
        TMenuItem *N3;
        TImage *Image1;
        TMenuItem *N12;
        TOpenDialog *OpenDialog1;
        TTrayIcon *TrayIcon1;
        TApplicationEvents *ApplicationEvents1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall MonthCalendar1Click(TObject *Sender);
        void __fastcall MonthCalendar1DblClick(TObject *Sender);
        void __fastcall N9Click(TObject *Sender);
        void __fastcall N10Click(TObject *Sender);
        void __fastcall N11Click(TObject *Sender);
        void __fastcall N8Click(TObject *Sender);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall CounterpartyListImageClick(TObject *Sender);
        void __fastcall NewRouteSheetClick(TObject *Sender);
        void __fastcall NewNotesClick(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall N14Click(TObject *Sender);
        void __fastcall N12Click(TObject *Sender);
        void __fastcall TrayIcon1Click(TObject *Sender);
        void __fastcall ApplicationEvents1Minimize(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
