#pragma once
#include <random>
#include <string>
#include <time.h>
namespace genmas {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt3;


	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txt4;


	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton8;

	private: System::Windows::Forms::RadioButton^ radioButton7;



	private: System::Windows::Forms::TextBox^ txt5;
	private: System::Windows::Forms::Button^ btnGen;

	private: System::Windows::Forms::Button^ btnResult;
	private: System::Windows::Forms::Button^ btnVod;
	private: System::Windows::Forms::Button^ btnSave;






	private: System::Windows::Forms::Button^ btnClose;




	private: System::Windows::Forms::TextBox^ txt6;
	private: System::Windows::Forms::TextBox^ txt7;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->txt5 = (gcnew System::Windows::Forms::TextBox());
			this->btnGen = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btnVod = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->txt6 = (gcnew System::Windows::Forms::TextBox());
			this->txt7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество элементов массива:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Минимальное значение диапозона:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Исходный массив:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Максимальное значение диапозона:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(30, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Операции с массивом";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(450, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Имя файла ввода:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(450, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Имя файла вывода:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(30, 308);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Результат операции:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label9->Location = System::Drawing::Point(30, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Исходные данные";
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(257, 37);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(161, 20);
			this->txt1->TabIndex = 9;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt1);
			// 
			// txt3
			// 
			this->txt3->Location = System::Drawing::Point(257, 83);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(161, 20);
			this->txt3->TabIndex = 10;
			this->txt3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt3);
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(257, 60);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(161, 20);
			this->txt2->TabIndex = 11;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt2);
			// 
			// txt4
			// 
			this->txt4->Location = System::Drawing::Point(33, 142);
			this->txt4->Name = L"txt4";
			this->txt4->Size = System::Drawing::Size(385, 20);
			this->txt4->TabIndex = 12;
			this->txt4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt4);
			this->txt4->Leave += gcnew System::EventHandler(this, &Form1::Focustxt4);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(33, 197);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(117, 17);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Сумма элементов";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(33, 220);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(118, 17);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Среднее значение";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(33, 243);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(144, 17);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Минимальный элемент";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(33, 266);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(150, 17);
			this->radioButton4->TabIndex = 16;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Максимальный элемент";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(196, 197);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(118, 17);
			this->radioButton5->TabIndex = 17;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Чётные элементы";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(196, 220);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(129, 17);
			this->radioButton6->TabIndex = 18;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Нечётные элементы";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(196, 266);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(154, 17);
			this->radioButton8->TabIndex = 19;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Сортировка по убыванию";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(196, 243);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(170, 17);
			this->radioButton7->TabIndex = 20;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Сортировка по возрастанию";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton7_CheckedChanged);
			// 
			// txt5
			// 
			this->txt5->Location = System::Drawing::Point(33, 324);
			this->txt5->Name = L"txt5";
			this->txt5->Size = System::Drawing::Size(385, 20);
			this->txt5->TabIndex = 21;
			this->txt5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::bantxt5);
			// 
			// btnGen
			// 
			this->btnGen->Location = System::Drawing::Point(453, 34);
			this->btnGen->Name = L"btnGen";
			this->btnGen->Size = System::Drawing::Size(127, 23);
			this->btnGen->TabIndex = 22;
			this->btnGen->Text = L"Генерация массива";
			this->btnGen->UseVisualStyleBackColor = true;
			this->btnGen->Click += gcnew System::EventHandler(this, &Form1::btnGen_Click);
			// 
			// btnResult
			// 
			this->btnResult->Location = System::Drawing::Point(453, 177);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(127, 23);
			this->btnResult->TabIndex = 23;
			this->btnResult->Text = L"Выполнить";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &Form1::btnResult_Click);
			// 
			// btnVod
			// 
			this->btnVod->Location = System::Drawing::Point(453, 102);
			this->btnVod->Name = L"btnVod";
			this->btnVod->Size = System::Drawing::Size(127, 23);
			this->btnVod->TabIndex = 24;
			this->btnVod->Text = L"Ввод из файла";
			this->btnVod->UseVisualStyleBackColor = true;
			this->btnVod->Click += gcnew System::EventHandler(this, &Form1::btnVod_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(453, 240);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(127, 23);
			this->btnSave->TabIndex = 25;
			this->btnSave->Text = L"Сохранить в файле";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Form1::btnSave_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(453, 321);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(127, 23);
			this->btnClose->TabIndex = 26;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// txt6
			// 
			this->txt6->Location = System::Drawing::Point(453, 76);
			this->txt6->Name = L"txt6";
			this->txt6->Size = System::Drawing::Size(127, 20);
			this->txt6->TabIndex = 27;
			// 
			// txt7
			// 
			this->txt7->Location = System::Drawing::Point(453, 217);
			this->txt7->Name = L"txt7";
			this->txt7->Size = System::Drawing::Size(127, 20);
			this->txt7->TabIndex = 28;
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(12, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(420, 100);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(12, 177);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(420, 106);
			this->groupBox2->TabIndex = 30;
			this->groupBox2->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 351);
			this->Controls->Add(this->txt7);
			this->Controls->Add(this->txt6);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnVod);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->btnGen);
			this->Controls->Add(this->txt5);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->txt4);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt3);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"Form1";
			this->Text = L"Генерация массива";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int b=0;
	String^ str;
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnGen_Click(System::Object^ sender, System::EventArgs^ e) {
		txt4->Text = "";
		txt5->Text = "";
		if (txt2->Text != "" || txt3->Text != "") {
			int min1 = Convert::ToInt32(txt2->Text);
			int max1 = Convert::ToInt32(txt3->Text);
			if (min1 >= max1) {
				MessageBox::Show("Пожалуйста, введите коректный диапозон массива", "Генератор массива. Ошибка!");
			}
			else {
				if (txt2->Text == "" || txt3->Text == "") {
					if (txt2->Text == "" && txt3->Text == "") {
						MessageBox::Show("Пожалуйста, введите диапозон массива", "Генератор массива. Ошибка!");
					}
					if (txt2->Text == "") {
						MessageBox::Show("Пожалуйста, введите нижний диапозон массива", "Генератор массива. Ошибка!");
					}
					if (txt3->Text == "") {
						MessageBox::Show("Пожалуйста, введите верхний диапозон массива", "Генератор массива. Ошибка!");
					}
				}
				else {
					if (txt1->Text->Length > 0) {
						int col = Convert::ToInt32(txt1->Text);
						mat(col);
					}
					else {
						MessageBox::Show("Пожалуйста, введите количество элементов массива", "Генератор массива. Ошибка!");
					}
				}
			}
		}
		else {
			MessageBox::Show("Пожалуйста, введите диапозон массива.", "Генератор массива. Ошибка!");
		}
		
	}
	String^ mat(int col) {
		int min = Convert::ToInt32(txt2->Text);
		int max = Convert::ToInt32(txt3->Text);
		int* arr = new int[col];
		srand(time(NULL));
		for (int i = 0; i < col; i++) {
			arr[i] = rand() % (max - min + 1) + min;
		}
		for (int i = 0; i < col; i++) {
			if (i != col - 1) {
				txt4->Text += Convert::ToString(arr[i] + " ");
			}
			else {
				txt4->Text += Convert::ToString(arr[i]);
			}
		}
		return txt4->Text;
	}
	private: System::Void bantxt4(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '-' && e->KeyChar != ' ')
		{
			e->Handled = true;
			return;
		}
	}
	private: System::Void Focustxt4(System::Object^ sender, System::EventArgs^ e) {
		txt1->Text = "";
		txt2->Text = "";
		txt3->Text = "";
		/*if (txt4->Text->EndsWith(" -"))
			txt4->Text = txt4->Text->Remove(txt4->Text->Length - 2);

		if (txt4->Text[txt4->Text->Length - 1] == ' ' || txt4->Text[txt4->Text->Length - 1] == '-')
			txt4->Text = txt4->Text->Remove(txt4->Text->Length - 1);

		array<String^>^ str2 = txt4->Text->Split(' ');
		int asd = Convert::ToInt32(str2->Length);
		array<int>^ a = gcnew array<int>(asd);
		for (int j = 0; j < asd; j++) {
			if (!Int32::TryParse(str2[j], a[j]))
				txt4->Text = txt4->Text->Replace(str2[j] + "  ", " ");
		}
		for (int j = 0; j < asd; j++) {
			if (!Int32::TryParse(str2[j], a[j]))
				txt4->Text = txt4->Text->Replace(str2[j] + "--", "-");
		}*/
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		b = 1;
		str = "Сумма элементов: ";
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		b = 2;
		str = "Среднее значение: ";
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		b = 3;
		str = "Минимальный элемент: ";
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		b = 4;
		str = "Максимальный элемент: ";
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		b = 5;
		str = "Чётные элементы: ";
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		b = 6;
		str = "Нечётные элементы: ";
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		b = 7;
		str = "Сортировка по возрастанию: ";
	}
	private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		b = 8;
		str = "Сортировка по убыванию: ";
	}
	private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
		txt5->Text = L"";
		if (txt4->Text->EndsWith(" -"))
			txt4->Text = txt4->Text->Remove(txt4->Text->Length - 2);

		if (txt4->Text[txt4->Text->Length - 1] == ' ' || txt4->Text[txt4->Text->Length - 1] == '-')
			txt4->Text = txt4->Text->Remove(txt4->Text->Length - 1);

		if (txt4->Text != "") {
			array<String^>^ str;
			str = txt4->Text->Split(' ');
			int asd = Convert::ToInt32(str->Length);
			array<int>^ a = gcnew array<int>(asd);
			for (int j = 0; j < asd; j++) {
				if (!Int32::TryParse(str[j], a[j]))
					txt4->Text = txt4->Text->Replace(str[j] + " ", "");
			}
			// сумма
			if (radioButton1->Checked == true) {
				txt5->Text = L"";
				int azx = 0;
				for (int j = 0; j < asd; j++) {
					azx += a[j];
				}
				txt5->Text = Convert::ToString(azx);
			}
			// среднее
			if (radioButton2->Checked == true) {
				txt5->Text = L"";
				double azx = 0;
				double kolvo = 0;
				for (int j = 0; j < asd; j++) {
					azx += a[j];
					kolvo++;
				}
				azx = azx / kolvo;
				txt5->Text = Convert::ToString(azx);
			}
			// максимальное
			if (radioButton4->Checked == true) {
				txt5->Text = L"";
				int azx = a[0];
				for (int j = 1; j < asd; j++) {
					if (azx < a[j])
						azx = a[j];
				}
				txt5->Text = Convert::ToString(azx);
			}
			// минимальное
			if (radioButton3->Checked == true) {
				txt5->Text = L"";
				int azx = a[0];
				for (int j = 1; j < asd; j++) {
					if (azx > a[j])
						azx = a[j];
				}
				txt5->Text = Convert::ToString(azx);
			}
			// сортировка по убыванию
			if (radioButton8->Checked == true) {
				txt5->Text = L"";
				for (int i = 1; i < asd; ++i)
				{
					for (int r = 0; r < asd - i; r++)
					{
						if (a[r] < a[r + 1])
						{
							// Обмен местами
							int temp = a[r];
							a[r] = a[r + 1];
							a[r + 1] = temp;
						}
					}
				}
				for (int j = 0; j < asd; j++) {
					txt5->Text = txt5->Text + Convert::ToString(a[j]) + " ";
				}
			}
			// сортировка по возростанию
			if (radioButton7->Checked == true) {
				txt5->Text = L"";
				int tmp = 0;
				for (int i = 0; i < asd; i++) {
					for (int j = (asd - 1); j >= (i + 1); j--) {
						if (a[j] < a[j - 1]) {
							tmp = a[j];
							a[j] = a[j - 1];
							a[j - 1] = tmp;
						}
					}
				}
				for (int j = 0; j < asd; j++) {
					txt5->Text = txt5->Text + Convert::ToString(a[j]) + " ";
				}
			}
			// нечетное
			if (radioButton6->Checked == true) {
				txt5->Text = L"";
				for (int j = 0; j < asd; j++) {
					if (a[j] % 2 == 1)
						txt5->Text = txt5->Text + Convert::ToString(a[j]) + " ";
				}
			}
			// четное
			if (radioButton5->Checked == true) {
				txt5->Text = L"";
				for (int j = 0; j < asd; j++) {
					if (a[j] % 2 == 0)
						txt5->Text = txt5->Text + Convert::ToString(a[j]) + " ";
				}
			}
		}
		else{ 
		MessageBox::Show("Массив не был сформирован.", "Генератор массива. Ошибка!");
		}
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ space = " ";
		String^ reserv = str + txt5->Text;
		if (txt5->Text == "") {
			MessageBox::Show("Массив не был сформирован.", "Генерация массива. Ошибка!");
		}
		else {
			if (txt7->Text == "") {
				if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
					String^ outputFile = saveFileDialog1->FileName;
					if (System::IO::File::Exists(outputFile)) {
						txt7->Text = outputFile;
						System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
						file->WriteLine(space);
						file->WriteLine(reserv);
						file->WriteLine(space);
						file->Close();
						MessageBox::Show("Массив был успешно сохранен.", "Генерация массива. Ошибка!");
					}
					else {
						System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
						txt7->Text = outputFile;
						file->WriteLine(space);
						file->WriteLine(reserv);
						file->WriteLine(space);
						file->Close();
						MessageBox::Show("Массив был успешно сохранен.", "Генерация массива. Ошибка!");
					}
				}
				else {
					MessageBox::Show("Файл не был открыт.", "Генерация массива. Ошибка!");
				}
			}
			else {
				String^ outputFile = txt7->Text;
				if (System::IO::File::Exists(outputFile)) {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(space);
					file->WriteLine(reserv);
					file->WriteLine(space);
					file->Close();
					MessageBox::Show("Массив был успешно сохранен."+ outputFile, "Генерация массива. Ошибка!");
				}
				else {
					System::IO::StreamWriter^ file = System::IO::File::AppendText(outputFile);
					file->WriteLine(space);
					file->WriteLine(reserv);
					file->WriteLine(space);
					file->Close();
					MessageBox::Show("Массив был успешно сохранен."+ outputFile, "Генерация массива. Ошибка!");
				}
			}
		}
	}
	private: System::Void bantxt1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '-')
		{
			e->Handled = true;
			return;
		}
	}
	private: System::Void bantxt2(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '-')
		{
			e->Handled = true;
			return;
		}
	}
	private: System::Void bantxt3(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '-')
		{
			e->Handled = true;
			return;
		}
	}
	private: System::Void bantxt5(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar >= 0)
			e->Handled = true;
	}
	private: System::Void btnVod_Click(System::Object^ sender, System::EventArgs^ e) {
		txt1->Text = "";
		txt2->Text = "";
		txt3->Text = "";
		txt5->Text = "";
		String^ FileName;
		if (txt6->Text == "") {
			if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
			{
				FileName = openFileDialog1->FileName;
				txt6->Text = openFileDialog1->SafeFileName;
			}

			try {
				System::IO::StreamReader^ file = System::IO::File::OpenText(FileName);

				txt4->Text = file->ReadToEnd();

				if (txt4->Text->EndsWith(" -"))
					txt4->Text = txt4->Text->Remove(txt4->Text->Length - 2);

				if (txt4->Text[txt4->Text->Length - 1] == ' ' || txt4->Text[txt4->Text->Length - 1] == '-')
					txt4->Text = txt4->Text->Remove(txt4->Text->Length - 1);

				array<String^>^ str1 = txt4->Text->Split(' ');
				int asd = Convert::ToInt32(str1->Length);
				array<int>^ a = gcnew array<int>(asd);
				for (int j = 0; j < asd; j++) {
					if (!Int32::TryParse(str1[j], a[j]))
						txt4->Text = txt4->Text->Replace(str1[j] + " ", "");
				}

				file->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(this, "Файл не был открыт", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
};
}