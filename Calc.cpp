// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Calc.h"
#include <iostream>
#include <algorithm>

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TPanel *Panel1;
int numOp = 0;
AnsiString ops[4] = {"/", "*", "-", "+"};

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {

}

bool __fastcall TForm1::isOp(AnsiString input) {
	return std::find(ops, ops + 4, input) != ops + 4;
}

int __fastcall TForm1::calcString() {
	AnsiString str = Panel1->Caption;
	int sum = 0;
	String a = "";
	String b = "";
	String op = "";
	bool opFound = false;

	for (int i = 1; i <= str.Length(); i++) {
		if (!TForm1::isOp(str[i])) {
			if (!opFound) {
				a += str[i];
			}
			else {
				b += str[i];
			}
		}
		else {
			op = str[i];
			opFound = true;
		}
	}

	if (op == "+") {
		sum = a.ToInt() + b.ToInt();
	}
	else if (op == "-") {
		sum = a.ToInt() - b.ToInt();
	}
	else if (op == "*") {
		sum = a.ToInt() * b.ToInt();
	}
	else if (op == "/") {
		if (b.ToInt() == 0) {
			ShowMessage("Division by Zero");
			Panel1->Caption = '0';
			numOp = 0;
		}
		else {
			sum = a.ToInt() / b.ToInt();
		}
	}

	return sum;
}

void __fastcall TForm1::calculate(String in) {
	AnsiString cap = Panel1->Caption;
	AnsiString input = in;

	if (cap != "0") {
		if (TForm1::isOp(input)) {
			if (TForm1::isOp(cap[cap.Length()])) {
				cap[cap.Length()] = input[1];
			}
			else if (numOp < 1) {
				cap += input;
				numOp++;
			}
			else {
				cap = TForm1::calcString();
				cap += input;
			}
		}
		else {
			cap += input;
		}
	}
	else {
		if (TForm1::isOp(input)) {
			cap += input;
		}
		else {
			cap = input;
		}
	}
	Panel1->Caption = cap;
}

void __fastcall TForm1::Button15Click(TObject * Sender) {
	Panel1->Caption = '0';
	numOp = 0;
}

// ---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject * Sender) {
	TForm1::calculate(this->Button6->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject * Sender) {
	TForm1::calculate(this->Button7->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject * Sender) {
	TForm1::calculate(this->Button8->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject * Sender) {
	TForm1::calculate(this->Button4->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject * Sender) {
	TForm1::calculate(this->Button3->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject * Sender) {
	TForm1::calculate(this->Button2->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject * Sender) {
	TForm1::calculate(this->Button11->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject * Sender) {
	TForm1::calculate(this->Button10->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject * Sender) {
	TForm1::calculate(this->Button9->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject * Sender) {
	TForm1::calculate(this->Button16->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject * Sender) {
	TForm1::calculate(this->Button13->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject * Sender) {
	TForm1::calculate(this->Button14->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject * Sender) {
	TForm1::calculate(this->Button5->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject * Sender) {
	TForm1::calculate(this->Button1->Caption);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject * Sender) {
	Panel1->Caption = TForm1::calcString();
	numOp = 0;
}
// ---------------------------------------------------------------------------
