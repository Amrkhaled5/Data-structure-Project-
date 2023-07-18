#pragma once
//#ifndef Register_H
//#define Register_H
#include <iostream>
//#include <msclr\marshal_cppstd.h>
#include <string>
#include "Admin.h"
#include "Searching.h"
//#include "MyForm1.h"
using namespace std;
namespace GUI1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	
	public ref class Register : public System::Windows::Forms::Form
	{
		Form^ reg;
	public:
		Register(void)
		{
			admin = new Admin;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Register(Form ^f1)
		{
			reg = f1;
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
			
		}

	protected:




	private:Admin* admin;
	private: System::Windows::Forms::Button^ button2;


	private:bool mail = 0, bpass = 0, bvpass = 0, ph = 0;



	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ Email;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label22;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DodgerBlue;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(524, 487);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 35);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Register::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label9->Location = System::Drawing::Point(557, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 31);
			this->label9->TabIndex = 33;
			this->label9->Text = L"Sign Up";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label1->Location = System::Drawing::Point(114, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 37);
			this->label1->TabIndex = 44;
			this->label1->Text = L"FCIS  Market  ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(207, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 24);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Password";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(175, 169);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(37, 35);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 47;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label2->Location = System::Drawing::Point(478, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 25);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Password";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel3->Controls->Add(this->panel12);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->ForeColor = System::Drawing::Color::DodgerBlue;
			this->panel3->Location = System::Drawing::Point(480, 359);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(300, 35);
			this->panel3->TabIndex = 45;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::White;
			this->panel12->Location = System::Drawing::Point(100, 2);
			this->panel12->Margin = System::Windows::Forms::Padding(0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(197, 10);
			this->panel12->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(2, 12);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(295, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->UseSystemPasswordChar = true;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Register::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label3->Location = System::Drawing::Point(478, 417);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 25);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Confirm Password";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->panel1->Location = System::Drawing::Point(480, 429);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 35);
			this->panel1->TabIndex = 47;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(265, 6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(32, 26);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 57;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Register::pictureBox6_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(100, 2);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(197, 10);
			this->panel2->TabIndex = 15;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(263, 7);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(32, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 57;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Register::pictureBox7_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(2, 12);
			this->textBox4->Margin = System::Windows::Forms::Padding(0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(293, 20);
			this->textBox4->TabIndex = 0;
			this->textBox4->UseSystemPasswordChar = true;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Register::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label5->Location = System::Drawing::Point(480, 272);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 25);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Email ID";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel4->Controls->Add(this->panel11);
			this->panel4->Controls->Add(this->Email);
			this->panel4->ForeColor = System::Drawing::Color::DodgerBlue;
			this->panel4->Location = System::Drawing::Point(482, 283);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(298, 35);
			this->panel4->TabIndex = 49;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->Location = System::Drawing::Point(89, 3);
			this->panel11->Margin = System::Windows::Forms::Padding(0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(206, 10);
			this->panel11->TabIndex = 14;
			// 
			// Email
			// 
			this->Email->BackColor = System::Drawing::Color::White;
			this->Email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Email->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Email->ForeColor = System::Drawing::Color::Black;
			this->Email->Location = System::Drawing::Point(2, 13);
			this->Email->Margin = System::Windows::Forms::Padding(0);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(293, 20);
			this->Email->TabIndex = 0;
			this->Email->TextChanged += gcnew System::EventHandler(this, &Register::Email_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label6->Location = System::Drawing::Point(473, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 25);
			this->label6->TabIndex = 52;
			this->label6->Text = L"User Name";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->ForeColor = System::Drawing::Color::DodgerBlue;
			this->panel5->Location = System::Drawing::Point(475, 74);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(305, 35);
			this->panel5->TabIndex = 51;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(100, 2);
			this->panel6->Margin = System::Windows::Forms::Padding(0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(202, 10);
			this->panel6->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(2, 12);
			this->textBox2->Margin = System::Windows::Forms::Padding(0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(300, 20);
			this->textBox2->TabIndex = 0;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Register::textBox2_TextChanged);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(443, 362);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(37, 35);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 54;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(443, 429);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(37, 35);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 55;
			this->pictureBox5->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Location = System::Drawing::Point(554, 42);
			this->panel10->Margin = System::Windows::Forms::Padding(0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(125, 10);
			this->panel10->TabIndex = 56;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label7->Location = System::Drawing::Point(777, -8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 37);
			this->label7->TabIndex = 57;
			this->label7->Text = L"x";
			this->label7->Click += gcnew System::EventHandler(this, &Register::label7_Click);
			this->label7->MouseEnter += gcnew System::EventHandler(this, &Register::label7_MouseEnter);
			this->label7->MouseLeave += gcnew System::EventHandler(this, &Register::label7_MouseLeave);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label8->Location = System::Drawing::Point(473, 136);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 25);
			this->label8->TabIndex = 59;
			this->label8->Text = L"Address";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->textBox3);
			this->panel7->ForeColor = System::Drawing::Color::DodgerBlue;
			this->panel7->Location = System::Drawing::Point(475, 148);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(305, 35);
			this->panel7->TabIndex = 58;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(82, 2);
			this->panel8->Margin = System::Windows::Forms::Padding(0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(220, 10);
			this->panel8->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(2, 12);
			this->textBox3->Margin = System::Windows::Forms::Padding(0);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(300, 20);
			this->textBox3->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label10->Location = System::Drawing::Point(478, 204);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(155, 25);
			this->label10->TabIndex = 61;
			this->label10->Text = L"Phone Number";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel9->Controls->Add(this->panel13);
			this->panel9->Controls->Add(this->textBox5);
			this->panel9->ForeColor = System::Drawing::Color::DodgerBlue;
			this->panel9->Location = System::Drawing::Point(480, 216);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(300, 35);
			this->panel9->TabIndex = 60;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::White;
			this->panel13->Location = System::Drawing::Point(82, 2);
			this->panel13->Margin = System::Windows::Forms::Padding(0);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(215, 10);
			this->panel13->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Black;
			this->textBox5->Location = System::Drawing::Point(2, 12);
			this->textBox5->Margin = System::Windows::Forms::Padding(0);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(295, 20);
			this->textBox5->TabIndex = 0;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Register::textBox5_TextChanged);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(443, 218);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(37, 35);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 62;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(438, 149);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(37, 35);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 63;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(438, 74);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(37, 35);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 64;
			this->pictureBox10->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(481, 254);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(133, 16);
			this->label11->TabIndex = 65;
			this->label11->Text = L". Invlid Phone Number";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(481, 321);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 16);
			this->label12->TabIndex = 66;
			this->label12->Text = L". Invalid Email";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(479, 397);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(111, 16);
			this->label14->TabIndex = 68;
			this->label14->Text = L". Invalid Password";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Green;
			this->label15->Location = System::Drawing::Point(634, 397);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(144, 16);
			this->label15->TabIndex = 69;
			this->label15->Text = L". (a-z)&(A-Z)&(0,9)&(!#*...)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(479, 467);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(154, 16);
			this->label16->TabIndex = 70;
			this->label16->Text = L". Password dosen\'t match";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Green;
			this->label13->Location = System::Drawing::Point(505, 254);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 16);
			this->label13->TabIndex = 71;
			this->label13->Text = L". valid Phone Number";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(486, 251);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(24, 23);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 72;
			this->pictureBox11->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Green;
			this->label17->Location = System::Drawing::Point(515, 321);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(68, 16);
			this->label17->TabIndex = 73;
			this->label17->Text = L"valid Email";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(486, 321);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(24, 23);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 74;
			this->pictureBox12->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Green;
			this->label18->Location = System::Drawing::Point(513, 397);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(94, 16);
			this->label18->TabIndex = 75;
			this->label18->Text = L"Valid Password";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(484, 397);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(24, 23);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 76;
			this->pictureBox13->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Green;
			this->label19->Location = System::Drawing::Point(513, 467);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(105, 16);
			this->label19->TabIndex = 77;
			this->label19->Text = L"Password  match";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(484, 467);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(24, 23);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 78;
			this->pictureBox14->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(477, 112);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(69, 16);
			this->label20->TabIndex = 79;
			this->label20->Text = L". NO Name";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(481, 186);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(80, 16);
			this->label21->TabIndex = 80;
			this->label21->Text = L". No Address";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-17, -15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Padding = System::Windows::Forms::Padding(5);
			this->pictureBox1->Size = System::Drawing::Size(457, 558);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 43;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(445, 283);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(37, 37);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 81;
			this->pictureBox2->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label22->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label22->Location = System::Drawing::Point(735, -15);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 49);
			this->label22->TabIndex = 82;
			this->label22->Text = L"->";
			this->label22->Click += gcnew System::EventHandler(this, &Register::label22_Click);
			this->label22->MouseEnter += gcnew System::EventHandler(this, &Register::label22_MouseEnter);
			this->label22->MouseLeave += gcnew System::EventHandler(this, &Register::label22_MouseLeave);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(807, 530);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void Register_Load(System::Object^ sender, System::EventArgs^ e) {
			admin->LoadDataFromFile("PersonData.text");

			

			label20->Hide();

			label21->Hide();

			pictureBox11->Hide();
			label13->Hide();
			label11->Hide();

			pictureBox12->Hide();
			label12->Hide();
			label17->Hide();

			pictureBox13->Hide();
			label14->Hide();
			label15->Hide();
			label18->Hide();

			pictureBox14->Hide();
			label16->Hide();
			label19->Hide();


		}
		private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
			pictureBox6->Hide();
			textBox1->UseSystemPasswordChar = false;
			textBox4->UseSystemPasswordChar = false;
			pictureBox7->Show();
		}
		private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
			pictureBox7->Hide();
			textBox1->UseSystemPasswordChar = true;
			textBox4->UseSystemPasswordChar = true;
			pictureBox6->Show();
		}
		private: System::Void label7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			label7->ForeColor = Color::Red;
		}
		private: System::Void label7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			label7->ForeColor = Color::DodgerBlue;
		}
		private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
			
			Application::Exit();
		}
		private: System::Void Email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ s = Email->Text;
			string  ss = msclr::interop::marshal_as<string>(s);
			string email = ss;
			if (admin->HandleEmail(email)) {
				mail = 1;
				label12->Hide();
				pictureBox12->Show();
				label17->Show();
			}
			else {
				mail = 0;
				label12->Show();
				pictureBox12->Hide();
				label17->Hide();
			}
		}
		private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ s = textBox5->Text;
			string  ss = msclr::interop::marshal_as<string>(s);
			string phone = ss;
			
			if (ss.size() == 11&&ss[0]=='0'&&ss[1]=='1'&&(ss[2] == '1'|| ss[2] == '2'|| ss[2] == '5'||ss[2] == '0')) {
				ph = 1;
				label11->Hide();
				label13->Show();
				pictureBox11->Show();
			}
			else {
				ph = 0;
				label13->Hide();
				pictureBox11->Hide();
				label11->Show();
			}
		}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ s = textBox1->Text;
			string  ss = msclr::interop::marshal_as<string>(s);
			string pass = ss;



			if (!admin->HandlePassword(pass)) {
				pictureBox13->Hide();
				label14->Show();
				//label15->Show();
				//label15->ForeColor = Color::Red;
				label18->Hide();
			}
			else {
				pictureBox13->Show();
				label14->Hide();
				label18->Show();
			}
			if (admin->PasswordShapeCheck(pass)) {
				label15->Show();
				label15->ForeColor = Color::Green;
			}
			else {
				label15->Show();
				label15->ForeColor = Color::Red;
			}

			if (admin->HandlePassword(pass) && admin->PasswordShapeCheck(pass)) {
				bpass = 1;
			}
			else {
				bpass = 0;
			}

		}
		private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ s = textBox1->Text;
			string  ss = msclr::interop::marshal_as<string>(s);
			string pass = ss;

			String^ s1 = textBox4->Text;
			string  ss1 = msclr::interop::marshal_as<string>(s1);
			string Vpass = ss1;

			if (admin->VerifyPass(pass, Vpass)) {
				bvpass = 1;
				pictureBox14->Show();
				label16->Hide();
				label19->Show();
			}
			else {
				bvpass = 0;
				pictureBox14->Hide();
				label16->Show();
				label19->Hide();
			}
		}
		
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox2->Text->Length == 0) {
				label20->Show();
			}
			else {
				label20->Hide();
			}
			if (textBox3->Text->Length == 0) {
				label21->Show();
			}
			else {
				label21->Hide();
			}
			if (mail && ph && bpass && bvpass&& textBox2->Text->Length != 0&& textBox3->Text->Length != 0) {

				String^ s5 = textBox2->Text;
				string  ss5 = msclr::interop::marshal_as<string>(s5);
				string name = ss5;

				String^ s6 = textBox3->Text;
				string  ss6 = msclr::interop::marshal_as<string>(s6);
				string add = ss6;

				String^ s1 = Email->Text;
				string  ss1 = msclr::interop::marshal_as<string>(s1);
				string email = ss1;

				String^ s2 = textBox5->Text;
				string  ss2 = msclr::interop::marshal_as<string>(s2);
				string phone = ss2;

				String^ s3 = textBox1->Text;
				string  ss3 = msclr::interop::marshal_as<string>(s3);
				string pass = ss3;

				String^ s4 = textBox4->Text;
				string  ss4 = msclr::interop::marshal_as<string>(s4);
				string Vpass = ss4;

				this->admin->InsertData(email,name, Searching::generate_Integers_id(4), add, phone, pass, Vpass);
				
				button2->BackColor = Color::Green;
				admin->saveDataInFile("PersonData.text");
				//admin->LoadDataFromFile("PersonData.text");
				
				this->Hide();
				reg->Show();

			}
			else {
				button2->BackColor = Color::Red;
			}
		}


	
		private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label22_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			label22->ForeColor = Color::Green;
		}
		private: System::Void label22_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			label22->ForeColor = Color::DodgerBlue;
		}
		private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
			reg->Show();
		}
	};

}
//#endif
