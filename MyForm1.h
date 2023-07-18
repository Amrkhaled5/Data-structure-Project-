//#include <iostream>
//#ifndef MyForm1_H
//#define MyForm1_H
//#include <msclr\marshal_cppstd.h>
#include <string>
#include "Person.h"
#include "Home.h"
#include "Register.h"
//#include "Admin.h"
using namespace std;

namespace GUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::Mail;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		
	public:
		
		MyForm1(void)
		{
			admin = new Admin;
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
			
		}
	private:Admin* admin;
	private:Person* person;




	protected:



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;



























	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ Email;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ forgetPass;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ recovery;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ sendRecovery;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label9;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->sendRecovery = (gcnew System::Windows::Forms::Button());
			this->recovery = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->forgetPass = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel9->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-12, -10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Padding = System::Windows::Forms::Padding(5);
			this->pictureBox1->Size = System::Drawing::Size(328, 499);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(55, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FCIS Market  ";
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label1);
			this->panel9->Controls->Add(this->pictureBox1);
			this->panel9->Location = System::Drawing::Point(-1, -2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(318, 486);
			this->panel9->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(115, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 37);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Login\r\n";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel2->Controls->Add(this->panel11);
			this->panel2->Controls->Add(this->Email);
			this->panel2->Location = System::Drawing::Point(37, 113);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(300, 35);
			this->panel2->TabIndex = 1;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->Controls->Add(this->panel4);
			this->panel11->Location = System::Drawing::Point(89, 3);
			this->panel11->Margin = System::Windows::Forms::Padding(0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(206, 10);
			this->panel11->TabIndex = 14;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(206, 10);
			this->panel4->TabIndex = 15;
			// 
			// Email
			// 
			this->Email->BackColor = System::Drawing::Color::White;
			this->Email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Email->ForeColor = System::Drawing::Color::Black;
			this->Email->Location = System::Drawing::Point(5, 13);
			this->Email->Margin = System::Windows::Forms::Padding(0);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(290, 19);
			this->Email->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->panel12);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(37, 189);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(300, 35);
			this->panel3->TabIndex = 3;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(262, 5);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(32, 26);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 58;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(263, 7);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(32, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 59;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox7_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::White;
			this->panel12->Location = System::Drawing::Point(100, 2);
			this->panel12->Margin = System::Windows::Forms::Padding(0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(195, 10);
			this->panel12->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(5, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(290, 19);
			this->textBox1->TabIndex = 0;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(63, 363);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm1::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm1::button1_MouseLeave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(38, 413);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Don\'t have an Account \?";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::DodgerBlue;
			this->linkLabel1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->linkLabel1->LinkColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Location = System::Drawing::Point(127, 446);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(69, 20);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Register";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm1::linkLabel1_LinkClicked);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 116);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(37, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 189);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(37, 35);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(309, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 37);
			this->label6->TabIndex = 12;
			this->label6->Text = L"x";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			this->label6->MouseEnter += gcnew System::EventHandler(this, &MyForm1::label6_MouseEnter);
			this->label6->MouseLeave += gcnew System::EventHandler(this, &MyForm1::label6_MouseLeave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Location = System::Drawing::Point(101, 63);
			this->panel10->Margin = System::Windows::Forms::Padding(0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(125, 10);
			this->panel10->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(63, 237);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(232, 19);
			this->label11->TabIndex = 66;
			this->label11->Text = L". Invalid Email Or Password";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->forgetPass);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Location = System::Drawing::Point(315, -2);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(347, 486);
			this->panel1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->sendRecovery);
			this->panel5->Controls->Add(this->recovery);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Location = System::Drawing::Point(12, 236);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(314, 209);
			this->panel5->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(286, -6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 37);
			this->label9->TabIndex = 13;
			this->label9->Text = L"x";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm1::label9_Click);
			// 
			// sendRecovery
			// 
			this->sendRecovery->Location = System::Drawing::Point(121, 148);
			this->sendRecovery->Name = L"sendRecovery";
			this->sendRecovery->Size = System::Drawing::Size(75, 32);
			this->sendRecovery->TabIndex = 12;
			this->sendRecovery->Text = L"Send";
			this->sendRecovery->UseVisualStyleBackColor = true;
			this->sendRecovery->Click += gcnew System::EventHandler(this, &MyForm1::sendRecovery_Click);
			// 
			// recovery
			// 
			this->recovery->BackColor = System::Drawing::Color::White;
			this->recovery->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->recovery->ForeColor = System::Drawing::Color::Black;
			this->recovery->Location = System::Drawing::Point(28, 94);
			this->recovery->Margin = System::Windows::Forms::Padding(0);
			this->recovery->Name = L"recovery";
			this->recovery->Size = System::Drawing::Size(267, 19);
			this->recovery->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label8->Location = System::Drawing::Point(73, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(174, 25);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Enter Your Email";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm1::label8_Click);
			// 
			// forgetPass
			// 
			this->forgetPass->AutoSize = true;
			this->forgetPass->Cursor = System::Windows::Forms::Cursors::Hand;
			this->forgetPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forgetPass->Location = System::Drawing::Point(79, 266);
			this->forgetPass->Name = L"forgetPass";
			this->forgetPass->Size = System::Drawing::Size(200, 24);
			this->forgetPass->TabIndex = 69;
			this->forgetPass->Text = L"Forget My Password";
			this->forgetPass->Click += gcnew System::EventHandler(this, &MyForm1::forgetPass_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(2, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 37);
			this->label7->TabIndex = 68;
			this->label7->Text = L"Start As:";
			// 
			// comboBox1
			// 
			this->comboBox1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Customer", L"Seller" });
			this->comboBox1->Location = System::Drawing::Point(153, 315);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(176, 28);
			this->comboBox1->TabIndex = 67;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(354, 489);
			this->panel6->TabIndex = 13;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel6_Paint);
			// 
			// MyForm1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(658, 474);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::DodgerBlue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
			
			admin->LoadDataFromFile("PersonData.text");
			comboBox1->SelectedIndex = 0;
			comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;
			panel5->Hide();
			
		}
		
		private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			Register^ Re =gcnew Register(this);
			this->Hide() ;
			Re->Show() ;
		}		
		private: System::Void label6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			label6->ForeColor = Color::Red;
			
		}
		private: System::Void label6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			label6->ForeColor = Color::DodgerBlue;
		}
		private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			button1->BackColor = Color::SteelBlue;
		}
		private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			button1->BackColor = Color::DodgerBlue;
		}
		
		private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
			//admin->saveDataInFile("PersonData.text");
			Application::Exit();
		}
		private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
			pictureBox6->Hide();
			textBox1->UseSystemPasswordChar = false;
			pictureBox7->Show();
		}
		
		private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
			pictureBox7->Hide();
			textBox1->UseSystemPasswordChar = true;
			pictureBox6->Show();
		}
		
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			admin->LoadDataFromFile("PersonData.text");
			String^ s = Email->Text;
			string  ss = msclr::interop::marshal_as<string>(s);
			string email = ss;

			String^ s1 = textBox1->Text;
			string  ss1 = msclr::interop::marshal_as<string>(s1);
			string pass = ss1;

			if (admin->UserLogin(email, pass)) {
				
				label11->ForeColor = Color::White;
				person = new Person(admin->getname(email), email, pass, admin->getId(email), admin->getPhone(email), admin->getAddres(email));
				String^ selected = comboBox1->SelectedItem->ToString();
				string  Selected = msclr::interop::marshal_as<string>(selected);
				
				if (Selected == "Customer") {
					person->choseCusomerOrSeller = 3;
				}
				else {
					person->choseCusomerOrSeller = 2;
				}
				admin->user = new User(admin->getname(email));
				person->user = admin->user;

				Home^ home = gcnew Home(this);
				home->per = person;
				this->Hide();
				home->Show();
			}
			else {
				label11->ForeColor = Color::Red;
			}
		}
		private: System::Void forgetPass_Click(System::Object^ sender, System::EventArgs^ e) {
			panel5->Show();
		}
		private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void sendRecovery_Click(System::Object^ sender, System::EventArgs^ e) {
			panel5->SendToBack();
			String^ emailRecovery = recovery->Text;
			string emailRecoveryTmp = msclr::interop::marshal_as<string>(emailRecovery);
			string passwardRecoveryTmp = admin->getPass(emailRecoveryTmp);
			String^ passwardRecovery = msclr::interop::marshal_as<String^>(passwardRecoveryTmp);
			String^ fromEmail = "fcismarket404@gmail.com";
			String^ fromPass = "typpyknaygttwzdm";
			String^ subject = "Account Access Assistance";
			String^ body = "<html><body> <h3>Dear," + emailRecovery + "</h3>" + "<br> We hope this email finds you well.We understand that you may have forgotten your password for our appand we are here to assist you in retrieving it.<br> Your password is : <b> " + passwardRecovery + "<br><h3>FCIS Market Team";
			MailMessage^ mm = gcnew MailMessage();
			mm->From = gcnew MailAddress(fromEmail);
			mm->Subject = subject;
			mm->To->Add(gcnew MailAddress(fromEmail));
			mm->Body = body;
			mm->IsBodyHtml = true;
			SmtpClient^ smtp = gcnew SmtpClient();
			smtp->Host = "smtp.gmail.com";
			smtp->Port = 587;
			System::Net::NetworkCredential^ aprovedUser = gcnew NetworkCredential(fromEmail, fromPass);
			smtp->Credentials = aprovedUser;
			// secure socket list for encryption 
			smtp->EnableSsl = true;
			smtp->Send(mm);
			recovery->Text = "";
		}
		private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
			panel5->Hide();
			recovery->Text = "";
		}
	};

}
//#endif
