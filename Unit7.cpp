//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPrintRouteSheet *PrintRouteSheet;
//---------------------------------------------------------------------------
__fastcall TPrintRouteSheet::TPrintRouteSheet(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TPrintRouteSheet::QuickRep1AfterPrint(TObject *Sender)
{
int i, n;
RouteSheet->Itinerary->Last();
n = RouteSheet->Itinerary->RecordCount;
for(i=0; i<n; i++)
RouteSheet->Itinerary->Delete();
}
//---------------------------------------------------------------------------


