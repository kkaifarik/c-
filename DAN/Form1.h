#pragma once
#include <random>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <windows.h>
#include <filesystem>
#include <string>

namespace DAN {

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



	protected:

	protected:
















	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;







	private: System::Windows::Forms::TextBox^ txt10;
	private: System::Windows::Forms::TextBox^ txt9;
	private: System::Windows::Forms::TextBox^ txt8;
	private: System::Windows::Forms::TextBox^ txt7;
	private: System::Windows::Forms::TextBox^ txt6;
	private: System::Windows::Forms::TextBox^ txt5;
	private: System::Windows::Forms::TextBox^ txt4;
	private: System::Windows::Forms::TextBox^ txt3;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt12;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txt11;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt15;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::TextBox^ txt14;
	private: System::Windows::Forms::TextBox^ txt13;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::TextBox^ txt17;
	private: System::Windows::Forms::TextBox^ txt18;
	private: System::Windows::Forms::TextBox^ txt16;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ btnSavePlosk;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	private: System::Windows::Forms::Button^ btnSavePassword;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ txt19;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog4;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ lab10;
private: System::Windows::Forms::Label^ lab9;
private: System::Windows::Forms::Label^ lab8;
private: System::Windows::Forms::Label^ lab7;
private: System::Windows::Forms::Label^ lab6;
private: System::Windows::Forms::Label^ lab5;
private: System::Windows::Forms::Label^ lab4;
private: System::Windows::Forms::Label^ lab3;
private: System::Windows::Forms::Label^ lab2;
private: System::Windows::Forms::Label^ lab1;





















	protected:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txt12 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txt11 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnSavePlosk = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt15 = (gcnew System::Windows::Forms::TextBox());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->txt14 = (gcnew System::Windows::Forms::TextBox());
			this->txt13 = (gcnew System::Windows::Forms::TextBox());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt19 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->txt17 = (gcnew System::Windows::Forms::TextBox());
			this->txt18 = (gcnew System::Windows::Forms::TextBox());
			this->txt16 = (gcnew System::Windows::Forms::TextBox());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->lab10 = (gcnew System::Windows::Forms::Label());
			this->lab9 = (gcnew System::Windows::Forms::Label());
			this->lab8 = (gcnew System::Windows::Forms::Label());
			this->lab7 = (gcnew System::Windows::Forms::Label());
			this->lab6 = (gcnew System::Windows::Forms::Label());
			this->lab5 = (gcnew System::Windows::Forms::Label());
			this->lab4 = (gcnew System::Windows::Forms::Label());
			this->lab3 = (gcnew System::Windows::Forms::Label());
			this->lab2 = (gcnew System::Windows::Forms::Label());
			this->lab1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btnSavePassword = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt9 = (gcnew System::Windows::Forms::TextBox());
			this->txt8 = (gcnew System::Windows::Forms::TextBox());
			this->txt7 = (gcnew System::Windows::Forms::TextBox());
			this->txt6 = (gcnew System::Windows::Forms::TextBox());
			this->txt5 = (gcnew System::Windows::Forms::TextBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt10 = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog3 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog4 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(913, 331);
			this->tabControl1->TabIndex = 12;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnSave);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->tableLayoutPanel1);
			this->tabPage2->Controls->Add(this->txt11);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 42);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(905, 285);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Матрица";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(614, 247);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(170, 30);
			this->btnSave->TabIndex = 7;
			this->btnSave->Text = L"Сохранить матрицу";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Form1::btnSave_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(95, 254);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"n =";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->AutoScroll = true;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->txt12, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(74, 6);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(713, 224);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// txt12
			// 
			this->txt12->Location = System::Drawing::Point(359, 3);
			this->txt12->MaximumSize = System::Drawing::Size(400, 400);
			this->txt12->MinimumSize = System::Drawing::Size(4, 215);
			this->txt12->Multiline = true;
			this->txt12->Name = L"txt12";
			this->txt12->Size = System::Drawing::Size(351, 215);
			this->txt12->TabIndex = 1;
			this->txt12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::btntxtMatrix);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(285, 173);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// txt11
			// 
			this->txt11->AcceptsTab = true;
			this->txt11->Location = System::Drawing::Point(126, 251);
			this->txt11->MaxLength = 1;
			this->txt11->Multiline = true;
			this->txt11->Name = L"txt11";
			this->txt11->Size = System::Drawing::Size(100, 22);
			this->txt11->TabIndex = 4;
			this->txt11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt11->TextChanged += gcnew System::EventHandler(this, &Form1::txt11CHANGE);
			this->txt11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::btntxt11);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(289, 247);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(193, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Формирование матрицы";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(488, 247);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Сброс";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->btnSavePlosk);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->txt15);
			this->tabPage3->Controls->Add(this->btn6);
			this->tabPage3->Controls->Add(this->txt14);
			this->tabPage3->Controls->Add(this->txt13);
			this->tabPage3->Controls->Add(this->btn5);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage3->Location = System::Drawing::Point(4, 42);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(905, 285);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Плоскость";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(727, 233);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 24);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Закрыть";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// btnSavePlosk
			// 
			this->btnSavePlosk->Location = System::Drawing::Point(611, 204);
			this->btnSavePlosk->Name = L"btnSavePlosk";
			this->btnSavePlosk->Size = System::Drawing::Size(101, 53);
			this->btnSavePlosk->TabIndex = 9;
			this->btnSavePlosk->Text = L"Сохранить";
			this->btnSavePlosk->UseVisualStyleBackColor = true;
			this->btnSavePlosk->Click += gcnew System::EventHandler(this, &Form1::btnSavePlosk_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(492, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(342, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Результат вычисления максимального расстояния";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(233, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Координаты точек";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"n =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(82, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Количество точек";
			// 
			// txt15
			// 
			this->txt15->Location = System::Drawing::Point(535, 14);
			this->txt15->MaximumSize = System::Drawing::Size(300, 300);
			this->txt15->MinimumSize = System::Drawing::Size(150, 100);
			this->txt15->Multiline = true;
			this->txt15->Name = L"txt15";
			this->txt15->Size = System::Drawing::Size(274, 100);
			this->txt15->TabIndex = 4;
			this->txt15->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt15);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(727, 204);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(101, 23);
			this->btn6->TabIndex = 3;
			this->btn6->Text = L"Сброс";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// txt14
			// 
			this->txt14->Location = System::Drawing::Point(368, 14);
			this->txt14->MaximumSize = System::Drawing::Size(100, 400);
			this->txt14->MinimumSize = System::Drawing::Size(70, 22);
			this->txt14->Multiline = true;
			this->txt14->Name = L"txt14";
			this->txt14->Size = System::Drawing::Size(70, 220);
			this->txt14->TabIndex = 2;
			this->txt14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt14);
			// 
			// txt13
			// 
			this->txt13->Location = System::Drawing::Point(95, 89);
			this->txt13->MaxLength = 2;
			this->txt13->Name = L"txt13";
			this->txt13->Size = System::Drawing::Size(100, 22);
			this->txt13->TabIndex = 1;
			this->txt13->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt13->TextChanged += gcnew System::EventHandler(this, &Form1::txt13change);
			this->txt13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt13);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(476, 204);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(129, 53);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"Вычеслить";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->txt19);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->btn9);
			this->tabPage4->Controls->Add(this->btn8);
			this->tabPage4->Controls->Add(this->txt17);
			this->tabPage4->Controls->Add(this->txt18);
			this->tabPage4->Controls->Add(this->txt16);
			this->tabPage4->Controls->Add(this->btn7);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage4->Location = System::Drawing::Point(4, 42);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(905, 285);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Строки";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(770, 61);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 56);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Сохранить результат.";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(723, 232);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(155, 34);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Закрыть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(449, 64);
			this->label11->MaximumSize = System::Drawing::Size(300, 0);
			this->label11->MinimumSize = System::Drawing::Size(0, 64);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 64);
			this->label11->TabIndex = 11;
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 101);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 16);
			this->label10->TabIndex = 10;
			this->label10->Text = L"m =";
			// 
			// txt19
			// 
			this->txt19->Location = System::Drawing::Point(43, 98);
			this->txt19->Name = L"txt19";
			this->txt19->Size = System::Drawing::Size(128, 22);
			this->txt19->TabIndex = 9;
			this->txt19->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::banM);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"n =";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 14);
			this->label8->MaximumSize = System::Drawing::Size(150, 0);
			this->label8->MinimumSize = System::Drawing::Size(0, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 32);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Создание буквеного массива n*m";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(449, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Слово S:";
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(723, 14);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(155, 34);
			this->btn9->TabIndex = 5;
			this->btn9->Text = L"Вычислить";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(723, 192);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(155, 34);
			this->btn8->TabIndex = 4;
			this->btn8->Text = L"Сброс";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// txt17
			// 
			this->txt17->Location = System::Drawing::Point(216, 26);
			this->txt17->MaximumSize = System::Drawing::Size(400, 400);
			this->txt17->MinimumSize = System::Drawing::Size(200, 200);
			this->txt17->Multiline = true;
			this->txt17->Name = L"txt17";
			this->txt17->Size = System::Drawing::Size(200, 200);
			this->txt17->TabIndex = 3;
			this->txt17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::banMatrix2);
			// 
			// txt18
			// 
			this->txt18->Location = System::Drawing::Point(519, 26);
			this->txt18->Name = L"txt18";
			this->txt18->Size = System::Drawing::Size(128, 22);
			this->txt18->TabIndex = 2;
			this->txt18->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::banSLOWO);
			// 
			// txt16
			// 
			this->txt16->Location = System::Drawing::Point(43, 61);
			this->txt16->Name = L"txt16";
			this->txt16->Size = System::Drawing::Size(128, 22);
			this->txt16->TabIndex = 1;
			this->txt16->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::banN);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(29, 177);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(155, 34);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"Генерация массива";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->lab10);
			this->tabPage1->Controls->Add(this->lab9);
			this->tabPage1->Controls->Add(this->lab8);
			this->tabPage1->Controls->Add(this->lab7);
			this->tabPage1->Controls->Add(this->lab6);
			this->tabPage1->Controls->Add(this->lab5);
			this->tabPage1->Controls->Add(this->lab4);
			this->tabPage1->Controls->Add(this->lab3);
			this->tabPage1->Controls->Add(this->lab2);
			this->tabPage1->Controls->Add(this->lab1);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->btnSavePassword);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->txt9);
			this->tabPage1->Controls->Add(this->txt8);
			this->tabPage1->Controls->Add(this->txt7);
			this->tabPage1->Controls->Add(this->txt6);
			this->tabPage1->Controls->Add(this->txt5);
			this->tabPage1->Controls->Add(this->txt4);
			this->tabPage1->Controls->Add(this->txt3);
			this->tabPage1->Controls->Add(this->txt2);
			this->tabPage1->Controls->Add(this->txt1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->txt10);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 42);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(905, 285);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Сейф";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// lab10
			// 
			this->lab10->AutoSize = true;
			this->lab10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab10->Location = System::Drawing::Point(709, 126);
			this->lab10->Name = L"lab10";
			this->lab10->Size = System::Drawing::Size(30, 24);
			this->lab10->TabIndex = 45;
			this->lab10->Text = L"10";
			// 
			// lab9
			// 
			this->lab9->AutoSize = true;
			this->lab9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab9->Location = System::Drawing::Point(641, 126);
			this->lab9->Name = L"lab9";
			this->lab9->Size = System::Drawing::Size(20, 24);
			this->lab9->TabIndex = 44;
			this->lab9->Text = L"9";
			// 
			// lab8
			// 
			this->lab8->AutoSize = true;
			this->lab8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab8->Location = System::Drawing::Point(571, 126);
			this->lab8->Name = L"lab8";
			this->lab8->Size = System::Drawing::Size(20, 24);
			this->lab8->TabIndex = 43;
			this->lab8->Text = L"8";
			// 
			// lab7
			// 
			this->lab7->AutoSize = true;
			this->lab7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab7->Location = System::Drawing::Point(504, 126);
			this->lab7->Name = L"lab7";
			this->lab7->Size = System::Drawing::Size(20, 24);
			this->lab7->TabIndex = 42;
			this->lab7->Text = L"7";
			// 
			// lab6
			// 
			this->lab6->AutoSize = true;
			this->lab6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab6->Location = System::Drawing::Point(435, 126);
			this->lab6->Name = L"lab6";
			this->lab6->Size = System::Drawing::Size(20, 24);
			this->lab6->TabIndex = 41;
			this->lab6->Text = L"6";
			// 
			// lab5
			// 
			this->lab5->AutoSize = true;
			this->lab5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab5->Location = System::Drawing::Point(369, 126);
			this->lab5->Name = L"lab5";
			this->lab5->Size = System::Drawing::Size(20, 24);
			this->lab5->TabIndex = 40;
			this->lab5->Text = L"5";
			// 
			// lab4
			// 
			this->lab4->AutoSize = true;
			this->lab4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab4->Location = System::Drawing::Point(302, 126);
			this->lab4->Name = L"lab4";
			this->lab4->Size = System::Drawing::Size(20, 24);
			this->lab4->TabIndex = 39;
			this->lab4->Text = L"4";
			// 
			// lab3
			// 
			this->lab3->AutoSize = true;
			this->lab3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab3->Location = System::Drawing::Point(231, 126);
			this->lab3->Name = L"lab3";
			this->lab3->Size = System::Drawing::Size(20, 24);
			this->lab3->TabIndex = 38;
			this->lab3->Text = L"3";
			// 
			// lab2
			// 
			this->lab2->AutoSize = true;
			this->lab2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab2->Location = System::Drawing::Point(163, 126);
			this->lab2->Name = L"lab2";
			this->lab2->Size = System::Drawing::Size(20, 24);
			this->lab2->TabIndex = 37;
			this->lab2->Text = L"2";
			// 
			// lab1
			// 
			this->lab1->AutoSize = true;
			this->lab1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab1->Location = System::Drawing::Point(99, 126);
			this->lab1->Name = L"lab1";
			this->lab1->Size = System::Drawing::Size(20, 24);
			this->lab1->TabIndex = 36;
			this->lab1->Text = L"1";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(693, 212);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(153, 40);
			this->button7->TabIndex = 35;
			this->button7->Text = L"Закрыть";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// btnSavePassword
			// 
			this->btnSavePassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSavePassword->Location = System::Drawing::Point(693, 166);
			this->btnSavePassword->Name = L"btnSavePassword";
			this->btnSavePassword->Size = System::Drawing::Size(153, 40);
			this->btnSavePassword->TabIndex = 34;
			this->btnSavePassword->Text = L"Сохранить пароль";
			this->btnSavePassword->UseVisualStyleBackColor = true;
			this->btnSavePassword->Click += gcnew System::EventHandler(this, &Form1::btnSavePassword_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(389, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 24);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Пароль:";
			// 
			// txt9
			// 
			this->txt9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt9->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt9->Location = System::Drawing::Point(625, 74);
			this->txt9->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt9->MaximumSize = System::Drawing::Size(100, 100);
			this->txt9->MaxLength = 1;
			this->txt9->MinimumSize = System::Drawing::Size(50, 50);
			this->txt9->Multiline = true;
			this->txt9->Name = L"txt9";
			this->txt9->Size = System::Drawing::Size(50, 50);
			this->txt9->TabIndex = 32;
			this->txt9->TabStop = false;
			this->txt9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt9);
			// 
			// txt8
			// 
			this->txt8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt8->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt8->Location = System::Drawing::Point(557, 74);
			this->txt8->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt8->MaximumSize = System::Drawing::Size(100, 100);
			this->txt8->MaxLength = 1;
			this->txt8->MinimumSize = System::Drawing::Size(50, 50);
			this->txt8->Multiline = true;
			this->txt8->Name = L"txt8";
			this->txt8->Size = System::Drawing::Size(50, 50);
			this->txt8->TabIndex = 31;
			this->txt8->TabStop = false;
			this->txt8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt8);
			// 
			// txt7
			// 
			this->txt7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt7->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt7->Location = System::Drawing::Point(489, 74);
			this->txt7->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt7->MaximumSize = System::Drawing::Size(100, 100);
			this->txt7->MaxLength = 1;
			this->txt7->MinimumSize = System::Drawing::Size(50, 50);
			this->txt7->Multiline = true;
			this->txt7->Name = L"txt7";
			this->txt7->Size = System::Drawing::Size(50, 50);
			this->txt7->TabIndex = 30;
			this->txt7->TabStop = false;
			this->txt7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt7);
			// 
			// txt6
			// 
			this->txt6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt6->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt6->Location = System::Drawing::Point(421, 74);
			this->txt6->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt6->MaximumSize = System::Drawing::Size(100, 100);
			this->txt6->MaxLength = 1;
			this->txt6->MinimumSize = System::Drawing::Size(50, 50);
			this->txt6->Multiline = true;
			this->txt6->Name = L"txt6";
			this->txt6->Size = System::Drawing::Size(50, 50);
			this->txt6->TabIndex = 29;
			this->txt6->TabStop = false;
			this->txt6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt6);
			// 
			// txt5
			// 
			this->txt5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt5->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt5->Location = System::Drawing::Point(353, 74);
			this->txt5->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt5->MaximumSize = System::Drawing::Size(100, 100);
			this->txt5->MaxLength = 1;
			this->txt5->MinimumSize = System::Drawing::Size(50, 50);
			this->txt5->Multiline = true;
			this->txt5->Name = L"txt5";
			this->txt5->Size = System::Drawing::Size(50, 50);
			this->txt5->TabIndex = 28;
			this->txt5->TabStop = false;
			this->txt5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt5);
			// 
			// txt4
			// 
			this->txt4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt4->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt4->Location = System::Drawing::Point(285, 74);
			this->txt4->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt4->MaximumSize = System::Drawing::Size(100, 100);
			this->txt4->MaxLength = 1;
			this->txt4->MinimumSize = System::Drawing::Size(50, 50);
			this->txt4->Multiline = true;
			this->txt4->Name = L"txt4";
			this->txt4->Size = System::Drawing::Size(50, 50);
			this->txt4->TabIndex = 27;
			this->txt4->TabStop = false;
			this->txt4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt4);
			// 
			// txt3
			// 
			this->txt3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt3->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt3->Location = System::Drawing::Point(217, 74);
			this->txt3->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt3->MaximumSize = System::Drawing::Size(100, 100);
			this->txt3->MaxLength = 1;
			this->txt3->MinimumSize = System::Drawing::Size(50, 50);
			this->txt3->Multiline = true;
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(50, 50);
			this->txt3->TabIndex = 26;
			this->txt3->TabStop = false;
			this->txt3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt3);
			// 
			// txt2
			// 
			this->txt2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt2->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt2->Location = System::Drawing::Point(149, 74);
			this->txt2->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt2->MaximumSize = System::Drawing::Size(100, 100);
			this->txt2->MaxLength = 1;
			this->txt2->MinimumSize = System::Drawing::Size(50, 50);
			this->txt2->Multiline = true;
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(50, 50);
			this->txt2->TabIndex = 25;
			this->txt2->TabStop = false;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt2);
			// 
			// txt1
			// 
			this->txt1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt1->Location = System::Drawing::Point(81, 74);
			this->txt1->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt1->MaximumSize = System::Drawing::Size(100, 100);
			this->txt1->MaxLength = 1;
			this->txt1->MinimumSize = System::Drawing::Size(50, 50);
			this->txt1->Multiline = true;
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(50, 50);
			this->txt1->TabIndex = 24;
			this->txt1->TabStop = false;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::banInput);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(81, 166);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 40);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Сброс пароля";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(341, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 40);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Открыть сейф";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt10
			// 
			this->txt10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt10->ImeMode = System::Windows::Forms::ImeMode::On;
			this->txt10->Location = System::Drawing::Point(693, 74);
			this->txt10->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->txt10->MaximumSize = System::Drawing::Size(100, 100);
			this->txt10->MaxLength = 1;
			this->txt10->MinimumSize = System::Drawing::Size(50, 50);
			this->txt10->Multiline = true;
			this->txt10->Name = L"txt10";
			this->txt10->Size = System::Drawing::Size(50, 50);
			this->txt10->TabIndex = 17;
			this->txt10->TabStop = false;
			this->txt10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt10);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(18, 33);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 331);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(9, 8, 9, 8);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Индивидуальные задания";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	int a, i1, i2=0, i3, i4, v,i5,i6,i7;
	private: System::Void banInput(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
	}
    private: System::Void bantxt2(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
    }
    private: System::Void bantxt3(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
    }
    private: System::Void bantxt4(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
    }
	private: System::Void bantxt5(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
	}
	private: System::Void bantxt6(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
	}
	private: System::Void bantxt7(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
	}
	private: System::Void bantxt8(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
	}
	private: System::Void bantxt9(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
	}
	private: System::Void bantxt10(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6')
		{
			e->Handled = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txt3->Text = L"";
		this->txt4->Text = L"";
		this->txt5->Text = L"";
		this->txt6->Text = L"";
		this->txt7->Text = L"";
		this->txt8->Text = L"";
		this->txt9->Text = L"";
		this->txt10->Text = L"";
		i2 = 0;
		v = 0;
		lab1->Text = L"1";
		lab2->Text = L"2";
		lab3->Text = L"3";
		lab4->Text = L"4";
		lab5->Text = L"5";
		lab6->Text = L"6";
		lab7->Text = L"7";
		lab8->Text = L"8";
		lab9->Text = L"9";
		lab10->Text = L"10";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int a = 0;
		if (txt1->Text != L"") {
			a++;
		}
		if (txt2->Text != L"") {
			a++;
		}
		if (txt3->Text != L"") {
			a++;
		}
		if (txt4->Text != L"") {
			a++;
		}
		if (txt5->Text != L"") {
			a++;
		}
		if (txt6->Text != L"") {
			a++;
		}
		if (txt7->Text != L"") {
			a++;
		}
		if (txt8->Text != L"") {
			a++;
		}
		if (txt9->Text != L"") {
			a++;
		}
		if (txt10->Text != L"") {
			a++;
		}
		if (a <= 1 || a >= 3) {
			MessageBox::Show("Пожалуйста, введите два числа", " Сейф, Ошибка");
		}
		else {
			static const int n = 2;
			int Z[n];
			for (int i = 0; i < 3; ) {
				if (txt1->Text != L"") {
					i1 = Convert::ToInt32(txt1->Text);
					i2 += i1;
					Z[i] = 1;
					i++;
				}
				if (txt2->Text != L"") {
					i1 = Convert::ToInt32(txt2->Text);
					i2 += i1;
					Z[i] = 2;
					i++;
				}
				if (txt3->Text != L"") {
					i1 = Convert::ToInt32(txt3->Text);
					i2 += i1;
					Z[i] = 3;
					i++;
				}
				if (txt4->Text != L"") {
					i1 = Convert::ToInt32(txt4->Text);
					i2 += i1;
					Z[i] = 4;
					i++;
				}
				if (txt5->Text != L"") {
					i1 = Convert::ToInt32(txt5->Text);
					i2 += i1;
					Z[i] = 5;
					i++;
				}
				if (txt6->Text != L"") {
					i1 = Convert::ToInt32(txt6->Text);
					i2 += i1;
					Z[i] = 6;
					i++;
				}
				if (txt7->Text != L"") {
					i1 = Convert::ToInt32(txt7->Text);
					i2 += i1;
					Z[i] = 7;
					i++;
				}
				if (txt8->Text != L"") {
					i1 = Convert::ToInt32(txt8->Text);
					i2 += i1;
					Z[i] = 8;
					i++;
				}
				if (txt9->Text != L"") {
					i1 = Convert::ToInt32(txt9->Text);
					i2 += i1;
					Z[i] = 9;
					i++;
				}
				if (txt10->Text != L"") {
					i1 = Convert::ToInt32(txt10->Text);
					i2 += i1;
					Z[i] = 10;
					i++;

				}
				v = Z[1] - Z[0];
				i++;

			}
			if (v == 1) {
				if (i2 < 10 && i2 > 3) {
					if (Z[1] == 10) {
						i3 = 10 - i2;
						this->txt8->Text = Convert::ToString(i3);
					}
					if (Z[0] == 1) {
						i3 = 10 - i2;
						this->txt3->Text = Convert::ToString(i3);
					}
					if (Z[0] > 1 && Z[1] < 10) {
						i3 = 10 - i2;
						if (Z[0] == 2) {
							this->txt1->Text = Convert::ToString(i3);
						}
						if (Z[0] == 3) {
							this->txt2->Text = Convert::ToString(i3);
						}
						if (Z[0] == 4) {
							this->txt3->Text = Convert::ToString(i3);
						}
						if (Z[0] == 5) {
							this->txt4->Text = Convert::ToString(i3);
						}
						if (Z[0] == 6) {
							this->txt5->Text = Convert::ToString(i3);
						}
						if (Z[0] == 7) {
							this->txt6->Text = Convert::ToString(i3);
						}
						if (Z[0] == 8) {
							this->txt7->Text = Convert::ToString(i3);
						}
					}
				}
				if (i2 < 4) {
					if (Z[1] == 10) {
						if (txt9->Text == L"1") {
							this->txt8->Text = L"4";
							this->txt7->Text = L"5";
						}
						if (txt9->Text == L"2") {
							this->txt8->Text = L"4";
							this->txt7->Text = L"4";
						}
					}
					if (Z[0] == 1) {
						if (txt2->Text == L"1") {
							this->txt3->Text = L"5";
							this->txt4->Text = L"4";
						}
						if (txt2->Text == L"2") {
							this->txt3->Text = L"4";
							this->txt4->Text = L"4";
						}
					}
					if (Z[0] > 1 && Z[1] < 10) {
						if (Z[0] == 2) {
							if (txt3->Text == L"1") {
								this->txt4->Text = L"5";
								this->txt5->Text = L"4";
							}
							if (txt3->Text == L"2") {
								this->txt4->Text = L"4";
								this->txt5->Text = L"4";
							}
						}
						if (Z[0] == 3) {
							if (txt4->Text == L"1") {
								this->txt5->Text = L"5";
								this->txt6->Text = L"4";
							}
							if (txt4->Text == L"2") {
								this->txt5->Text = L"4";
								this->txt6->Text = L"4";
							}
						}
						if (Z[0] == 4) {
							if (txt5->Text == L"1") {
								this->txt6->Text = L"4";
								this->txt7->Text = L"5";
							}
							if (txt5->Text == L"2") {
								this->txt6->Text = L"4";
								this->txt7->Text = L"4";
							}
						}
						if (Z[0] == 5) {
							if (txt6->Text == L"1") {
								this->txt7->Text = L"5";
								this->txt8->Text = L"4";
							}
							if (txt6->Text == L"2") {
								this->txt7->Text = L"4";
								this->txt8->Text = L"4";
							}
						}
						if (Z[0] == 6) {
							if (txt7->Text == L"1") {
								this->txt8->Text = L"5";
								this->txt9->Text = L"4";
							}
							if (txt7->Text == L"2") {
								this->txt8->Text = L"4";
								this->txt9->Text = L"4";
							}
						}
						if (Z[0] == 7) {
							if (txt8->Text == L"1") {
								this->txt9->Text = L"5";
								this->txt10->Text = L"4";
							}
							if (txt8->Text == L"2") {
								this->txt9->Text = L"4";
								this->txt10->Text = L"4";

							}
						}
						if (Z[0] == 8) {
							if (txt8->Text == L"1") {
								this->txt6->Text = L"5";
								this->txt7->Text = L"4";
							}
							if (txt8->Text == L"2") {
								this->txt6->Text = L"4";
								this->txt7->Text = L"4";
							}
						}
					}
				}
				if (i2 > 9) {
					if (Z[1] == 10) {
						if (txt9->Text == L"5") {
							this->txt8->Text = L"2";
							this->txt7->Text = L"3";
						}
						if (txt9->Text == L"6") {
							this->txt8->Text = L"2";
							this->txt7->Text = L"2";
						}
					}
					if (Z[0] == 1) {
						if (txt2->Text == L"5") {
							this->txt3->Text = L"2";
							this->txt4->Text = L"3";
						}
						if (txt2->Text == L"6") {
							this->txt3->Text = L"2";
							this->txt4->Text = L"2";
						}
					}
					if (Z[0] > 1 && Z[1] < 10) {
						if (Z[0] == 2) {
							if (txt3->Text == L"5") {
								this->txt4->Text = L"2";
								this->txt5->Text = L"3";
							}
							if (txt3->Text == L"6") {
								this->txt4->Text = L"2";
								this->txt5->Text = L"2";
							}
						}
						if (Z[0] == 3) {
							if (txt4->Text == L"5") {
								this->txt5->Text = L"2";
								this->txt6->Text = L"3";
							}
							if (txt4->Text == L"6") {
								this->txt5->Text = L"2";
								this->txt6->Text = L"2";
							}
						}
						if (Z[0] == 4) {
							if (txt5->Text == L"5") {
								this->txt6->Text = L"2";
								this->txt7->Text = L"3";
							}
							if (txt5->Text == L"6") {
								this->txt6->Text = L"2";
								this->txt7->Text = L"2";
							}
						}
						if (Z[0] == 5) {
							if (txt6->Text == L"5") {
								this->txt7->Text = L"2";
								this->txt8->Text = L"3";
							}
							if (txt6->Text == L"6") {
								this->txt7->Text = L"2";
								this->txt8->Text = L"2";
							}
						}
						if (Z[0] == 6) {
							if (txt7->Text == L"5") {
								this->txt8->Text = L"2";
								this->txt9->Text = L"3";
							}
							if (txt7->Text == L"6") {
								this->txt8->Text = L"2";
								this->txt9->Text = L"2";
							}
						}
						if (Z[0] == 7) {
							if (txt8->Text == L"5") {
								this->txt9->Text = L"2";
								this->txt10->Text = L"3";
							}
							if (txt8->Text == L"6") {
								this->txt9->Text = L"2";
								this->txt10->Text = L"2";
							}
						}
						if (Z[0] == 8) {
							if (txt8->Text == L"5") {
								this->txt6->Text = L"2";
								this->txt7->Text = L"3";
							}
							if (txt8->Text == L"6") {
								this->txt6->Text = L"2";
								this->txt7->Text = L"2";
							}
						}
					}
				}
			}
			if (v == 2) {
				if (i2 < 10 && i2 > 3) {
					i3 = 10 - i2;
					if (Z[0] == 1 && Z[1] == 3) {
						this->txt2->Text = Convert::ToString(i3);
					}
					if (Z[0] == 2 && Z[1] == 4) {
						this->txt3->Text = Convert::ToString(i3);
					}
					if (Z[0] == 3 && Z[1] == 5) {
						this->txt4->Text = Convert::ToString(i3);
					}
					if (Z[0] == 4 && Z[1] == 6) {
						this->txt5->Text = Convert::ToString(i3);
					}
					if (Z[0] == 5 && Z[1] == 7) {
						this->txt6->Text = Convert::ToString(i3);
					}
					if (Z[0] == 6 && Z[1] == 8) {
						this->txt7->Text = Convert::ToString(i3);
					}
					if (Z[0] == 7 && Z[1] == 9) {
						this->txt8->Text = Convert::ToString(i3);
					}
					if (Z[0] == 8 && Z[1] == 10) {
						this->txt9->Text = Convert::ToString(i3);
					}
				}
				if (i2 < 4) {
					if (Z[0] == 1 && Z[1] == 3) {
						if (txt3->Text == L"1") {
							this->txt2->Text = L"5";
							this->txt4->Text = L"4";
						}
						if (txt3->Text == L"2") {
							this->txt2->Text = L"4";
							this->txt4->Text = L"4";
						}
					}
					if (Z[0] == 2 && Z[1] == 4) {
						if (txt4->Text == L"1") {
							this->txt3->Text = L"5";
							this->txt5->Text = L"4";
						}
						if (txt4->Text == L"2") {
							this->txt3->Text = L"4";
							this->txt5->Text = L"4";
						}
					}
					if (Z[0] == 3 && Z[1] == 5) {
						if (txt5->Text == L"1") {
							this->txt4->Text = L"5";
							this->txt6->Text = L"4";
						}
						if (txt5->Text == L"2") {
							this->txt4->Text = L"4";
							this->txt6->Text = L"4";
						}
					}
					if (Z[0] == 4 && Z[1] == 6) {
						if (txt6->Text == L"1") {
							this->txt5->Text = L"5";
							this->txt7->Text = L"4";
						}
						if (txt3->Text == L"2") {
							this->txt5->Text = L"4";
							this->txt7->Text = L"4";
						}
					}
					if (Z[0] == 5 && Z[1] == 7) {
						if (txt7->Text == L"1") {
							this->txt6->Text = L"5";
							this->txt8->Text = L"4";
						}
						if (txt7->Text == L"2") {
							this->txt6->Text = L"4";
							this->txt8->Text = L"4";
						}
					}
					if (Z[0] == 6 && Z[1] == 8) {
						if (txt8->Text == L"1") {
							this->txt7->Text = L"5";
							this->txt9->Text = L"4";
						}
						if (txt8->Text == L"2") {
							this->txt7->Text = L"4";
							this->txt9->Text = L"4";
						}
					}
					if (Z[0] == 7 && Z[1] == 9) {
						if (txt9->Text == L"1") {
							this->txt8->Text = L"5";
							this->txt10->Text = L"4";
						}
						if (txt9->Text == L"2") {
							this->txt8->Text = L"4";
							this->txt10->Text = L"4";
						}
					}
					if (Z[0] == 8 && Z[1] == 10) {
						if (txt8->Text == L"1") {
							this->txt7->Text = L"5";
							this->txt9->Text = L"4";
						}
						if (txt8->Text == L"2") {
							this->txt7->Text = L"4";
							this->txt9->Text = L"4";
						}
					}
				}
				if (i2 > 9) {
					if (Z[0] == 1 && Z[1] == 3) {
						if (txt3->Text == L"5") {
							this->txt2->Text = L"2";
							this->txt4->Text = L"3";
						}
						if (txt3->Text == L"6") {
							this->txt2->Text = L"2";
							this->txt4->Text = L"2";
						}
					}
					if (Z[0] == 2 && Z[1] == 4) {
						if (txt4->Text == L"5") {
							this->txt3->Text = L"2";
							this->txt5->Text = L"3";
						}
						if (txt4->Text == L"6") {
							this->txt3->Text = L"2";
							this->txt5->Text = L"2";
						}
					}
					if (Z[0] == 3 && Z[1] == 5) {
						if (txt5->Text == L"5") {
							this->txt4->Text = L"2";
							this->txt6->Text = L"3";
						}
						if (txt5->Text == L"6") {
							this->txt4->Text = L"2";
							this->txt6->Text = L"2";
						}
					}
					if (Z[0] == 4 && Z[1] == 6) {
						if (txt6->Text == L"5") {
							this->txt5->Text = L"2";
							this->txt7->Text = L"3";
						}
						if (txt3->Text == L"6") {
							this->txt5->Text = L"2";
							this->txt7->Text = L"2";
						}
					}
					if (Z[0] == 5 && Z[1] == 7) {
						if (txt7->Text == L"5") {
							this->txt6->Text = L"2";
							this->txt8->Text = L"3";
						}
						if (txt7->Text == L"6") {
							this->txt6->Text = L"2";
							this->txt8->Text = L"2";
						}
					}
					if (Z[0] == 6 && Z[1] == 8) {
						if (txt8->Text == L"5") {
							this->txt7->Text = L"1";
							this->txt9->Text = L"4";
						}
						if (txt8->Text == L"6") {
							this->txt7->Text = L"2";
							this->txt9->Text = L"2";
						}
					}
					if (Z[0] == 7 && Z[1] == 9) {
						if (txt9->Text == L"5") {
							this->txt8->Text = L"1";
							this->txt10->Text = L"4";
						}
						if (txt9->Text == L"6") {
							this->txt8->Text = L"2";
							this->txt10->Text = L"2";
						}
					}
					if (Z[0] == 8 && Z[1] == 10) {
						if (txt8->Text == L"5") {
							this->txt7->Text = L"1";
							this->txt9->Text = L"4";
						}
						if (txt8->Text == L"6") {
							this->txt7->Text = L"2";
							this->txt9->Text = L"2";
						}
					}
				}
			}
			if (v == 3) {
				if (Z[0] == 1) {
					i5 = 3;
					i6 = 10 - i5 - i1;
					this->txt2->Text = Convert::ToString(i5);
					this->txt3->Text = Convert::ToString(i6);
				}
				if (Z[0] == 2) {
					i5 = 3;
					i6 = 10 - i5 - i1;
					this->txt3->Text = Convert::ToString(i5);
					this->txt4->Text = Convert::ToString(i6);
				}
				if (Z[0] == 3) {
					i5 = 3;
					i6 = 10 - i5 - i1;
					this->txt4->Text = Convert::ToString(i5);
					this->txt5->Text = Convert::ToString(i6);
				}
				if (Z[0] == 4) {
					i5 = 3;
					i6 = 10 - i5 - i1;
					this->txt5->Text = Convert::ToString(i5);
					this->txt6->Text = Convert::ToString(i6);
				}
				if (Z[0] == 5) {
					i5 = 3;
					i6 = 10 - i5 - i1;
					this->txt6->Text = Convert::ToString(i5);
					this->txt7->Text = Convert::ToString(i6);
				}
				if (Z[0] == 6) {
					i5 = 3;
					i6 = 10 - i5 - i1;
					this->txt7->Text = Convert::ToString(i5);
					this->txt8->Text = Convert::ToString(i6);
				}
				if (Z[0] == 7) {
					i5 = 3;
					i6 = 10 - i5 - i1;
					this->txt8->Text = Convert::ToString(i5);
					this->txt9->Text = Convert::ToString(i6);
				}
			}
			if (v == 4) {
				if (Z[0] == 1) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt2->Text = Convert::ToString(i5);
					this->txt3->Text = Convert::ToString(i6);
					this->txt4->Text = Convert::ToString(i7);
				}
				if (Z[0] == 2) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt3->Text = Convert::ToString(i5);
					this->txt4->Text = Convert::ToString(i6);
					this->txt5->Text = Convert::ToString(i7);
				}
				if (Z[0] == 3) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt4->Text = Convert::ToString(i5);
					this->txt5->Text = Convert::ToString(i6);
					this->txt6->Text = Convert::ToString(i7);
				}
				if (Z[0] == 4) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt5->Text = Convert::ToString(i5);
					this->txt6->Text = Convert::ToString(i6);
					this->txt7->Text = Convert::ToString(i7);
				}
				if (Z[0] == 5) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt6->Text = Convert::ToString(i5);
					this->txt7->Text = Convert::ToString(i6);
					this->txt8->Text = Convert::ToString(i7);
				}
				if (Z[0] == 6) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt7->Text = Convert::ToString(i5);
					this->txt8->Text = Convert::ToString(i6);
					this->txt9->Text = Convert::ToString(i7);
				}
			}
			if (v == 5) {
				if (Z[0] == 1) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt2->Text = Convert::ToString(i5);
					this->txt3->Text = Convert::ToString(i6);
					this->txt4->Text = Convert::ToString(i7);
				}
				if (Z[0] == 2) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt3->Text = Convert::ToString(i5);
					this->txt4->Text = Convert::ToString(i6);
					this->txt5->Text = Convert::ToString(i7);
				}
				if (Z[0] == 3) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt4->Text = Convert::ToString(i5);
					this->txt5->Text = Convert::ToString(i6);
					this->txt6->Text = Convert::ToString(i7);
				}
				if (Z[0] == 4) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt5->Text = Convert::ToString(i5);
					this->txt6->Text = Convert::ToString(i6);
					this->txt7->Text = Convert::ToString(i7);
				}
				if (Z[0] == 5) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt6->Text = Convert::ToString(i5);
					this->txt7->Text = Convert::ToString(i6);
					this->txt8->Text = Convert::ToString(i7);
				}
			}
			if (v == 6) {
				if (Z[0] == 1) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt2->Text = Convert::ToString(i5);
					this->txt3->Text = Convert::ToString(i6);
					this->txt4->Text = Convert::ToString(i7);
				}
				if (Z[0] == 2) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt3->Text = Convert::ToString(i5);
					this->txt4->Text = Convert::ToString(i6);
					this->txt5->Text = Convert::ToString(i7);
				}
				if (Z[0] == 3) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt4->Text = Convert::ToString(i5);
					this->txt5->Text = Convert::ToString(i6);
					this->txt6->Text = Convert::ToString(i7);
				}
				if (Z[0] == 4) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt5->Text = Convert::ToString(i5);
					this->txt6->Text = Convert::ToString(i6);
					this->txt7->Text = Convert::ToString(i7);
				}
			}
			if (v == 7) {
				if (Z[0] == 1) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt2->Text = Convert::ToString(i5);
					this->txt3->Text = Convert::ToString(i6);
					this->txt4->Text = Convert::ToString(i7);
				}
				if (Z[0] == 2) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt3->Text = Convert::ToString(i5);
					this->txt4->Text = Convert::ToString(i6);
					this->txt5->Text = Convert::ToString(i7);
				}
				if (Z[0] == 3) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt4->Text = Convert::ToString(i5);
					this->txt5->Text = Convert::ToString(i6);
					this->txt6->Text = Convert::ToString(i7);
				}
			}
			if (v == 8) {
				if (Z[0] == 1) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt2->Text = Convert::ToString(i5);
					this->txt3->Text = Convert::ToString(i6);
					this->txt4->Text = Convert::ToString(i7);
				}
				if (Z[0] == 2) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt3->Text = Convert::ToString(i5);
					this->txt4->Text = Convert::ToString(i6);
					this->txt5->Text = Convert::ToString(i7);
				}
			}
			if (v == 9) {
				if (Z[0] == 1) {
					i5 = rand() % 6 + 2;
					i6 = rand() % 3 + 2;
					i7 = 10 - i5 - i6;
					this->txt2->Text = Convert::ToString(i5);
					this->txt3->Text = Convert::ToString(i6);
					this->txt4->Text = Convert::ToString(i7);
				}
			}
			if (txt1->Text == L"") { this->txt1->Text = Convert::ToString(rand() % 6 + 1); lab1->Text = L""; }
			if (txt2->Text == L"") { this->txt2->Text = Convert::ToString(rand() % 6 + 1); lab2->Text = L""; }
			if (txt3->Text == L"") { this->txt3->Text = Convert::ToString(rand() % 6 + 1); lab3->Text = L""; }
			if (txt4->Text == L"") { this->txt4->Text = Convert::ToString(rand() % 6 + 1); lab4->Text = L""; }
			if (txt5->Text == L"") { this->txt5->Text = Convert::ToString(rand() % 6 + 1); lab5->Text = L""; }
			if (txt6->Text == L"") { this->txt6->Text = Convert::ToString(rand() % 6 + 1); lab6->Text = L""; }
			if (txt7->Text == L"") { this->txt7->Text = Convert::ToString(rand() % 6 + 1); lab7->Text = L""; }
			if (txt8->Text == L"") { this->txt8->Text = Convert::ToString(rand() % 6 + 1); lab8->Text = L""; }
			if (txt9->Text == L"") { this->txt9->Text = Convert::ToString(rand() % 6 + 1); lab9->Text = L""; }
			if (txt10->Text == L"") { this->txt10->Text = Convert::ToString(rand() % 6 + 1); lab10->Text = L""; }
		}
    }
	private: System::Void btnSavePassword_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "Пароль для сейфа:" + txt1->Text + txt2->Text + txt3->Text + txt4->Text + txt5->Text + txt6->Text + txt7->Text + txt8->Text + txt9->Text + txt10->Text;
		String^ space = " ";
		if (txt1->Text == "" || txt2->Text == "" || txt3->Text == "" || txt4->Text == "" || txt5->Text == "" || txt6->Text == "" || txt7->Text == "" || txt8->Text == "" || txt9->Text == "" || txt10->Text == "") {
			MessageBox::Show("Пароль не был сформирован.", "Сейф. Ошибка!");
		}
		else {
			if (saveFileDialog3->ShowDialog() == Windows::Forms::DialogResult::OK) {
				String^ outputFile = saveFileDialog3->FileName;
				if (System::IO::File::Exists(outputFile)) {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(str);
					file->WriteLine(space);
					file->Close();
					MessageBox::Show("Пароль был успешно сохранен.", "Сейф. Ошибка!");
				}
				else {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(str);
					file->WriteLine(space);
					file->Close();
					MessageBox::Show("Пароль был успешно сохранен.", "Сейф. Ошибка!");
				}
			}
			else {
				MessageBox::Show("Файл не был открыт.", "Сейф. Ошибка!");
			}
		}
	}
	// МАТРИЦА
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		txt12->Text = "";
		if (txt11->Text->Length > 0) {
			int n = Convert::ToInt64(txt11->Text);
			fmat(n);
		}
		else {
			MessageBox::Show("Пожалуйста, введите число для постройки массива", "Матрица. Ошибка!");
		}
	}
	String^ fmat(int n) {
		int a = 2 * n;
		int** mat = new int* [a];
		for (int j = 0; j < a; j++) {
			mat[j] = new int[a];
		}
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (i <= n - 1 && j <= n - 1) { 
					mat[i][j] = 1;
					
				}
				if (i <= n - 1 && j >= n){
					mat[i][j] = 2;
					
				}
				if (i >= n && j <= n - 1) {
					mat[i][j] = 3;
					
				}
				if (i >= n && j >= n) {
					mat[i][j] = 4;
					
				}
			}
		}
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (j !=a- 1) {
					if (j == 0) {
						txt12->Text = txt12->Text  + "\t" + Convert::ToString(mat[i][j]) + "   ";
					}
					else {
						txt12->Text = txt12->Text + Convert::ToString(mat[i][j]) + "   ";    
					}
				}
				else {
					txt12->Text = txt12->Text + Convert::ToString(mat[i][j]) + Environment::NewLine;
				}
			}
		}
		for (int j = 0; j < a; j++) {
			delete[] mat[j];
			return txt12->Text;
		}
    }
	private: System::Void txt11CHANGE(System::Object^ sender, System::EventArgs^ e) {
		if (txt11->Text->Length == 1 && txt11->Text->Contains("0")) {
			txt11->Text = txt11->Text->Remove(0, 1);
			txt11->SelectionStart = 1;
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { 
		txt11->Text = L"";
		txt12->Text = L"";
	}
	private: System::Void btntxtMatrix(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar >= 0)
			e->Handled = true;
	}
	private: System::Void btntxt11(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) )
		{
			e->Handled = true;
			return;
		}
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "Квадратная матрица порядка 2n, где " + label1->Text +" "+ txt11->Text;
		if (txt12->Text == "") {
			MessageBox::Show("Матрица не была сформирована.", "Матрица. Ошибка!");
		}
		else {
			if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
				String^ outputFile = saveFileDialog1->FileName;
				if (System::IO::File::Exists(outputFile)) {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(str);
					file->WriteLine(txt12->Text);
					file->Close();
					MessageBox::Show("Матрица была успешно сохранена.", "Матрица. Ошибка!");
				}
				else {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(str);
					file->WriteLine(txt12->Text);
					file->Close();
					MessageBox::Show("Матрица была успешно сохранена.", "Матрица. Ошибка!");
				}
			}
			else {
				MessageBox::Show("Файл не был открыт.", "Матрица. Ошибка!");
			}
		}
	}
	//ПЛОСКОСТЬ
	private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		txt14->Text = "";
		if (txt13->Text->Length > 0) {
			int n = Convert::ToInt64(txt13->Text);
			pmat(n);
		}
		else {
			MessageBox::Show("Пожалуйста, введите число для постройки массива", "Плоскость. Ошибка!");
		}
	}
	String^ pmat(int n) {
		int** mat = new int* [n];
		for (int j = 0; j < n; j++) {
			mat[j] = new int[n];
		}
		srand(time(NULL));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 2; j++) {
				mat[i][j] = rand() % 50 + 1;
			}
		}
		int a = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 2; j++) {
				if (j !=  1) {	
					txt14->Text = txt14->Text  + Convert::ToString(a) + " {" + Convert::ToString(mat[i][j]) + " ; ";
				}
				else {
					txt14->Text = txt14->Text + Convert::ToString(mat[i][j]) + "}" + Environment::NewLine;
					a++;
				}
			}
		}
		double len = 0;
		double lenMax = 0;
		int r = n;
		for (int j = 0; j < 1; j++) {
			for (int i = 0; i < n - 1; i++) {
				for (int s = r - 1; s > 0; s--) {
					len = sqrt(pow(mat[i + s][j] - mat[i][j], 2) + pow(mat[i + s][j + 1] - mat[i][j + 1], 2));
					if (len >= lenMax) {
						if (len == lenMax) {
							txt15->Text = txt15->Text  + Convert::ToString(i + 1) + " {" + Convert::ToString(mat[i][j]) + " ; " + Convert::ToString(mat[i][j + 1]) + "}" + "   " + Convert::ToString(i + 1 + s) + " {" + Convert::ToString(mat[i + s][j]) + " ; " + Convert::ToString(mat[i + s][j + 1]) + "}" + " = " + Convert::ToString(lenMax) + Environment::NewLine;
						}
						if (len > lenMax) {
							lenMax = len;
							txt15->Text = Convert::ToString(i + 1) + " {" + Convert::ToString(mat[i][j]) + " ; " + Convert::ToString(mat[i][j + 1]) + "}" + "   " + Convert::ToString(i + 1 + s) + " {" + Convert::ToString(mat[i + s][j]) + " ; " + Convert::ToString(mat[i + s][j + 1]) + "}" + " = " + Convert::ToString(lenMax) + Environment::NewLine;
						}
					}
				}
				r--;
			}
		}
		for (int j = 0; j < n; j++) {
			delete[] mat[j];
			return txt14->Text;
		}
	}
	private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
		txt13->Text = L"";
		txt14->Text = L"";
		txt15->Text = L"";
	}
	private: System::Void bantxt14(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar >= 0)
			e->Handled = true;
	}
	private: System::Void bantxt15(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar >= 0)
			e->Handled = true;
	}
	private: System::Void bantxt13(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
		{
			e->Handled = true;
			return;
		}
	}
	private: System::Void txt13change(System::Object^ sender, System::EventArgs^ e) {
		if (txt13->Text->Length == 1 && txt13->Text->Contains("0")) {
			txt13->Text = txt13->Text->Remove(0, 1);
			txt13->SelectionStart = 1;
		}
	}
	private: System::Void btnSavePlosk_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt14->Text == "") {
			MessageBox::Show("Координаты не были сформированы.", "Плоскость. Ошибка!");
		}
		else {
			if (saveFileDialog2->ShowDialog() == Windows::Forms::DialogResult::OK) {
				String^ outputFile = saveFileDialog2->FileName;
				if (System::IO::File::Exists(outputFile)) {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(label4->Text);
					file->WriteLine(txt14->Text);
					file->WriteLine(label5->Text);
					file->WriteLine(txt15->Text);
					file->Close();
					MessageBox::Show("Результаты были успешно сохранены.", "Плоскость. Ошибка!");
				}
				else {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(label4->Text);
					file->WriteLine(txt14->Text);
					file->WriteLine(label5->Text);
					file->WriteLine(txt15->Text);
					file->Close();
					MessageBox::Show("Результаты были успешно сохранены.", "Плоскость. Ошибка!");
				}
			}
			else {
				MessageBox::Show("Файл не был открыт.", "Плоскость. Ошибка!");
			}
		}
	}
	//СТРОКИ
	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		label11->Text == "";
		txt17->Text = "";
		txt18->Text = "";
		if (txt16->Text->Length > 0 || txt19->Text->Length > 0) {
			int n = Convert::ToInt64(txt16->Text);
			int m = Convert::ToInt64(txt19->Text);
			smat(n,m);
		}
		else {
			MessageBox::Show("Пожалуйста, введите число для постройки массива", "Строки. Ошибка!");
		}
	}
	String^ smat(int n, int m) {
		srand(time(NULL));
		String^ str = "ЁЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮ";
		int rn;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				rn = rand() % 33;
				if (j != m - 1) {
					if (j == 0) {
						txt17->Text += Convert::ToString(str[rn]) + "   ";
					}
					else {
						txt17->Text += Convert::ToString(str[rn]) + "   ";
					}
				}
				else {
					txt17->Text += Convert::ToString(str[rn]) + Environment::NewLine;
				}
			}
		}
		return txt17->Text;
	}
	String^ slowo2;
	private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		label11->Text = "";
		if (txt17->Text != "") {
			if (txt18->Text != "" && rus()) {
				int dlina = txt18->Text->Length;
				String^ slowo = txt18->Text;
				String^ lab;
				int i=0;
				for (int j = 0; j < txt17->Text->Length; j++) {
					if (i == dlina) {
						break;
					}
					for (int bb = 0; bb < dlina-i;bb++) {
						if (i == dlina) {
							break;
						}
						if (txt17->Text[j] == slowo[bb]) {
							slowo = slowo->Remove(bb, 1);
							i++;
							lab += txt17->Text[j] + " ";
							break;
						}
					}
				}
				if (i == dlina) {
					label11->Text = "Буквенный массив содержит буквы (" + lab + "), из которых можно составить исходное слово.";
				}
				else {
					if (lab != "") {
						label11->Text = "К сожалению буквенный массив содержит не все буквы(" + lab + "), из них не получиться создать исходное слово.";
					}
					else {
						label11->Text = "К сожалению буквенный массив не содержит буквы, из которых возможно создать исходное слово.";
					}

				}
			}
			else {
				MessageBox::Show("Пожалуйста, введиете исходное слово, русскими, заглавными буквами.", "Строки. Ошибка!");
				label11->Text = "";
			}
		}
		else {
			MessageBox::Show("Пожалуйста, создайте сначала массив.", "Строки. Ошибка!");
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txt17->Text = "";
		this->txt19->Text = "";
		this->txt18->Text = "";
		this->label11->Text = "";
		this->txt16->Text = "";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "Буквенный массив n*m, где n=" + txt16->Text + ", а m=" + txt19->Text + ".";
		String^ str1 = "Исходное слово: " + slowo2;
		String^ str2 = "Результат: " + label11->Text;
		String^ space = " ";
		if (txt17->Text == "" || label11->Text == "") {
			MessageBox::Show("Пожалуйста, перед тем как сохранить, проведите расчеты.", "Строки. Ошибка!");
		}
		else {
			if (saveFileDialog4->ShowDialog() == Windows::Forms::DialogResult::OK) {
				String^ outputFile = saveFileDialog4->FileName;
				if (System::IO::File::Exists(outputFile)) {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(str);
					file->WriteLine(space);
					file->WriteLine(txt17->Text);
					file->WriteLine(space);
					file->WriteLine(str1);
					file->WriteLine(space);
					file->WriteLine(str2);
					file->WriteLine(space);
					file->Close();
					MessageBox::Show("Результаты были успешно сохранены.", "Строки. Ошибка!");
				}
				else {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(str);
					file->WriteLine(space);
					file->WriteLine(txt17->Text);
					file->WriteLine(space);
					file->WriteLine(str1);
					file->WriteLine(space);
					file->WriteLine(str2);
					file->WriteLine(space);
					file->Close();
					MessageBox::Show("Результаты были успешно сохранены.", "Строки. Ошибка!");
				}
			}
			else {
				MessageBox::Show("Файл не был открыт.", "Строки. Ошибка!");
			}
		}
	}
	private: System::Void banN(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
		{
			e->Handled = true;
			return;
		}
	}
	private: System::Void banM(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
		{
			e->Handled = true;
			return;
		}
	}
	private: System::Void banMatrix2(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar >= 0)
			e->Handled = true;
	}
	private: System::Void banSLOWO(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		setlocale(LC_ALL, "Russian_Russia.1251");
		/*unsigned char A = 128;
		unsigned char Z = 128;
		unsigned char T = 128;*/
		/*char str[34] = "ЁЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮ";
		if (!Char::IsControl(e->KeyChar)) {
			e->Handled = true;
		}*/
	}
	bool rus() {
		String^ rus = "ЁЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮ";
		for (int ss = 0; ss < txt18->Text->Length; ss++) {
			if ((txt18->Text[ss] >= '0') && (txt18->Text[ss] <= '9') || (txt18->Text[ss] == ',') || (txt18->Text[ss] == '.') || (txt18->Text[ss] == '-')) {
				return false;
			}
		}
		return true;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}