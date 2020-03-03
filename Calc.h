// ---------------------------------------------------------------------------

#ifndef CalcH
#define CalcH
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>

// ---------------------------------------------------------------------------
class TForm1 : public TForm {
__published: // Von der IDE verwaltete Komponenten
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TButton *Button9;
	TButton *Button10;
	TButton *Button11;
	TButton *Button12;
	TButton *Button13;
	TButton *Button14;
	TButton *Button15;
	TPanel *Panel1;
	TButton *Button16;

	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button16Click(TObject *Sender);
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);

private: // Benutzer-Deklarationen
public: // Benutzer-Deklarationen
	__fastcall TForm1(TComponent* Owner);
	void __fastcall calculate(String input);
	bool __fastcall isOp(AnsiString input);
	int __fastcall calcString();
};

// ---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
// ---------------------------------------------------------------------------
#endif
