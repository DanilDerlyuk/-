//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include <QRCtrls.hpp>
#include <QuickRpt.hpp>
#include <QRExport.hpp>
//---------------------------------------------------------------------------
class TPrintRouteSheet : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRep1;
        TQRBand *ColumnHeaderBand1;
        TQRBand *DetailBand1;
        TQRBand *PageFooterBand1;
        TQRSysData *QRSysData2;
        TQRDBText *QRDBText1;
        TQRDBText *QRDBText2;
        TQRDBText *QRDBText3;
        TQRDBText *QRDBText4;
        TQRDBText *QRDBText5;
        TQRDBText *QRDBText6;
        TQRShape *QRShape6;
        TQRShape *QRShape5;
        TQRShape *QRShape4;
        TQRShape *QRShape3;
        TQRShape *QRShape2;
        TQRShape *QRShape1;
        TQRSysData *QRSysData3;
        TQRLabel *QRLabel6;
        TQRLabel *QRLabel5;
        TQRLabel *QRLabel4;
        TQRLabel *QRLabel3;
        TQRLabel *QRLabel2;
        TQRBand *PageHeaderBand1;
        TQRSysData *QRSysData1;
        TQRLabel *QRLabel1;
        TQRLabel *QRLabel7;
        TQRHTMLFilter *QRHTMLFilter1;
        TADOConnection *ADOConnection1;
        TADOTable *ADOTable1;
        void __fastcall QuickRep1AfterPrint(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TPrintRouteSheet(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPrintRouteSheet *PrintRouteSheet;
//---------------------------------------------------------------------------
#endif
