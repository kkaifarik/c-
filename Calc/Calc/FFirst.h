#pragma once

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ lblOper;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btnMul;
	private: System::Windows::Forms::Label^ lab;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->lab = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(240, 185);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReset->Location = System::Drawing::Point(240, 150);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAdd->Location = System::Drawing::Point(240, 10);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 30);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::btnAdd_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(30, 10);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 16);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl1->Location = System::Drawing::Point(10, 64);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(93, 13);
			this->lbl1->TabIndex = 4;
			this->lbl1->Text = L"Первое число:";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl2->Location = System::Drawing::Point(10, 94);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(91, 13);
			this->lbl2->TabIndex = 5;
			this->lbl2->Text = L"Второе число:";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblResult->Location = System::Drawing::Point(10, 124);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(50, 13);
			this->lblResult->TabIndex = 6;
			this->lblResult->Text = L"Сумма:";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(110, 60);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(120, 20);
			this->txt1->TabIndex = 7;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->TextChanged += gcnew System::EventHandler(this, &Form1::txt1_TextChanged);
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txt1_KeyPress);
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(110, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(120, 20);
			this->txt2->TabIndex = 8;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtResult
			// 
			this->txtResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtResult->Location = System::Drawing::Point(110, 120);
			this->txtResult->Name = L"txtResult";
			this->txtResult->Size = System::Drawing::Size(120, 20);
			this->txtResult->TabIndex = 9;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtResult->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtResult_KeyPress);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDiv->Location = System::Drawing::Point(240, 80);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(100, 30);
			this->btnDiv->TabIndex = 10;
			this->btnDiv->Text = L"Разделить";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Form1::btnDiv_Click);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSub->Location = System::Drawing::Point(240, 115);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(100, 30);
			this->btnSub->TabIndex = 11;
			this->btnSub->Text = L"Вычесть";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &Form1::btnSub_Click);
			// 
			// btnMul
			// 
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMul->Location = System::Drawing::Point(240, 45);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(100, 30);
			this->btnMul->TabIndex = 12;
			this->btnMul->Text = L"Умножить";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &Form1::btnMul_Click);
			// 
			// lab
			// 
			this->lab->AutoSize = true;
			this->lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab->Location = System::Drawing::Point(30, 160);
			this->lab->MaximumSize = System::Drawing::Size(200, 0);
			this->lab->Name = L"lab";
			this->lab->Size = System::Drawing::Size(0, 16);
			this->lab->TabIndex = 13;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 221);
			this->Controls->Add(this->lab);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Double i1, i2, i3;

    private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"";
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txtResult->Text = L"";
		this->lab->Text = L"";
	}
    private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Сложение";
		if (txt1->Text != "" && txt2->Text != "" && isD() ) {
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 + i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
		else {
			if (txt1->Text == "" || txt2->Text == "") {
				this->lab->Text = L"Пустое значение, введите число в пустое поле";
				this->txtResult->Text = "";
			}
			else {
				if (!isD()) {
					this->lab->Text =
						L"Недопустимые значения";
					this->txtResult->Text = "";
				}
				else { this->lab->Text = L""; }
			}
		}
    } 
    private: System::Void btnMul_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Умножение";
		if (txt1->Text != "" && txt2->Text != "" && isD() ) {
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 * i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
		else {
			if (txt1->Text == "" || txt2->Text == "") {
				this->lab->Text = L"Пустое значение, введите число в пустое поле";
				this->txtResult->Text = "";
			}
			else {
				if (!isD()) {
					this->lab->Text = L"Недопустимые значения";
					this->txtResult->Text = "";
				}
				else { this->lab->Text = L""; }
			}
		}

    }
    private: System::Void btnDiv_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Деление";
		if (txt1->Text != "" && txt2->Text != "" && isD() && txt2->Text != "0" ) {
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 / i2;
			this->txtResult->Text = Convert::ToString(i3);
			this->lab->Text = L"";
		}
		else {
			if (txt1->Text == "" || txt2->Text == "") {
				this->lab->Text = L"Пустое значение, введите число в пустое поле";
				this->txtResult->Text = "";
			}
			else {
				if (!isD()) {
					this->lab->Text = L"Недопустимые значения";
					this->txtResult->Text = "";
				}
				else {
					if (txt2->Text == "0") {
						this->lab->Text = L"Делить на ноль нельзя!";
						this->txtResult->Text = "";
					}
					else { this->lab->Text = L""; }
				}
			}
		}
    }
    private: System::Void btnSub_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Вычетание";
		if (txt1->Text != "" && txt2->Text != "" && isD()) {
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 - i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
		else {
			if (txt1->Text == "" || txt2->Text == "") {
				this->lab->Text = L"Пустое значение, введите число в пустое поле";
				this->txtResult->Text = "";
			}
			else {
				if (!isD()) {
					this->lab->Text = L"Недопустимые значения";
					this->txtResult->Text = "";
				}
				else { this->lab->Text = L""; }
			}
		}

    }
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void txt1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    }
	bool isD() {
		int co = 0;
		for (int i = 0; i < txt1->Text->Length; i++) {
			if ((txt1->Text[i] >= '0') && (txt1->Text[i] <= '9') || (txt1->Text[i] == ',') || txt1->Text[i] == '-') {
				if (txt1->Text[i] == ',') {
					co++;
					if (co > 1) {
						return false;
					}
				}
				if (txt1->Text[i] == '-' && i != 0) {
					return false;
				}
				if (txt1->Text[i] == ',' && i == 0) {
					//txt1->Text[i] == '0,';
					this->txt1->Text = "0" + txt1->Text;
				}
			}
			else { return false; }
		}
		co = 0;
		for (int i = 0; i < txt2->Text->Length; i++) {
			if ((txt2->Text[i] >= '0') && (txt2->Text[i] <= '9') || (txt2->Text[i] == ',') || txt2->Text[i] == '-') {
				if (txt2->Text[i] == ',') {
					co++;
					if (co > 1) {
						return false;
					}
				}
				if (txt2->Text[i] == '-' && i != 0) {
					return false;
				}
				if (txt2->Text[i] == ',' && i == 0) {
					//txt2->Text[i] == '0,';
					this->txt1->Text = "0" + txt1->Text;
				}
			}
			else { return false; }
		}
		return true;
	}
	/*bool ss() {
		for (int g = 0; g < txt1->Text->Length; g++) {
			if (txt1->Text[g] == ',' && g == 0) {
				System::String^ g = "0,";
				txt1->Text = g;
				txt1->SelectionStart = 2;
			}
			if (txt1->Text[g] == '0' && g == 0 ) {
				if (txt1->Text[g] != ',' && g == 1) {
					System::String^ g = "0,";
					txt1->Text = g;
					txt1->SelectionStart = 3;
				}
			}
			else { return false; }
		}
		for (int g = 0; g < txt2->Text->Length; g++) {
			if (txt2->Text[g] == ',' && g == 0) {
				System::String^ g = "0,";
				txt2->Text = g;
				txt2->SelectionStart = 2;
			}
			else { return false; }
		}
		return true;
	}*/
    private: System::Void txt1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		
    }
    private: System::Void txtResult_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar >= 0)
			e->Handled = true;
    }
};
}