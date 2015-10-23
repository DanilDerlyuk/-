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
  DateTimePicker1->Date = MainForm->MonthCalendar1->Date;  //������� �������� ���� � �������� ���������
}
//---------------------------------------------------------------------------
void __fastcall TCreateNotes::OKButtonClick(TObject *Sender)
{
  MainForm->Notes->Insert();  //�������� ����� ������
  MainForm->Notes->Fields->Fields[2]->Text=(NotesBox->Text);  //������� ������ �� ����� � ��
  MainForm->Notes->Fields->Fields[1]->AsString=DateTimePicker1->Date;  //������� ���� � ��
  MainForm->Notes->First();  //������� � ������ ������(��� ����������� ������)
  NotesBox->Clear();  //������� �����
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TCreateNotes::CancelButtonClick(TObject *Sender)
{
  NotesBox->Clear();  //������� �����
  Close();        
}
//---------------------------------------------------------------------------

