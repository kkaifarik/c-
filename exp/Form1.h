#pragma once
#include "cmath"
namespace exp1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt1;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lab1;
	private: System::Windows::Forms::Label^ lab4;
	private: System::Windows::Forms::Label^ lab3;
	private: System::Windows::Forms::Label^ lab2;
	private: System::Windows::Forms::Label^ lab5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lab1 = (gcnew System::Windows::Forms::Label());
			this->lab4 = (gcnew System::Windows::Forms::Label());
			this->lab3 = (gcnew System::Windows::Forms::Label());
			this->lab2 = (gcnew System::Windows::Forms::Label());
			this->lab5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Расчёт exp(x)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(68, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"exp(x) = 1+x/1!+x^2/2!+x^3/3!+...";
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(79, 86);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(230, 20);
			this->txt1->TabIndex = 2;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::btntxt1);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(42, 158);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(40, 17);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0.1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(39, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ввод значений Х (-13<=X<=30)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"x=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(39, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Выбор точности";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 403);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Сумма ряда exp(x) = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 377);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Число слогаемых =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(82, 262);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(198, 24);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Результаты расчёта:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(36, 324);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Точность";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(36, 348);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(133, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Точное значение exp(x) =";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(36, 297);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Исходное значение =";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(42, 181);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(46, 17);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"0.01";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(133, 158);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(52, 17);
			this->radioButton3->TabIndex = 14;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"0.001";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(133, 181);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(58, 17);
			this->radioButton4->TabIndex = 15;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"0.0001";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(219, 158);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(64, 17);
			this->radioButton5->TabIndex = 16;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"0.00001";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(219, 181);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(70, 17);
			this->radioButton6->TabIndex = 17;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"0.000001";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(239, 434);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// lab1
			// 
			this->lab1->AutoSize = true;
			this->lab1->Location = System::Drawing::Point(216, 297);
			this->lab1->Name = L"lab1";
			this->lab1->Size = System::Drawing::Size(0, 13);
			this->lab1->TabIndex = 19;
			// 
			// lab4
			// 
			this->lab4->AutoSize = true;
			this->lab4->Location = System::Drawing::Point(216, 377);
			this->lab4->Name = L"lab4";
			this->lab4->Size = System::Drawing::Size(0, 13);
			this->lab4->TabIndex = 20;
			// 
			// lab3
			// 
			this->lab3->AutoSize = true;
			this->lab3->Location = System::Drawing::Point(216, 348);
			this->lab3->Name = L"lab3";
			this->lab3->Size = System::Drawing::Size(0, 13);
			this->lab3->TabIndex = 21;
			// 
			// lab2
			// 
			this->lab2->AutoSize = true;
			this->lab2->Location = System::Drawing::Point(216, 324);
			this->lab2->Name = L"lab2";
			this->lab2->Size = System::Drawing::Size(0, 13);
			this->lab2->TabIndex = 22;
			// 
			// lab5
			// 
			this->lab5->AutoSize = true;
			this->lab5->Location = System::Drawing::Point(216, 403);
			this->lab5->Name = L"lab5";
			this->lab5->Size = System::Drawing::Size(0, 13);
			this->lab5->TabIndex = 23;
			// 
			// groupBox1
			// 
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox1->Location = System::Drawing::Point(24, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(315, 76);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox2->Location = System::Drawing::Point(24, 142);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(315, 68);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 469);
			this->Controls->Add(this->lab5);
			this->Controls->Add(this->lab2);
			this->Controls->Add(this->lab3);
			this->Controls->Add(this->lab4);
			this->Controls->Add(this->lab1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Расчёт exp";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Double i1, i2,i3, i4, i5, i6,result, ocn, cel,fact,t=0,expr;
	int a;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (t != 0) {
			if (txt1->Text != L"") {
				i1 = Convert::ToDouble(txt1->Text);
				if (i1 >= -13 && i1 <= 30) {
					cel = i1 - trunc(i1);
					if (cel == 0) {
						expr = exp(i1);
						this->lab1->Text = Convert::ToString(i1);
						i2 = 0;
						i3 = 2;
						i4 = 2;
						result = 1 + i1;
						fact = 1;
						while (i2 < 1) {
							fact *= i3;
							ocn = pow(i1, i3) / fact;
							if (fabs(ocn) >= t)
							{
								result += ocn;
								i3++;
								i4++;
							}
							else {
								i2++;
								if (result < 0) {
									result += ocn;
									i4++;
								}

							}
						}
						this->lab4->Text = Convert::ToString(i4);
						lab2->Text = Convert::ToString(t);
						switch (a) {
						case 1:
							lab3->Text = String::Format("{0:F2}", expr);
							lab5->Text = String::Format("{0:F2}", result);
							//lab2->Text = String::Format("{0:F2}", t);
						case 2:
							lab3->Text = String::Format("{0:F3}", expr);
							lab5->Text = String::Format("{0:F3}", result);
							//lab2->Text = String::Format("{0:F7}", t);
						case 3:
							lab3->Text = String::Format("{0:F4}", expr);
							lab5->Text = String::Format("{0:F4}", result);
							//lab2->Text = String::Format("{0:F7}", t);
						case 4:
							lab3->Text = String::Format("{0:F5}", expr);
							lab5->Text = String::Format("{0:F5}", result);
							//lab2->Text = String::Format("{0:F7}", t);
						case 5:
							lab3->Text = String::Format("{0:F6}", expr);
							lab5->Text = String::Format("{0:F6}", result);
							//lab2->Text = String::Format("{0:F7}", t);
						case 6:
							lab3->Text = String::Format("{0:F7}", expr);
							lab5->Text = String::Format("{0:F7}", result);
							//lab2->Text = String::Format("{0:F7}", t);
						}
					}
					else {
						MessageBox::Show("Пожалуйста, введите целое число в диапозоне [-13;30]", "exp, Ошибка!");
					}
				}
				else {
					MessageBox::Show("Пожалуйста, введите ЧИСЛО в диапозоне [-13;30]", "exp (Предупредение!)", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			}
			else {
				MessageBox::Show("Пожалуйста, введите ЧИСЛО в диапозоне [-13;30]", "exp, Ошибка!");
			}
	    }
		if (t == 0) {
			MessageBox::Show("Пожалуйста, задайте точность", "exp, Ошибка!");
		}
	}
    private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		a = 1;
		t = 0.1;
    }
    private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		a = 2;
		t = 0.01;
    }
    private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		a = 3;
		t = 0.001;
    }
    private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		a = 4;
		t = 0.0001;
    }
    private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		a = 5;
		t = 0.00001;
    }
    private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		a = 6;
		t = 0.000001;
    }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
    bool isD() {
		int co = 0;
		for (int i = 0; i < txt1->Text->Length; i++) {
			if ((txt1->Text[i] >= '0') && (txt1->Text[i] <= '9') || (txt1->Text[i] == '-') || txt1->Text[i] == ',') {
				if (txt1->Text[i] == ',') {
					co++;
					if (co > 1) { return false; }
				}
				if (txt1->Text[i] == '.') {
					txt1->Text[i] == ',';
				}
			}
			else { return false; }
		}
	    return true;
	}
	private: System::Void btntxt1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == '-') 
		{
			if (txt1->Text->IndexOf('-') != -1)
			{
				e->Handled = true;
				return;
			}
		}
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '-')
		{
			e->Handled = true;
			return;
		}
	}
};
}