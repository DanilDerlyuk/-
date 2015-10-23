//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", MainForm);
USEFORM("Unit2.cpp", CreateNotes);
USEFORM("Unit3.cpp", NewCounterparty);
USEFORM("Unit4.cpp", CounterpartyList);
USEFORM("Unit5.cpp", RouteSheet);
USEFORM("Unit6.cpp", CounterpartyRouteSheet);
USEFORM("Unit7.cpp", PrintRouteSheet);
USEFORM("Unit8.cpp", AddDriverTask);
USEFORM("Unit9.cpp", PrintCautionDlg);
USEFORM("Unit10.cpp", AboutBox);
USEFORM("Unit11.cpp", EditCounterparty);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->Title = "Ñåêðåòàðü-ÏÐÈÍÒ";
                 Application->HelpFile = "";
                 Application->CreateForm(__classid(TMainForm), &MainForm);
                 Application->CreateForm(__classid(TRouteSheet), &RouteSheet);
                 Application->CreateForm(__classid(TPrintRouteSheet), &PrintRouteSheet);
                 Application->CreateForm(__classid(TAddDriverTask), &AddDriverTask);
                 Application->CreateForm(__classid(TPrintCautionDlg), &PrintCautionDlg);
                 Application->CreateForm(__classid(TAboutBox), &AboutBox);
                 Application->CreateForm(__classid(TCounterpartyList), &CounterpartyList);
                 Application->CreateForm(__classid(TEditCounterparty), &EditCounterparty);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
