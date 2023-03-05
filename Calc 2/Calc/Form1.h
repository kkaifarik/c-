#pragma once

namespace Calc {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn6;




	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn8;



	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;




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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(102, 43);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(50, 35);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"C";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(20, 84);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(40, 40);
			this->btn1->TabIndex = 2;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(66, 84);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(40, 40);
			this->btn2->TabIndex = 3;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(112, 84);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(40, 40);
			this->btn3->TabIndex = 4;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(112, 130);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(40, 40);
			this->btn6->TabIndex = 5;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(20, 130);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(40, 40);
			this->btn4->TabIndex = 6;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(66, 130);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(40, 40);
			this->btn5->TabIndex = 7;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(66, 176);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(40, 40);
			this->btn8->TabIndex = 8;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(20, 176);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(40, 40);
			this->btn7->TabIndex = 9;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(112, 176);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(40, 40);
			this->btn9->TabIndex = 10;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(66, 222);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(40, 40);
			this->btn0->TabIndex = 11;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(158, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 40);
			this->button1->TabIndex = 12;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(158, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 13;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(158, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 14;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(158, 84);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 40);
			this->button4->TabIndex = 15;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(112, 222);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 40);
			this->button5->TabIndex = 16;
			this->button5->Text = L"=";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(20, 43);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 35);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Backspace";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(20, 222);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 40);
			this->button7->TabIndex = 18;
			this->button7->Text = L"i;";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(244, 291);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Calc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = L"";
	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = L"+";
    }
    private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = L"1";
    }
};
}
