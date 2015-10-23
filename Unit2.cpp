//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCreateNotes *CreateNotes;
//---------------------------------------------------------------------------
__fastcall TCreateNotes::TCreateNotes(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCreateNotes::FormCreate(TObject *Sender)
{
  NotesBox->Clear();
  DateTimePicker1->Date = MainForm->MonthCalendar1->Date;  //Перенос выбраной даты с главного календаря
}
//---------------------------------------------------------------------------
void __fastcall TCreateNotes::OKButtonClick(TObject *Sender)
{
  MainForm->Notes->Insert();  //Создание новой строки
  MainForm->Notes->Fields->Fields[2]->Text=(NotesBox->Text);  //Перенос текста из формы в БД
  MainForm->Notes->Fields->Fields[1]->AsString=DateTimePicker1->Date;  //Перенос даты в БД
  MainForm->Notes->First();  //Переход к первой записи(для отображения номера)
  NotesBox->Clear();  //Очистка формы
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TCreateNotes::CancelButtonClick(TObject *Sender)
{
  NotesBox->Clear();  //Очистка формы
  Close();        
}
//---------------------------------------------------------------------------

