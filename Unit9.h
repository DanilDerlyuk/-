//----------------------------------------------------------------------------
#ifndef Unit9H
#define Unit9H
//----------------------------------------------------------------------------
#include <vcl\System.hpp>
#include <vcl\Windows.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Classes.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Controls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\ExtCtrls.hpp>
#include <Dialogs.hpp>
//----------------------------------------------------------------------------
class TPrintCautionDlg : public TForm
{
__published:        
	TButton *OKBtn;
	TButton *CancelBtn;
	TBevel *Bevel1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        void __fastcall OKBtnClick(TObject *Sender);
        void __fastcall CancelBtnClick(TObject *Sender);
private:
public:
	virtual __fastcall TPrintCautionDlg(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TPrintCautionDlg *PrintCautionDlg;
//----------------------------------------------------------------------------
#endif    
