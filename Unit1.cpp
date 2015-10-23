//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit7.h"
#include "Unit10.h"
#include "Unit9.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
        : TForm(Owner)
{}
//---------------------------------------------------------------------------
void __fastcall TMainForm::FormCreate(TObject *Sender)
{
  Date_Now->Caption = Now().DateString(); //Дата
  Time->Caption=Now().TimeString(); //Время
  MonthCalendar1->Date=Now(); //Сегодняшняя дата на календаре

  Notes->Filtered=true; //Фильтрация заметок по сеггодняшней дате
  Notes->Filter = "Дата = " + Date();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::Timer1Timer(TObject *Sender)
{
 Date_Now->Caption = Now().DateString();
 Time->Caption = Now().TimeString();
}

//Работа с календарем-----------------------------------------------------------
void __fastcall TMainForm::MonthCalendar1Click(TObject *Sender)
{
 Notes->Filtered = true; //Сортировка заметок по выбранной дате
 Notes->Filter = "Дата LIKE '" + MonthCalendar1->Date + "'";
}

void __fastcall TMainForm::MonthCalendar1DblClick(TObject *Sender)
{
  TForm *myCreateNotes = new TCreateNotes(this); //Создание новой заметки 2Click
  myCreateNotes->ShowModal();
  delete myCreateNotes;
}
void __fastcall TMainForm::N3Click(TObject *Sender)
{
  Notes->Delete(); //Удаление заметки ПКМ
}
//Основное меню-----------------------------------------------------------------

void __fastcall TMainForm::N9Click(TObject *Sender)
{
  TForm *myCreateNotes = new TCreateNotes(this);  //Создание заметки
  myCreateNotes->ShowModal();
  delete myCreateNotes;
}

void __fastcall TMainForm::N10Click(TObject *Sender)
{
CounterpartyList->Show();
}

void __fastcall TMainForm::N11Click(TObject *Sender)  //Форма добавления нового контрагента
{
  TForm *myNewCounterparty = new TNewCounterparty(this);
  myNewCounterparty->ShowModal();
  delete myNewCounterparty;
}

void __fastcall TMainForm::N8Click(TObject *Sender) //Форма создания маршрутного листа
{
RouteSheet->Show();
}

void __fastcall TMainForm::N7Click(TObject *Sender)  //Выход
{
MainForm->Close();
}

void __fastcall TMainForm::N14Click(TObject *Sender)
{
AboutBox->Show();
}

//Кнопки------------------------------------------------------------------------

void __fastcall TMainForm::CounterpartyListImageClick(TObject *Sender) //Контрагенты
{
CounterpartyList->Show();
}

void __fastcall TMainForm::NewRouteSheetClick(TObject *Sender) //Маршрутный лист
{
 RouteSheet->Show();
}

void __fastcall TMainForm::NewNotesClick(TObject *Sender) //Новая заметка
{
  TForm *myCreateNotes = new TCreateNotes(this);
  myCreateNotes->ShowModal();
  delete myCreateNotes;
}

//---------------------------------------------------------------------------


void __fastcall TMainForm::N12Click(TObject *Sender)
{
AnsiString FileNameRep;
OpenDialog1->Title="Открыть маршрутный лист";
   if (OpenDialog1->Execute()) {
   FileNameRep = OpenDialog1->FileName;
        }
   else
        {return;
        }
PrintRouteSheet->QuickRep1->Prepare();
PrintRouteSheet->QuickRep1->QRPrinter->Load(FileNameRep);
PrintRouteSheet->QuickRep1->QRPrinter->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::TrayIcon1Click(TObject *Sender)
{
MainForm->Show();
TrayIcon1->Visible = false;
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::ApplicationEvents1Minimize(TObject *Sender)
{
TrayIcon1->Visible = true;
MainForm->Hide();        
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N13Click(TObject *Sender)
{
MainForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N15Click(TObject *Sender)
{
AboutBox->Show();        
}
//---------------------------------------------------------------------------

