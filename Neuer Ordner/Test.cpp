//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Test.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	  AnsiString s;
	  s = "Hello World!";
	  ShowMessage(s);
}
//---------------------------------------------------------------------------
