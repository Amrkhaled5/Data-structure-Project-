#pragma once
#include "Admin.h"
#include <msclr\marshal_cppstd.h>
#include "Person.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "Market.h"
#include "Searching.h";
using namespace std;
namespace GUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
		Form^ login;
	public:
		Home(void)
		{
			InitializeComponent();
			market = new Market;
			//
			//TODO: Add the constructor code here
			//
		}
		Home(Form^ f1)
		{
			login = f1;
			market = new Market;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		property Person* per {
			Person* get() {
				return person;
			}
			void set(Person* per) {
				person = per;
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private:Person* person;
	private:Market* market;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label27;




	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::DataGridView^ dataGridView2;






	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
























































	protected:















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Label^ label31;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Panel^ panel25;

private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::Label^ label39;

private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::Panel^ panel34;



private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Button^ button20;







private: System::Windows::Forms::Panel^ panel35;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Panel^ panel36;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Panel^ panel37;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Panel^ panel40;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Panel^ panel41;
private: System::Windows::Forms::Panel^ panel42;
private: System::Windows::Forms::DataGridView^ dataGridView3;






private: System::Windows::Forms::Panel^ panel43;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Panel^ panel44;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label68;












private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Button^ button21;
































private: System::Windows::Forms::Label^ label82;










private: System::Windows::Forms::Label^ label83;




























private: System::Windows::Forms::Label^ label84;











private: System::Windows::Forms::Panel^ panel38;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Panel^ panel39;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::Label^ label90;
private: System::Windows::Forms::Label^ label91;
private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::Label^ label94;
private: System::Windows::Forms::Label^ incart;
private: System::Windows::Forms::Label^ Avl;
private: System::Windows::Forms::Label^ sold;
private: System::Windows::Forms::Label^ cat;
private: System::Windows::Forms::Label^ name;











private: System::Windows::Forms::Label^ CartBChange;
private: System::Windows::Forms::Panel^ panel45;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Label^ TotalCost;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ pass;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
private: System::Windows::Forms::Label^ label9;


private: System::Windows::Forms::Panel^ RatePanal;
private: System::Windows::Forms::Label^ commentLabel;

private: System::Windows::Forms::Label^ rateLabel;


private: System::Windows::Forms::TextBox^ comment;
private: System::Windows::Forms::TextBox^ Rate;


private: System::Windows::Forms::Label^ CancelRate;
private: System::Windows::Forms::Button^ addRate;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label96;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::Label^ label97;
private: System::Windows::Forms::Panel^ panel46;
private: System::Windows::Forms::Label^ label98;
private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::Label^ label100;
private: System::Windows::Forms::Panel^ panel47;
private: System::Windows::Forms::Panel^ panel48;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Panel^ panel55;


private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::Label^ label119;
private: System::Windows::Forms::Panel^ panel56;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Panel^ panel49;
private: System::Windows::Forms::Label^ label101;
private: System::Windows::Forms::Panel^ panel50;
private: System::Windows::Forms::Label^ label102;
private: System::Windows::Forms::Label^ label103;
private: System::Windows::Forms::Label^ label104;
private: System::Windows::Forms::Label^ label105;
private: System::Windows::Forms::Panel^ panel51;
private: System::Windows::Forms::Panel^ panel52;
private: System::Windows::Forms::Panel^ panel54;


private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::Panel^ panel57;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;





















































#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		int NumOfRow = -1;
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RatePanal = (gcnew System::Windows::Forms::Panel());
			this->addRate = (gcnew System::Windows::Forms::Button());
			this->CancelRate = (gcnew System::Windows::Forms::Label());
			this->commentLabel = (gcnew System::Windows::Forms::Label());
			this->rateLabel = (gcnew System::Windows::Forms::Label());
			this->comment = (gcnew System::Windows::Forms::TextBox());
			this->Rate = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->pass = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->CartBChange = (gcnew System::Windows::Forms::Label());
			this->incart = (gcnew System::Windows::Forms::Label());
			this->Avl = (gcnew System::Windows::Forms::Label());
			this->sold = (gcnew System::Windows::Forms::Label());
			this->cat = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->TotalCost = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel55 = (gcnew System::Windows::Forms::Panel());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->panel57 = (gcnew System::Windows::Forms::Panel());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->panel7->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->RatePanal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel26->SuspendLayout();
			this->panel27->SuspendLayout();
			this->panel25->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel32->SuspendLayout();
			this->panel33->SuspendLayout();
			this->panel34->SuspendLayout();
			this->panel30->SuspendLayout();
			this->panel35->SuspendLayout();
			this->panel36->SuspendLayout();
			this->panel37->SuspendLayout();
			this->panel40->SuspendLayout();
			this->panel41->SuspendLayout();
			this->panel42->SuspendLayout();
			this->panel38->SuspendLayout();
			this->panel45->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel43->SuspendLayout();
			this->panel44->SuspendLayout();
			this->panel31->SuspendLayout();
			this->panel46->SuspendLayout();
			this->panel47->SuspendLayout();
			this->panel48->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel55->SuspendLayout();
			this->panel56->SuspendLayout();
			this->panel49->SuspendLayout();
			this->panel50->SuspendLayout();
			this->panel51->SuspendLayout();
			this->panel52->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel54->SuspendLayout();
			this->panel57->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel7->Controls->Add(this->panel10);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->panel9);
			this->panel7->Location = System::Drawing::Point(28, 24);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1250, 776);
			this->panel7->TabIndex = 3;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Controls->Add(this->dataGridView1);
			this->panel10->Location = System::Drawing::Point(-2, 169);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1252, 607);
			this->panel10->TabIndex = 2;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::SteelBlue;
			this->panel11->Controls->Add(this->label49);
			this->panel11->Controls->Add(this->label96);
			this->panel11->Controls->Add(this->label83);
			this->panel11->Controls->Add(this->label29);
			this->panel11->Controls->Add(this->label28);
			this->panel11->Controls->Add(this->textBox5);
			this->panel11->Controls->Add(this->textBox4);
			this->panel11->Controls->Add(this->textBox3);
			this->panel11->Controls->Add(this->textBox2);
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->button4);
			this->panel11->Controls->Add(this->button3);
			this->panel11->Controls->Add(this->label19);
			this->panel11->Controls->Add(this->label20);
			this->panel11->Controls->Add(this->label18);
			this->panel11->Controls->Add(this->label17);
			this->panel11->Controls->Add(this->label16);
			this->panel11->Controls->Add(this->label15);
			this->panel11->Location = System::Drawing::Point(56, 107);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(1142, 234);
			this->panel11->TabIndex = 1;
			// 
			// label49
			// 
			this->label49->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(1118, -8);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(25, 35);
			this->label49->TabIndex = 18;
			this->label49->Text = L"x";
			this->label49->Click += gcnew System::EventHandler(this, &Home::label49_Click);
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->ForeColor = System::Drawing::Color::SteelBlue;
			this->label96->Location = System::Drawing::Point(487, 192);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(147, 31);
			this->label96->TabIndex = 17;
			this->label96->Text = L"Invalid Data";
			// 
			// label83
			// 
			this->label83->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->ForeColor = System::Drawing::Color::SteelBlue;
			this->label83->Location = System::Drawing::Point(334, 79);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(10, 31);
			this->label83->TabIndex = 16;
			this->label83->Text = L"Product name:";
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label29->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label29->Location = System::Drawing::Point(1020, 98);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(111, 32);
			this->label29->TabIndex = 15;
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label29->Click += gcnew System::EventHandler(this, &Home::label29_Click);
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label28->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label28->Location = System::Drawing::Point(1003, 36);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(111, 32);
			this->label28->TabIndex = 14;
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox5->Location = System::Drawing::Point(619, 37);
			this->textBox5->Margin = System::Windows::Forms::Padding(0);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(143, 33);
			this->textBox5->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox4->Location = System::Drawing::Point(665, 100);
			this->textBox4->Margin = System::Windows::Forms::Padding(0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 33);
			this->textBox4->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox3->Location = System::Drawing::Point(125, 99);
			this->textBox3->Margin = System::Windows::Forms::Padding(0);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 33);
			this->textBox3->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->Location = System::Drawing::Point(177, 36);
			this->textBox2->Margin = System::Windows::Forms::Padding(0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 33);
			this->textBox2->TabIndex = 9;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Goldenrod;
			this->panel12->Location = System::Drawing::Point(0, 170);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1142, 10);
			this->panel12->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(780, 190);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 36);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Home::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Goldenrod;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(286, 190);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 36);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Edit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Home::button3_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Goldenrod;
			this->label19->Location = System::Drawing::Point(937, 97);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(90, 31);
			this->label19->TabIndex = 5;
			this->label19->Text = L"In cart:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Goldenrod;
			this->label20->Location = System::Drawing::Point(937, 34);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(71, 31);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Sold:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Goldenrod;
			this->label18->Location = System::Drawing::Point(549, 98);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(122, 31);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Available:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Goldenrod;
			this->label17->Location = System::Drawing::Point(549, 35);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 31);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Price:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Goldenrod;
			this->label16->Location = System::Drawing::Point(14, 98);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(118, 31);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Category:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Goldenrod;
			this->label15->Location = System::Drawing::Point(14, 35);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(171, 31);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Product name:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Goldenrod;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 35;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column7, this->Column5, this->Column10, this->Column4, this->Column9, this->Column8
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 25;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::DodgerBlue;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowTemplate->Height = 25;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1252, 607);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Home::dataGridView1_CellDoubleClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Name";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Category";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->FillWeight = 50;
			this->Column3->HeaderText = L"Price";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column7->FillWeight = 40;
			this->Column7->HeaderText = L"sold";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"Available Quantity";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 207;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"In Cart";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 125;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->FillWeight = 40;
			this->Column4->HeaderText = L"Rate";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Seller id";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Visible = false;
			this->Column9->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Id";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Visible = false;
			this->Column8->Width = 125;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::SteelBlue;
			this->panel8->Controls->Add(this->button2);
			this->panel8->Controls->Add(this->textBox1);
			this->panel8->Controls->Add(this->label12);
			this->panel8->Controls->Add(this->label13);
			this->panel8->Location = System::Drawing::Point(0, 55);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1250, 61);
			this->panel8->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Goldenrod;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1045, 11);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(692, 11);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(354, 36);
			this->textBox1->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Goldenrod;
			this->label12->Location = System::Drawing::Point(153, 18);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 40);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Market";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label13->Location = System::Drawing::Point(24, -5);
			this->label13->Margin = System::Windows::Forms::Padding(0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(146, 67);
			this->label13->TabIndex = 0;
			this->label13->Text = L"FCIS";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Goldenrod;
			this->panel9->Controls->Add(this->button13);
			this->panel9->Controls->Add(this->button1);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Margin = System::Windows::Forms::Padding(0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1250, 171);
			this->panel9->TabIndex = 0;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::SteelBlue;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(871, 8);
			this->button13->Margin = System::Windows::Forms::Padding(0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(124, 40);
			this->button13->TabIndex = 4;
			this->button13->Text = L"Logout";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1062, 8);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buy";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click_1);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::SteelBlue;
			this->panel6->Controls->Add(this->button28);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Location = System::Drawing::Point(28, 142);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1250, 49);
			this->panel6->TabIndex = 4;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Goldenrod;
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(1074, 2);
			this->button28->Margin = System::Windows::Forms::Padding(0);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(150, 44);
			this->button28->TabIndex = 6;
			this->button28->Text = L"Out Of Stock";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Home::button28_Click);
			// 
			// label8
			// 
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label8->Location = System::Drawing::Point(793, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 46);
			this->label8->TabIndex = 5;
			this->label8->Text = L"About";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &Home::label8_Click);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Goldenrod;
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label10->Location = System::Drawing::Point(499, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(161, 49);
			this->label10->TabIndex = 3;
			this->label10->Text = L"My Product";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &Home::label10_Click);
			// 
			// label11
			// 
			this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label11->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label11->Location = System::Drawing::Point(318, 3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(86, 46);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Home";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &Home::label11_Click);
			// 
			// label14
			// 
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(1277, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(25, 35);
			this->label14->TabIndex = 13;
			this->label14->Text = L"x";
			this->label14->Click += gcnew System::EventHandler(this, &Home::label14_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1302, 825);
			this->panel5->TabIndex = 2;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel5_Paint);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel13);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1302, 825);
			this->panel1->TabIndex = 14;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SteelBlue;
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->label84);
			this->panel2->Controls->Add(this->label82);
			this->panel2->Controls->Add(this->label81);
			this->panel2->Controls->Add(this->label72);
			this->panel2->Controls->Add(this->label73);
			this->panel2->Controls->Add(this->label71);
			this->panel2->Controls->Add(this->label70);
			this->panel2->Controls->Add(this->label69);
			this->panel2->Controls->Add(this->label68);
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(29, 300);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1249, 234);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel2_Paint);
			// 
			// label9
			// 
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1227, -6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 35);
			this->label9->TabIndex = 25;
			this->label9->Text = L"x";
			this->label9->Click += gcnew System::EventHandler(this, &Home::label9_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Goldenrod;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(29, 187);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(156, 43);
			this->button9->TabIndex = 24;
			this->button9->Text = L"Rates";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Home::button9_Click);
			// 
			// label84
			// 
			this->label84->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->ForeColor = System::Drawing::Color::SteelBlue;
			this->label84->Location = System::Drawing::Point(468, 106);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(32, 31);
			this->label84->TabIndex = 23;
			this->label84->Text = L"incart";
			// 
			// label82
			// 
			this->label82->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->ForeColor = System::Drawing::Color::SteelBlue;
			this->label82->Location = System::Drawing::Point(322, 92);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(32, 31);
			this->label82->TabIndex = 22;
			this->label82->Text = L"Product name:";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->ForeColor = System::Drawing::Color::SteelBlue;
			this->label81->Location = System::Drawing::Point(1041, 136);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(198, 31);
			this->label81->TabIndex = 21;
			this->label81->Text = L".Invalid Quantity";
			// 
			// label72
			// 
			this->label72->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label72->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label72->Location = System::Drawing::Point(1013, 194);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(111, 32);
			this->label72->TabIndex = 20;
			this->label72->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->ForeColor = System::Drawing::Color::Goldenrod;
			this->label73->Location = System::Drawing::Point(936, 194);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(76, 31);
			this->label73->TabIndex = 19;
			this->label73->Text = L"Total:";
			// 
			// label71
			// 
			this->label71->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label71->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label71->Location = System::Drawing::Point(182, 31);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(148, 32);
			this->label71->TabIndex = 18;
			this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label70
			// 
			this->label70->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label70->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label70->Location = System::Drawing::Point(127, 96);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(134, 32);
			this->label70->TabIndex = 17;
			this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label69
			// 
			this->label69->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label69->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label69->Location = System::Drawing::Point(616, 32);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(111, 32);
			this->label69->TabIndex = 16;
			this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label68
			// 
			this->label68->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label68->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label68->Location = System::Drawing::Point(614, 93);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(111, 32);
			this->label68->TabIndex = 15;
			this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox11->Location = System::Drawing::Point(1091, 94);
			this->textBox11->Margin = System::Windows::Forms::Padding(0);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(130, 33);
			this->textBox11->TabIndex = 14;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Home::textBox11_TextChanged);
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label27->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label27->Location = System::Drawing::Point(1141, 31);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(111, 32);
			this->label27->TabIndex = 13;
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Goldenrod;
			this->panel3->Location = System::Drawing::Point(0, 170);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1252, 10);
			this->panel3->TabIndex = 8;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Goldenrod;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(542, 187);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(180, 43);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Add To Cart";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Home::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Goldenrod;
			this->label1->Location = System::Drawing::Point(925, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Quantity need:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Goldenrod;
			this->label2->Location = System::Drawing::Point(925, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 31);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Quantity Available:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Goldenrod;
			this->label3->Location = System::Drawing::Point(549, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Sold:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Goldenrod;
			this->label4->Location = System::Drawing::Point(549, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 31);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Price:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Goldenrod;
			this->label5->Location = System::Drawing::Point(14, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 31);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Category: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Goldenrod;
			this->label6->Location = System::Drawing::Point(14, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 31);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Product name:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SteelBlue;
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Location = System::Drawing::Point(28, 143);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1250, 49);
			this->panel4->TabIndex = 4;
			// 
			// label21
			// 
			this->label21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label21->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label21->Location = System::Drawing::Point(865, 3);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 46);
			this->label21->TabIndex = 5;
			this->label21->Text = L"About";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label21->Click += gcnew System::EventHandler(this, &Home::label21_Click);
			// 
			// label22
			// 
			this->label22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label22->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label22->Location = System::Drawing::Point(704, 3);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(82, 46);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Cart";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label22->Click += gcnew System::EventHandler(this, &Home::label22_Click);
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::Goldenrod;
			this->label23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label23->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label23->Location = System::Drawing::Point(467, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(161, 49);
			this->label23->TabIndex = 3;
			this->label23->Text = L"Products";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label23->Click += gcnew System::EventHandler(this, &Home::label23_Click);
			// 
			// label24
			// 
			this->label24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label24->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label24->Location = System::Drawing::Point(305, 3);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(86, 46);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Home";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label24->Click += gcnew System::EventHandler(this, &Home::label24_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel13->Controls->Add(this->dataGridView2);
			this->panel13->Controls->Add(this->RatePanal);
			this->panel13->Controls->Add(this->dataGridView4);
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->panel15);
			this->panel13->Controls->Add(this->panel16);
			this->panel13->Location = System::Drawing::Point(28, 24);
			this->panel13->Margin = System::Windows::Forms::Padding(0);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(1250, 776);
			this->panel13->TabIndex = 3;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Goldenrod;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->ColumnHeadersHeight = 35;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->Column12, this->dataGridViewTextBoxColumn5, this->Column11,
					this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn6, this->Column6
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->Location = System::Drawing::Point(0, 171);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 25;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::DodgerBlue;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->RowTemplate->Height = 25;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(1250, 605);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Home::dataGridView2_CellContentClick_1);
			this->dataGridView2->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Home::dataGridView2_CellDoubleClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Category";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->FillWeight = 50;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Price";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->FillWeight = 50;
			this->Column12->HeaderText = L"sold";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Available Quantity";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 207;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Quantity in cart";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Visible = false;
			this->Column11->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->FillWeight = 30;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Rate";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn6->FillWeight = 50;
			this->dataGridViewTextBoxColumn6->HeaderText = L"SellerId";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Visible = false;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Product Id ";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Visible = false;
			this->Column6->Width = 125;
			// 
			// RatePanal
			// 
			this->RatePanal->BackColor = System::Drawing::Color::Goldenrod;
			this->RatePanal->Controls->Add(this->addRate);
			this->RatePanal->Controls->Add(this->CancelRate);
			this->RatePanal->Controls->Add(this->commentLabel);
			this->RatePanal->Controls->Add(this->rateLabel);
			this->RatePanal->Controls->Add(this->comment);
			this->RatePanal->Controls->Add(this->Rate);
			this->RatePanal->Location = System::Drawing::Point(347, 289);
			this->RatePanal->Name = L"RatePanal";
			this->RatePanal->Size = System::Drawing::Size(557, 273);
			this->RatePanal->TabIndex = 29;
			// 
			// addRate
			// 
			this->addRate->BackColor = System::Drawing::Color::Green;
			this->addRate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addRate->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addRate->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->addRate->Location = System::Drawing::Point(250, 215);
			this->addRate->Name = L"addRate";
			this->addRate->Size = System::Drawing::Size(132, 42);
			this->addRate->TabIndex = 29;
			this->addRate->Text = L"Add";
			this->addRate->UseVisualStyleBackColor = false;
			this->addRate->Click += gcnew System::EventHandler(this, &Home::addRate_Click);
			// 
			// CancelRate
			// 
			this->CancelRate->AutoSize = true;
			this->CancelRate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CancelRate->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelRate->ForeColor = System::Drawing::Color::SteelBlue;
			this->CancelRate->Location = System::Drawing::Point(531, -1);
			this->CancelRate->Name = L"CancelRate";
			this->CancelRate->Size = System::Drawing::Size(29, 29);
			this->CancelRate->TabIndex = 4;
			this->CancelRate->Text = L"X";
			this->CancelRate->Click += gcnew System::EventHandler(this, &Home::label96_Click);
			// 
			// commentLabel
			// 
			this->commentLabel->AutoSize = true;
			this->commentLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->commentLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->commentLabel->Location = System::Drawing::Point(4, 117);
			this->commentLabel->Name = L"commentLabel";
			this->commentLabel->Size = System::Drawing::Size(154, 40);
			this->commentLabel->TabIndex = 3;
			this->commentLabel->Text = L"Comment:";
			// 
			// rateLabel
			// 
			this->rateLabel->AutoSize = true;
			this->rateLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rateLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->rateLabel->Location = System::Drawing::Point(206, 29);
			this->rateLabel->Name = L"rateLabel";
			this->rateLabel->Size = System::Drawing::Size(95, 40);
			this->rateLabel->TabIndex = 2;
			this->rateLabel->Text = L"Rate:";
			this->rateLabel->Click += gcnew System::EventHandler(this, &Home::label32_Click);
			// 
			// comment
			// 
			this->comment->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comment->Location = System::Drawing::Point(165, 93);
			this->comment->Multiline = true;
			this->comment->Name = L"comment";
			this->comment->Size = System::Drawing::Size(366, 97);
			this->comment->TabIndex = 0;
			// 
			// Rate
			// 
			this->Rate->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rate->Location = System::Drawing::Point(299, 37);
			this->Rate->Name = L"Rate";
			this->Rate->Size = System::Drawing::Size(126, 30);
			this->Rate->TabIndex = 1;
			this->Rate->TextChanged += gcnew System::EventHandler(this, &Home::Rate_TextChanged);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->AllowUserToOrderColumns = true;
			this->dataGridView4->AllowUserToResizeColumns = false;
			this->dataGridView4->AllowUserToResizeRows = false;
			this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::Goldenrod;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView4->ColumnHeadersHeight = 35;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column20,
					this->Column22, this->Column21
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView4->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView4->EnableHeadersVisualStyles = false;
			this->dataGridView4->Location = System::Drawing::Point(-2, 171);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(0);
			this->dataGridView4->MultiSelect = false;
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 25;
			this->dataGridView4->RowTemplate->Height = 25;
			this->dataGridView4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView4->Size = System::Drawing::Size(1252, 485);
			this->dataGridView4->TabIndex = 1;
			// 
			// Column20
			// 
			this->Column20->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column20->HeaderText = L"Customer Name";
			this->Column20->MinimumWidth = 6;
			this->Column20->Name = L"Column20";
			this->Column20->ReadOnly = true;
			this->Column20->Width = 188;
			// 
			// Column22
			// 
			this->Column22->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column22->HeaderText = L"Comment";
			this->Column22->MinimumWidth = 6;
			this->Column22->Name = L"Column22";
			this->Column22->ReadOnly = true;
			// 
			// Column21
			// 
			this->Column21->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column21->FillWeight = 20;
			this->Column21->HeaderText = L"Rate";
			this->Column21->MinimumWidth = 6;
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->button30);
			this->panel14->Controls->Add(this->button16);
			this->panel14->Location = System::Drawing::Point(-2, 657);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1252, 119);
			this->panel14->TabIndex = 2;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Goldenrod;
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button30->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button30->Location = System::Drawing::Point(715, 38);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(153, 55);
			this->button30->TabIndex = 30;
			this->button30->Text = L"Return To Products";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Home::button30_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::SteelBlue;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button16->Location = System::Drawing::Point(382, 38);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(153, 55);
			this->button16->TabIndex = 29;
			this->button16->Text = L"Add Rate";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Home::button16_Click_1);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::SteelBlue;
			this->panel15->Controls->Add(this->button7);
			this->panel15->Controls->Add(this->textBox10);
			this->panel15->Controls->Add(this->label25);
			this->panel15->Controls->Add(this->label26);
			this->panel15->Location = System::Drawing::Point(0, 55);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(1250, 61);
			this->panel15->TabIndex = 1;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Goldenrod;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(1045, 11);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(117, 36);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Home::button7_Click);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(692, 11);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(354, 36);
			this->textBox10->TabIndex = 2;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Goldenrod;
			this->label25->Location = System::Drawing::Point(153, 18);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(119, 40);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Market";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label26->Location = System::Drawing::Point(24, -5);
			this->label26->Margin = System::Windows::Forms::Padding(0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(146, 67);
			this->label26->TabIndex = 0;
			this->label26->Text = L"FCIS";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Goldenrod;
			this->panel16->Controls->Add(this->button15);
			this->panel16->Controls->Add(this->button8);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel16->Location = System::Drawing::Point(0, 0);
			this->panel16->Margin = System::Windows::Forms::Padding(0);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1250, 171);
			this->panel16->TabIndex = 0;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::SteelBlue;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(864, 8);
			this->button15->Margin = System::Windows::Forms::Padding(0);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(124, 40);
			this->button15->TabIndex = 5;
			this->button15->Text = L"Logout";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Home::button15_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Green;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(1062, 8);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(124, 40);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Sell";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Home::button8_Click);
			// 
			// label7
			// 
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1277, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 35);
			this->label7->TabIndex = 13;
			this->label7->Text = L"x";
			this->label7->Click += gcnew System::EventHandler(this, &Home::label7_Click);
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->label30);
			this->panel17->Controls->Add(this->panel18);
			this->panel17->Controls->Add(this->panel19);
			this->panel17->Location = System::Drawing::Point(0, 0);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(1302, 825);
			this->panel17->TabIndex = 14;
			this->panel17->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel17_Paint);
			// 
			// label30
			// 
			this->label30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(1277, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(25, 35);
			this->label30->TabIndex = 13;
			this->label30->Text = L"x";
			this->label30->Click += gcnew System::EventHandler(this, &Home::label30_Click);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::SteelBlue;
			this->panel18->Controls->Add(this->label31);
			this->panel18->Controls->Add(this->label33);
			this->panel18->Controls->Add(this->label34);
			this->panel18->Location = System::Drawing::Point(28, 142);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(1250, 49);
			this->panel18->TabIndex = 4;
			// 
			// label31
			// 
			this->label31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label31->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label31->Location = System::Drawing::Point(847, 3);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(93, 46);
			this->label31->TabIndex = 5;
			this->label31->Text = L"About";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label31->Click += gcnew System::EventHandler(this, &Home::label31_Click);
			// 
			// label33
			// 
			this->label33->BackColor = System::Drawing::Color::SteelBlue;
			this->label33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label33->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label33->Location = System::Drawing::Point(560, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(161, 49);
			this->label33->TabIndex = 3;
			this->label33->Text = L"My Product";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label33->Click += gcnew System::EventHandler(this, &Home::label33_Click);
			// 
			// label34
			// 
			this->label34->BackColor = System::Drawing::Color::Goldenrod;
			this->label34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label34->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label34->Location = System::Drawing::Point(357, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(86, 49);
			this->label34->TabIndex = 2;
			this->label34->Text = L"Home";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label34->Click += gcnew System::EventHandler(this, &Home::label34_Click);
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel19->Controls->Add(this->panel20);
			this->panel19->Controls->Add(this->panel23);
			this->panel19->Controls->Add(this->panel24);
			this->panel19->Location = System::Drawing::Point(28, 24);
			this->panel19->Margin = System::Windows::Forms::Padding(0);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(1250, 776);
			this->panel19->TabIndex = 3;
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->panel26);
			this->panel20->Controls->Add(this->panel27);
			this->panel20->Controls->Add(this->panel25);
			this->panel20->Controls->Add(this->panel22);
			this->panel20->Controls->Add(this->label35);
			this->panel20->Controls->Add(this->label36);
			this->panel20->Controls->Add(this->panel21);
			this->panel20->Location = System::Drawing::Point(-2, 169);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(1252, 607);
			this->panel20->TabIndex = 2;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::SteelBlue;
			this->panel26->Controls->Add(this->label46);
			this->panel26->Controls->Add(this->label38);
			this->panel26->Location = System::Drawing::Point(56, 266);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(585, 95);
			this->panel26->TabIndex = 6;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label46->Location = System::Drawing::Point(377, 12);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(116, 67);
			this->label46->TabIndex = 2;
			this->label46->Text = L"999";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label38->Location = System::Drawing::Point(14, 12);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(353, 67);
			this->label38->TabIndex = 1;
			this->label38->Text = L"Products Sold:";
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::SteelBlue;
			this->panel27->Controls->Add(this->label32);
			this->panel27->Controls->Add(this->label48);
			this->panel27->Controls->Add(this->textBox12);
			this->panel27->Controls->Add(this->textBox13);
			this->panel27->Controls->Add(this->textBox14);
			this->panel27->Controls->Add(this->textBox15);
			this->panel27->Controls->Add(this->panel28);
			this->panel27->Controls->Add(this->button14);
			this->panel27->Controls->Add(this->label52);
			this->panel27->Controls->Add(this->label53);
			this->panel27->Controls->Add(this->label54);
			this->panel27->Controls->Add(this->label55);
			this->panel27->Location = System::Drawing::Point(209, 362);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(839, 244);
			this->panel27->TabIndex = 7;
			// 
			// label32
			// 
			this->label32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(814, -4);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(25, 35);
			this->label32->TabIndex = 14;
			this->label32->Text = L"x";
			this->label32->Click += gcnew System::EventHandler(this, &Home::label32_Click_1);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::SteelBlue;
			this->label48->Location = System::Drawing::Point(333, 125);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(197, 40);
			this->label48->TabIndex = 13;
			this->label48->Text = L".InValid Data";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox12->Location = System::Drawing::Point(619, 26);
			this->textBox12->Margin = System::Windows::Forms::Padding(0);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(143, 33);
			this->textBox12->TabIndex = 12;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox13->Location = System::Drawing::Point(657, 90);
			this->textBox13->Margin = System::Windows::Forms::Padding(0);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(143, 33);
			this->textBox13->TabIndex = 11;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Home::textBox13_TextChanged);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox14->Location = System::Drawing::Point(125, 90);
			this->textBox14->Margin = System::Windows::Forms::Padding(0);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(143, 33);
			this->textBox14->TabIndex = 10;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox15->Location = System::Drawing::Point(177, 27);
			this->textBox15->Margin = System::Windows::Forms::Padding(0);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(143, 33);
			this->textBox15->TabIndex = 9;
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::Goldenrod;
			this->panel28->Location = System::Drawing::Point(0, 170);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(1142, 10);
			this->panel28->TabIndex = 8;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Goldenrod;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(298, 183);
			this->button14->Margin = System::Windows::Forms::Padding(0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(271, 58);
			this->button14->TabIndex = 6;
			this->button14->Text = L"Add";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Home::button14_Click);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::Color::Goldenrod;
			this->label52->Location = System::Drawing::Point(549, 89);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(115, 31);
			this->label52->TabIndex = 3;
			this->label52->Text = L"Quantity:";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::Goldenrod;
			this->label53->Location = System::Drawing::Point(549, 26);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(75, 31);
			this->label53->TabIndex = 2;
			this->label53->Text = L"Price:";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::Color::Goldenrod;
			this->label54->Location = System::Drawing::Point(14, 89);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(125, 31);
			this->label54->TabIndex = 1;
			this->label54->Text = L"Category: ";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::Color::Goldenrod;
			this->label55->Location = System::Drawing::Point(14, 26);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(171, 31);
			this->label55->TabIndex = 0;
			this->label55->Text = L"Product name:";
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::Green;
			this->panel25->Controls->Add(this->label47);
			this->panel25->Controls->Add(this->label37);
			this->panel25->Location = System::Drawing::Point(56, 154);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(585, 95);
			this->panel25->TabIndex = 5;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label47->Location = System::Drawing::Point(14, 16);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(340, 67);
			this->label47->TabIndex = 2;
			this->label47->Text = L"Total Income:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label37->Location = System::Drawing::Point(377, 15);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(116, 67);
			this->label37->TabIndex = 0;
			this->label37->Text = L"999";
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::SteelBlue;
			this->panel22->Controls->Add(this->label39);
			this->panel22->Location = System::Drawing::Point(56, 40);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(585, 95);
			this->panel22->TabIndex = 4;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label39->Location = System::Drawing::Point(149, 10);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(290, 67);
			this->label39->TabIndex = 6;
			this->label39->Text = L"Seller name";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::Goldenrod;
			this->label35->Location = System::Drawing::Point(617, 460);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(263, 90);
			this->label35->TabIndex = 3;
			this->label35->Text = L"Market";
			this->label35->Click += gcnew System::EventHandler(this, &Home::label35_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label36->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::SteelBlue;
			this->label36->Location = System::Drawing::Point(360, 415);
			this->label36->Margin = System::Windows::Forms::Padding(0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(293, 135);
			this->label36->TabIndex = 2;
			this->label36->Text = L"FCIS";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::SteelBlue;
			this->panel21->Controls->Add(this->label45);
			this->panel21->Controls->Add(this->label42);
			this->panel21->Controls->Add(this->label41);
			this->panel21->Controls->Add(this->label40);
			this->panel21->Controls->Add(this->button5);
			this->panel21->Location = System::Drawing::Point(654, 40);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(585, 321);
			this->panel21->TabIndex = 1;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::Goldenrod;
			this->label45->Location = System::Drawing::Point(210, 148);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(175, 49);
			this->label45->TabIndex = 10;
			this->label45->Text = L"Product \?";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label42->Location = System::Drawing::Point(77, 96);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(438, 49);
			this->label42->TabIndex = 9;
			this->label42->Text = L"Do you want to add a new ";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label41->Location = System::Drawing::Point(268, 19);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(212, 49);
			this->label41->TabIndex = 8;
			this->label41->Text = L"SellerName";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::Goldenrod;
			this->label40->Location = System::Drawing::Point(99, 19);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(178, 49);
			this->label40->TabIndex = 7;
			this->label40->Text = L"Wealcom,";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Goldenrod;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::SteelBlue;
			this->button5->Location = System::Drawing::Point(154, 240);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(275, 51);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Add product";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Home::button5_Click);
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::SteelBlue;
			this->panel23->Controls->Add(this->button10);
			this->panel23->Controls->Add(this->textBox16);
			this->panel23->Controls->Add(this->label43);
			this->panel23->Controls->Add(this->label44);
			this->panel23->Location = System::Drawing::Point(0, 55);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(1250, 61);
			this->panel23->TabIndex = 1;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Goldenrod;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(1045, 11);
			this->button10->Margin = System::Windows::Forms::Padding(0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(117, 36);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Search";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Home::button10_Click);
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(692, 11);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(354, 36);
			this->textBox16->TabIndex = 2;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::Goldenrod;
			this->label43->Location = System::Drawing::Point(153, 18);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(119, 40);
			this->label43->TabIndex = 1;
			this->label43->Text = L"Market";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label44->Location = System::Drawing::Point(24, -5);
			this->label44->Margin = System::Windows::Forms::Padding(0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(146, 67);
			this->label44->TabIndex = 0;
			this->label44->Text = L"FCIS";
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::Goldenrod;
			this->panel24->Controls->Add(this->button12);
			this->panel24->Controls->Add(this->button11);
			this->panel24->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel24->Location = System::Drawing::Point(0, 0);
			this->panel24->Margin = System::Windows::Forms::Padding(0);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(1250, 166);
			this->panel24->TabIndex = 0;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::SteelBlue;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(886, 8);
			this->button12->Margin = System::Windows::Forms::Padding(0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(124, 40);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Logout";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Home::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Green;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(1062, 8);
			this->button11->Margin = System::Windows::Forms::Padding(0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(124, 40);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Buy";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Home::button11_Click);
			// 
			// panel29
			// 
			this->panel29->Controls->Add(this->label60);
			this->panel29->Controls->Add(this->panel32);
			this->panel29->Controls->Add(this->panel33);
			this->panel29->Location = System::Drawing::Point(0, 0);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(1302, 825);
			this->panel29->TabIndex = 15;
			// 
			// label60
			// 
			this->label60->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(1277, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(25, 35);
			this->label60->TabIndex = 13;
			this->label60->Text = L"x";
			this->label60->Click += gcnew System::EventHandler(this, &Home::label60_Click);
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::SteelBlue;
			this->panel32->Controls->Add(this->label61);
			this->panel32->Controls->Add(this->label62);
			this->panel32->Controls->Add(this->label63);
			this->panel32->Controls->Add(this->label64);
			this->panel32->Location = System::Drawing::Point(28, 142);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(1250, 49);
			this->panel32->TabIndex = 4;
			// 
			// label61
			// 
			this->label61->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label61->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label61->Location = System::Drawing::Point(847, 3);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(93, 46);
			this->label61->TabIndex = 5;
			this->label61->Text = L"About";
			this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label61->Click += gcnew System::EventHandler(this, &Home::label61_Click);
			// 
			// label62
			// 
			this->label62->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label62->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label62->Location = System::Drawing::Point(686, 3);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(82, 46);
			this->label62->TabIndex = 4;
			this->label62->Text = L"Cart";
			this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label62->Click += gcnew System::EventHandler(this, &Home::label62_Click);
			// 
			// label63
			// 
			this->label63->BackColor = System::Drawing::Color::SteelBlue;
			this->label63->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label63->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label63->Location = System::Drawing::Point(449, 0);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(161, 49);
			this->label63->TabIndex = 3;
			this->label63->Text = L"Products";
			this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label63->Click += gcnew System::EventHandler(this, &Home::label63_Click);
			// 
			// label64
			// 
			this->label64->BackColor = System::Drawing::Color::Goldenrod;
			this->label64->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label64->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label64->Location = System::Drawing::Point(287, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(86, 49);
			this->label64->TabIndex = 2;
			this->label64->Text = L"Home";
			this->label64->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel33->Controls->Add(this->panel34);
			this->panel33->Controls->Add(this->panel35);
			this->panel33->Controls->Add(this->panel36);
			this->panel33->Location = System::Drawing::Point(28, 24);
			this->panel33->Margin = System::Windows::Forms::Padding(0);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(1250, 776);
			this->panel33->TabIndex = 3;
			// 
			// panel34
			// 
			this->panel34->Controls->Add(this->label58);
			this->panel34->Controls->Add(this->label59);
			this->panel34->Controls->Add(this->panel30);
			this->panel34->Location = System::Drawing::Point(-2, 169);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(1252, 607);
			this->panel34->TabIndex = 2;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::Color::Goldenrod;
			this->label58->Location = System::Drawing::Point(603, 433);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(263, 90);
			this->label58->TabIndex = 5;
			this->label58->Text = L"Market";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label59->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::Color::SteelBlue;
			this->label59->Location = System::Drawing::Point(346, 388);
			this->label59->Margin = System::Windows::Forms::Padding(0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(293, 135);
			this->label59->TabIndex = 4;
			this->label59->Text = L"FCIS";
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::SteelBlue;
			this->panel30->Controls->Add(this->label57);
			this->panel30->Controls->Add(this->label56);
			this->panel30->Controls->Add(this->label51);
			this->panel30->Controls->Add(this->label50);
			this->panel30->Controls->Add(this->button20);
			this->panel30->Location = System::Drawing::Point(53, 89);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(1142, 281);
			this->panel30->TabIndex = 1;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::Goldenrod;
			this->label57->Location = System::Drawing::Point(748, 96);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(115, 52);
			this->label57->TabIndex = 9;
			this->label57->Text = L"new \?";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label56->Location = System::Drawing::Point(288, 96);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(480, 52);
			this->label56->TabIndex = 8;
			this->label56->Text = L"do you want to see what is ";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::Color::Goldenrod;
			this->label51->Location = System::Drawing::Point(618, 23);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(49, 52);
			this->label51->TabIndex = 7;
			this->label51->Text = L"A";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label50->Location = System::Drawing::Point(432, 23);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(198, 52);
			this->label50->TabIndex = 6;
			this->label50->Text = L"Welcome, ";
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Goldenrod;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::SteelBlue;
			this->button20->Location = System::Drawing::Point(450, 197);
			this->button20->Margin = System::Windows::Forms::Padding(0);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(215, 49);
			this->button20->TabIndex = 5;
			this->button20->Text = L"Products";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Home::button20_Click);
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::Color::SteelBlue;
			this->panel35->Controls->Add(this->button17);
			this->panel35->Controls->Add(this->textBox22);
			this->panel35->Controls->Add(this->label65);
			this->panel35->Controls->Add(this->label66);
			this->panel35->Location = System::Drawing::Point(0, 55);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(1250, 61);
			this->panel35->TabIndex = 1;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Goldenrod;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(1045, 11);
			this->button17->Margin = System::Windows::Forms::Padding(0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(117, 36);
			this->button17->TabIndex = 3;
			this->button17->Text = L"Search";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Home::button17_Click);
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->Location = System::Drawing::Point(692, 11);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(354, 36);
			this->textBox22->TabIndex = 2;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::Goldenrod;
			this->label65->Location = System::Drawing::Point(153, 18);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(119, 40);
			this->label65->TabIndex = 1;
			this->label65->Text = L"Market";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label66->Location = System::Drawing::Point(24, -5);
			this->label66->Margin = System::Windows::Forms::Padding(0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(146, 67);
			this->label66->TabIndex = 0;
			this->label66->Text = L"FCIS";
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::Color::Goldenrod;
			this->panel36->Controls->Add(this->button18);
			this->panel36->Controls->Add(this->button19);
			this->panel36->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel36->Location = System::Drawing::Point(0, 0);
			this->panel36->Margin = System::Windows::Forms::Padding(0);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(1250, 171);
			this->panel36->TabIndex = 0;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::SteelBlue;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(864, 8);
			this->button18->Margin = System::Windows::Forms::Padding(0);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(124, 40);
			this->button18->TabIndex = 5;
			this->button18->Text = L"Logout";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Green;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(1062, 8);
			this->button19->Margin = System::Windows::Forms::Padding(0);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(124, 40);
			this->button19->TabIndex = 2;
			this->button19->Text = L"Sell";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Home::button19_Click);
			// 
			// panel37
			// 
			this->panel37->Controls->Add(this->label74);
			this->panel37->Controls->Add(this->panel40);
			this->panel37->Controls->Add(this->panel41);
			this->panel37->Location = System::Drawing::Point(0, 0);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(1302, 825);
			this->panel37->TabIndex = 15;
			// 
			// label74
			// 
			this->label74->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(1277, 0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(25, 35);
			this->label74->TabIndex = 13;
			this->label74->Text = L"x";
			this->label74->Click += gcnew System::EventHandler(this, &Home::label74_Click);
			// 
			// panel40
			// 
			this->panel40->BackColor = System::Drawing::Color::SteelBlue;
			this->panel40->Controls->Add(this->button21);
			this->panel40->Controls->Add(this->label75);
			this->panel40->Controls->Add(this->label76);
			this->panel40->Controls->Add(this->label77);
			this->panel40->Controls->Add(this->label78);
			this->panel40->Location = System::Drawing::Point(28, 142);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(1250, 49);
			this->panel40->TabIndex = 4;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Green;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(1056, 4);
			this->button21->Margin = System::Windows::Forms::Padding(0);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(161, 40);
			this->button21->TabIndex = 6;
			this->button21->Text = L"checkout";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Home::button21_Click);
			// 
			// label75
			// 
			this->label75->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label75->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label75->Location = System::Drawing::Point(847, 3);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(93, 46);
			this->label75->TabIndex = 5;
			this->label75->Text = L"About";
			this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label75->Click += gcnew System::EventHandler(this, &Home::label75_Click);
			// 
			// label76
			// 
			this->label76->BackColor = System::Drawing::Color::Goldenrod;
			this->label76->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label76->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label76->Location = System::Drawing::Point(686, 0);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(82, 49);
			this->label76->TabIndex = 4;
			this->label76->Text = L"Cart";
			this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label76->Click += gcnew System::EventHandler(this, &Home::label76_Click);
			// 
			// label77
			// 
			this->label77->BackColor = System::Drawing::Color::SteelBlue;
			this->label77->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label77->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label77->Location = System::Drawing::Point(449, 0);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(161, 49);
			this->label77->TabIndex = 3;
			this->label77->Text = L"Products";
			this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label77->Click += gcnew System::EventHandler(this, &Home::label77_Click);
			// 
			// label78
			// 
			this->label78->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label78->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label78->Location = System::Drawing::Point(287, 3);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(86, 46);
			this->label78->TabIndex = 2;
			this->label78->Text = L"Home";
			this->label78->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label78->Click += gcnew System::EventHandler(this, &Home::label78_Click);
			// 
			// panel41
			// 
			this->panel41->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel41->Controls->Add(this->panel42);
			this->panel41->Controls->Add(this->panel43);
			this->panel41->Controls->Add(this->panel44);
			this->panel41->Location = System::Drawing::Point(28, 24);
			this->panel41->Margin = System::Windows::Forms::Padding(0);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(1250, 776);
			this->panel41->TabIndex = 3;
			// 
			// panel42
			// 
			this->panel42->Controls->Add(this->panel38);
			this->panel42->Controls->Add(this->panel45);
			this->panel42->Controls->Add(this->dataGridView3);
			this->panel42->Location = System::Drawing::Point(-2, 169);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(1252, 607);
			this->panel42->TabIndex = 2;
			// 
			// panel38
			// 
			this->panel38->BackColor = System::Drawing::Color::SteelBlue;
			this->panel38->Controls->Add(this->pass);
			this->panel38->Controls->Add(this->button29);
			this->panel38->Controls->Add(this->label86);
			this->panel38->Controls->Add(this->CartBChange);
			this->panel38->Controls->Add(this->incart);
			this->panel38->Controls->Add(this->Avl);
			this->panel38->Controls->Add(this->sold);
			this->panel38->Controls->Add(this->cat);
			this->panel38->Controls->Add(this->name);
			this->panel38->Controls->Add(this->label94);
			this->panel38->Controls->Add(this->label93);
			this->panel38->Controls->Add(this->label91);
			this->panel38->Controls->Add(this->label92);
			this->panel38->Controls->Add(this->label90);
			this->panel38->Controls->Add(this->label87);
			this->panel38->Controls->Add(this->button26);
			this->panel38->Controls->Add(this->textBox7);
			this->panel38->Controls->Add(this->panel39);
			this->panel38->Controls->Add(this->button25);
			this->panel38->Controls->Add(this->label88);
			this->panel38->Controls->Add(this->label89);
			this->panel38->Location = System::Drawing::Point(316, 211);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(655, 201);
			this->panel38->TabIndex = 8;
			this->panel38->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel38_Paint);
			// 
			// pass
			// 
			this->pass->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::Goldenrod;
			this->pass->Location = System::Drawing::Point(3, 2);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(10, 31);
			this->pass->TabIndex = 31;
			this->pass->Text = L"0";
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Green;
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button29->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(233, 136);
			this->button29->Margin = System::Windows::Forms::Padding(0);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(190, 58);
			this->button29->TabIndex = 30;
			this->button29->Text = L"Buy";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &Home::button29_Click);
			// 
			// label86
			// 
			this->label86->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label86->Location = System::Drawing::Point(630, 0);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(25, 35);
			this->label86->TabIndex = 29;
			this->label86->Text = L"x";
			this->label86->Click += gcnew System::EventHandler(this, &Home::label86_Click);
			// 
			// CartBChange
			// 
			this->CartBChange->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CartBChange->ForeColor = System::Drawing::Color::Goldenrod;
			this->CartBChange->Location = System::Drawing::Point(269, 2);
			this->CartBChange->Name = L"CartBChange";
			this->CartBChange->Size = System::Drawing::Size(10, 31);
			this->CartBChange->TabIndex = 28;
			this->CartBChange->Text = L"0";
			// 
			// incart
			// 
			this->incart->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->incart->ForeColor = System::Drawing::Color::Goldenrod;
			this->incart->Location = System::Drawing::Point(211, 89);
			this->incart->Name = L"incart";
			this->incart->Size = System::Drawing::Size(10, 31);
			this->incart->TabIndex = 27;
			this->incart->Text = L"0";
			// 
			// Avl
			// 
			this->Avl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Avl->ForeColor = System::Drawing::Color::Goldenrod;
			this->Avl->Location = System::Drawing::Point(164, 89);
			this->Avl->Name = L"Avl";
			this->Avl->Size = System::Drawing::Size(10, 31);
			this->Avl->TabIndex = 26;
			this->Avl->Text = L"0";
			// 
			// sold
			// 
			this->sold->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sold->ForeColor = System::Drawing::Color::Goldenrod;
			this->sold->Location = System::Drawing::Point(111, 89);
			this->sold->Name = L"sold";
			this->sold->Size = System::Drawing::Size(10, 31);
			this->sold->TabIndex = 25;
			this->sold->Text = L"0";
			// 
			// cat
			// 
			this->cat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cat->ForeColor = System::Drawing::Color::Goldenrod;
			this->cat->Location = System::Drawing::Point(47, 88);
			this->cat->Name = L"cat";
			this->cat->Size = System::Drawing::Size(10, 31);
			this->cat->TabIndex = 24;
			this->cat->Text = L"0";
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::Goldenrod;
			this->name->Location = System::Drawing::Point(11, 85);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(10, 31);
			this->name->TabIndex = 23;
			this->name->Text = L"0";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label94->ForeColor = System::Drawing::Color::SteelBlue;
			this->label94->Location = System::Drawing::Point(435, 78);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(198, 31);
			this->label94->TabIndex = 22;
			this->label94->Text = L".Invalid Quantity";
			// 
			// label93
			// 
			this->label93->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label93->ForeColor = System::Drawing::Color::Goldenrod;
			this->label93->Location = System::Drawing::Point(322, 31);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(10, 31);
			this->label93->TabIndex = 19;
			this->label93->Text = L"0";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->ForeColor = System::Drawing::Color::Goldenrod;
			this->label91->Location = System::Drawing::Point(150, 26);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(28, 31);
			this->label91->TabIndex = 18;
			this->label91->Text = L"0";
			// 
			// label92
			// 
			this->label92->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::Color::Goldenrod;
			this->label92->Location = System::Drawing::Point(60, 20);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(101, 48);
			this->label92->TabIndex = 17;
			this->label92->Text = L"price:";
			// 
			// label90
			// 
			this->label90->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->ForeColor = System::Drawing::Color::Goldenrod;
			this->label90->Location = System::Drawing::Point(303, 7);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(10, 31);
			this->label90->TabIndex = 16;
			this->label90->Text = L"0";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->ForeColor = System::Drawing::Color::Goldenrod;
			this->label87->Location = System::Drawing::Point(309, 78);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(28, 31);
			this->label87->TabIndex = 15;
			this->label87->Text = L"0";
			this->label87->Click += gcnew System::EventHandler(this, &Home::label87_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Red;
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(440, 136);
			this->button26->Margin = System::Windows::Forms::Padding(0);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(190, 58);
			this->button26->TabIndex = 14;
			this->button26->Text = L"Delet";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Home::button26_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::SteelBlue;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox7->Location = System::Drawing::Point(465, 24);
			this->textBox7->Margin = System::Windows::Forms::Padding(0);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(143, 33);
			this->textBox7->TabIndex = 11;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Home::textBox7_TextChanged);
			// 
			// panel39
			// 
			this->panel39->BackColor = System::Drawing::Color::Goldenrod;
			this->panel39->Location = System::Drawing::Point(0, 122);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(655, 10);
			this->panel39->TabIndex = 8;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Goldenrod;
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(16, 136);
			this->button25->Margin = System::Windows::Forms::Padding(0);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(190, 58);
			this->button25->TabIndex = 6;
			this->button25->Text = L"Edit";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Home::button25_Click);
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->ForeColor = System::Drawing::Color::Goldenrod;
			this->label88->Location = System::Drawing::Point(331, 20);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(133, 36);
			this->label88->TabIndex = 3;
			this->label88->Text = L"Quantity:";
			// 
			// label89
			// 
			this->label89->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->ForeColor = System::Drawing::Color::Goldenrod;
			this->label89->Location = System::Drawing::Point(228, 72);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(128, 48);
			this->label89->TabIndex = 2;
			this->label89->Text = L"Total:";
			// 
			// panel45
			// 
			this->panel45->BackColor = System::Drawing::Color::Goldenrod;
			this->panel45->Controls->Add(this->label95);
			this->panel45->Controls->Add(this->button27);
			this->panel45->Controls->Add(this->TotalCost);
			this->panel45->Controls->Add(this->label85);
			this->panel45->Location = System::Drawing::Point(352, 167);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(579, 280);
			this->panel45->TabIndex = 9;
			this->panel45->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel45_Paint);
			// 
			// label95
			// 
			this->label95->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->Location = System::Drawing::Point(554, 0);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(25, 35);
			this->label95->TabIndex = 30;
			this->label95->Text = L"x";
			this->label95->Click += gcnew System::EventHandler(this, &Home::label95_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Green;
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(159, 201);
			this->button27->Margin = System::Windows::Forms::Padding(0);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(249, 62);
			this->button27->TabIndex = 7;
			this->button27->Text = L"Confirm payment";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Home::button27_Click);
			// 
			// TotalCost
			// 
			this->TotalCost->AutoSize = true;
			this->TotalCost->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalCost->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TotalCost->Location = System::Drawing::Point(290, 56);
			this->TotalCost->Name = L"TotalCost";
			this->TotalCost->Size = System::Drawing::Size(0, 67);
			this->TotalCost->TabIndex = 1;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label85->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label85->Location = System::Drawing::Point(122, 49);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(143, 67);
			this->label85->TabIndex = 0;
			this->label85->Text = L"Cost:";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToOrderColumns = true;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::Goldenrod;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView3->ColumnHeadersHeight = 35;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->Column16, this->dataGridViewTextBoxColumn10, this->Column15,
					this->Column17, this->dataGridViewTextBoxColumn12, this->Column13, this->Column14, this->Column18
			});
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->EnableHeadersVisualStyles = false;
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(0);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 25;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::DodgerBlue;
			this->dataGridView3->RowsDefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridView3->RowTemplate->Height = 25;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView3->Size = System::Drawing::Size(1252, 607);
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->DoubleClick += gcnew System::EventHandler(this, &Home::dataGridView3_DoubleClick);
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn8->HeaderText = L"Category";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn9->FillWeight = 50;
			this->dataGridViewTextBoxColumn9->HeaderText = L"Price";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"sold";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Visible = false;
			this->Column16->Width = 125;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn10->FillWeight = 30;
			this->dataGridViewTextBoxColumn10->HeaderText = L"Available";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			// 
			// Column15
			// 
			this->Column15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column15->FillWeight = 50;
			this->Column15->HeaderText = L"Need";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			// 
			// Column17
			// 
			this->Column17->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column17->FillWeight = 50;
			this->Column17->HeaderText = L"Total";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			this->Column17->Width = 81;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn12->FillWeight = 50;
			this->dataGridViewTextBoxColumn12->HeaderText = L"Rate";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"SellerId";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->Visible = false;
			this->Column13->Width = 125;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"ProductId";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->Visible = false;
			this->Column14->Width = 125;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"incart";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			this->Column18->Visible = false;
			this->Column18->Width = 125;
			// 
			// panel43
			// 
			this->panel43->BackColor = System::Drawing::Color::SteelBlue;
			this->panel43->Controls->Add(this->label67);
			this->panel43->Controls->Add(this->button22);
			this->panel43->Controls->Add(this->textBox23);
			this->panel43->Controls->Add(this->label79);
			this->panel43->Controls->Add(this->label80);
			this->panel43->Location = System::Drawing::Point(0, 55);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(1250, 61);
			this->panel43->TabIndex = 1;
			// 
			// label67
			// 
			this->label67->BackColor = System::Drawing::Color::Goldenrod;
			this->label67->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::SteelBlue;
			this->label67->Location = System::Drawing::Point(1155, 15);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(82, 36);
			this->label67->TabIndex = 5;
			this->label67->Text = L"Cart";
			this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Goldenrod;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(1006, 15);
			this->button22->Margin = System::Windows::Forms::Padding(0);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(117, 36);
			this->button22->TabIndex = 3;
			this->button22->Text = L"Search";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Home::button22_Click);
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(653, 15);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(354, 36);
			this->textBox23->TabIndex = 2;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->ForeColor = System::Drawing::Color::Goldenrod;
			this->label79->Location = System::Drawing::Point(153, 18);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(119, 40);
			this->label79->TabIndex = 1;
			this->label79->Text = L"Market";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label80->Location = System::Drawing::Point(24, -5);
			this->label80->Margin = System::Windows::Forms::Padding(0);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(146, 67);
			this->label80->TabIndex = 0;
			this->label80->Text = L"FCIS";
			// 
			// panel44
			// 
			this->panel44->BackColor = System::Drawing::Color::Goldenrod;
			this->panel44->Controls->Add(this->button23);
			this->panel44->Controls->Add(this->button24);
			this->panel44->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel44->Location = System::Drawing::Point(0, 0);
			this->panel44->Margin = System::Windows::Forms::Padding(0);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(1250, 171);
			this->panel44->TabIndex = 0;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::SteelBlue;
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(864, 8);
			this->button23->Margin = System::Windows::Forms::Padding(0);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(124, 40);
			this->button23->TabIndex = 5;
			this->button23->Text = L"Logout";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Green;
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(1062, 8);
			this->button24->Margin = System::Windows::Forms::Padding(0);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(124, 40);
			this->button24->TabIndex = 2;
			this->button24->Text = L"Sell";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Home::button24_Click);
			// 
			// panel31
			// 
			this->panel31->Controls->Add(this->label97);
			this->panel31->Controls->Add(this->panel46);
			this->panel31->Controls->Add(this->panel47);
			this->panel31->Location = System::Drawing::Point(0, 0);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(1302, 825);
			this->panel31->TabIndex = 15;
			// 
			// label97
			// 
			this->label97->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label97->Location = System::Drawing::Point(1277, 0);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(25, 35);
			this->label97->TabIndex = 13;
			this->label97->Text = L"x";
			this->label97->Click += gcnew System::EventHandler(this, &Home::label97_Click);
			// 
			// panel46
			// 
			this->panel46->BackColor = System::Drawing::Color::SteelBlue;
			this->panel46->Controls->Add(this->label98);
			this->panel46->Controls->Add(this->label99);
			this->panel46->Controls->Add(this->label100);
			this->panel46->Location = System::Drawing::Point(28, 142);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(1250, 49);
			this->panel46->TabIndex = 4;
			// 
			// label98
			// 
			this->label98->BackColor = System::Drawing::Color::Goldenrod;
			this->label98->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label98->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label98->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label98->Location = System::Drawing::Point(847, -6);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(93, 55);
			this->label98->TabIndex = 5;
			this->label98->Text = L"About";
			this->label98->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label98->Click += gcnew System::EventHandler(this, &Home::label98_Click);
			// 
			// label99
			// 
			this->label99->BackColor = System::Drawing::Color::SteelBlue;
			this->label99->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label99->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label99->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label99->Location = System::Drawing::Point(560, 0);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(161, 49);
			this->label99->TabIndex = 3;
			this->label99->Text = L"My Product";
			this->label99->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label99->Click += gcnew System::EventHandler(this, &Home::label99_Click);
			// 
			// label100
			// 
			this->label100->BackColor = System::Drawing::Color::SteelBlue;
			this->label100->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label100->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label100->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label100->Location = System::Drawing::Point(357, 0);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(86, 49);
			this->label100->TabIndex = 2;
			this->label100->Text = L"Home";
			this->label100->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label100->Click += gcnew System::EventHandler(this, &Home::label100_Click);
			// 
			// panel47
			// 
			this->panel47->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel47->Controls->Add(this->panel48);
			this->panel47->Controls->Add(this->panel55);
			this->panel47->Controls->Add(this->panel56);
			this->panel47->Location = System::Drawing::Point(28, 24);
			this->panel47->Margin = System::Windows::Forms::Padding(0);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(1250, 776);
			this->panel47->TabIndex = 3;
			// 
			// panel48
			// 
			this->panel48->AutoScroll = true;
			this->panel48->Controls->Add(this->pictureBox1);
			this->panel48->Location = System::Drawing::Point(-2, 169);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(1252, 607);
			this->panel48->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1233, 5596);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel55
			// 
			this->panel55->BackColor = System::Drawing::Color::SteelBlue;
			this->panel55->Controls->Add(this->label118);
			this->panel55->Controls->Add(this->label119);
			this->panel55->Location = System::Drawing::Point(0, 55);
			this->panel55->Name = L"panel55";
			this->panel55->Size = System::Drawing::Size(1250, 61);
			this->panel55->TabIndex = 1;
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label118->ForeColor = System::Drawing::Color::Goldenrod;
			this->label118->Location = System::Drawing::Point(153, 18);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(119, 40);
			this->label118->TabIndex = 1;
			this->label118->Text = L"Market";
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label119->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label119->Location = System::Drawing::Point(24, -5);
			this->label119->Margin = System::Windows::Forms::Padding(0);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(146, 67);
			this->label119->TabIndex = 0;
			this->label119->Text = L"FCIS";
			// 
			// panel56
			// 
			this->panel56->BackColor = System::Drawing::Color::Goldenrod;
			this->panel56->Controls->Add(this->button34);
			this->panel56->Controls->Add(this->button35);
			this->panel56->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel56->Location = System::Drawing::Point(0, 0);
			this->panel56->Margin = System::Windows::Forms::Padding(0);
			this->panel56->Name = L"panel56";
			this->panel56->Size = System::Drawing::Size(1250, 171);
			this->panel56->TabIndex = 0;
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::SteelBlue;
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::Color::White;
			this->button34->Location = System::Drawing::Point(886, 8);
			this->button34->Margin = System::Windows::Forms::Padding(0);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(124, 40);
			this->button34->TabIndex = 3;
			this->button34->Text = L"Logout";
			this->button34->UseVisualStyleBackColor = false;
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Green;
			this->button35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::Color::White;
			this->button35->Location = System::Drawing::Point(1062, 8);
			this->button35->Margin = System::Windows::Forms::Padding(0);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(124, 40);
			this->button35->TabIndex = 2;
			this->button35->Text = L"Buy";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Home::button35_Click);
			// 
			// panel49
			// 
			this->panel49->Controls->Add(this->label101);
			this->panel49->Controls->Add(this->panel50);
			this->panel49->Controls->Add(this->panel51);
			this->panel49->Location = System::Drawing::Point(0, 0);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(1302, 825);
			this->panel49->TabIndex = 16;
			// 
			// label101
			// 
			this->label101->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label101->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label101->Location = System::Drawing::Point(1277, 0);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(25, 35);
			this->label101->TabIndex = 13;
			this->label101->Text = L"x";
			this->label101->Click += gcnew System::EventHandler(this, &Home::label101_Click);
			// 
			// panel50
			// 
			this->panel50->BackColor = System::Drawing::Color::SteelBlue;
			this->panel50->Controls->Add(this->label102);
			this->panel50->Controls->Add(this->label103);
			this->panel50->Controls->Add(this->label104);
			this->panel50->Controls->Add(this->label105);
			this->panel50->Location = System::Drawing::Point(28, 142);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(1250, 49);
			this->panel50->TabIndex = 4;
			// 
			// label102
			// 
			this->label102->BackColor = System::Drawing::Color::Goldenrod;
			this->label102->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label102->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label102->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label102->Location = System::Drawing::Point(847, -7);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(93, 57);
			this->label102->TabIndex = 5;
			this->label102->Text = L"About";
			this->label102->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label102->Click += gcnew System::EventHandler(this, &Home::label102_Click);
			// 
			// label103
			// 
			this->label103->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label103->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label103->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label103->Location = System::Drawing::Point(686, 3);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(82, 46);
			this->label103->TabIndex = 4;
			this->label103->Text = L"Cart";
			this->label103->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label103->Click += gcnew System::EventHandler(this, &Home::label103_Click);
			// 
			// label104
			// 
			this->label104->BackColor = System::Drawing::Color::SteelBlue;
			this->label104->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label104->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label104->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label104->Location = System::Drawing::Point(449, 0);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(161, 49);
			this->label104->TabIndex = 3;
			this->label104->Text = L"Products";
			this->label104->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label104->Click += gcnew System::EventHandler(this, &Home::label104_Click);
			// 
			// label105
			// 
			this->label105->BackColor = System::Drawing::Color::SteelBlue;
			this->label105->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label105->Font = (gcnew System::Drawing::Font(L"Ink Free", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label105->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label105->Location = System::Drawing::Point(287, 0);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(86, 49);
			this->label105->TabIndex = 2;
			this->label105->Text = L"Home";
			this->label105->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label105->Click += gcnew System::EventHandler(this, &Home::label105_Click);
			// 
			// panel51
			// 
			this->panel51->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel51->Controls->Add(this->panel52);
			this->panel51->Controls->Add(this->panel54);
			this->panel51->Controls->Add(this->panel57);
			this->panel51->Location = System::Drawing::Point(28, 24);
			this->panel51->Margin = System::Windows::Forms::Padding(0);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(1250, 776);
			this->panel51->TabIndex = 3;
			// 
			// panel52
			// 
			this->panel52->AutoScroll = true;
			this->panel52->Controls->Add(this->pictureBox2);
			this->panel52->Location = System::Drawing::Point(-2, 169);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(1252, 607);
			this->panel52->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1233, 5596);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel54
			// 
			this->panel54->BackColor = System::Drawing::Color::SteelBlue;
			this->panel54->Controls->Add(this->label112);
			this->panel54->Controls->Add(this->label113);
			this->panel54->Location = System::Drawing::Point(0, 55);
			this->panel54->Name = L"panel54";
			this->panel54->Size = System::Drawing::Size(1250, 61);
			this->panel54->TabIndex = 1;
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label112->ForeColor = System::Drawing::Color::Goldenrod;
			this->label112->Location = System::Drawing::Point(152, 17);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(119, 40);
			this->label112->TabIndex = 1;
			this->label112->Text = L"Market";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label113->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label113->Location = System::Drawing::Point(23, -6);
			this->label113->Margin = System::Windows::Forms::Padding(0);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(146, 67);
			this->label113->TabIndex = 0;
			this->label113->Text = L"FCIS";
			// 
			// panel57
			// 
			this->panel57->BackColor = System::Drawing::Color::Goldenrod;
			this->panel57->Controls->Add(this->button36);
			this->panel57->Controls->Add(this->button37);
			this->panel57->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel57->Location = System::Drawing::Point(0, 0);
			this->panel57->Margin = System::Windows::Forms::Padding(0);
			this->panel57->Name = L"panel57";
			this->panel57->Size = System::Drawing::Size(1250, 171);
			this->panel57->TabIndex = 0;
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::SteelBlue;
			this->button36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::Color::White;
			this->button36->Location = System::Drawing::Point(864, 8);
			this->button36->Margin = System::Windows::Forms::Padding(0);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(124, 40);
			this->button36->TabIndex = 5;
			this->button36->Text = L"Logout";
			this->button36->UseVisualStyleBackColor = false;
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Green;
			this->button37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::White;
			this->button37->Location = System::Drawing::Point(1062, 8);
			this->button37->Margin = System::Windows::Forms::Padding(0);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(124, 40);
			this->button37->TabIndex = 2;
			this->button37->Text = L"Sell";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &Home::button37_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1302, 824);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel37);
			this->Controls->Add(this->panel29);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel49);
			this->Controls->Add(this->panel31);
			this->Controls->Add(this->panel5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->panel7->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->RatePanal->ResumeLayout(false);
			this->RatePanal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel18->ResumeLayout(false);
			this->panel19->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel29->ResumeLayout(false);
			this->panel32->ResumeLayout(false);
			this->panel33->ResumeLayout(false);
			this->panel34->ResumeLayout(false);
			this->panel34->PerformLayout();
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			this->panel35->ResumeLayout(false);
			this->panel35->PerformLayout();
			this->panel36->ResumeLayout(false);
			this->panel37->ResumeLayout(false);
			this->panel40->ResumeLayout(false);
			this->panel41->ResumeLayout(false);
			this->panel42->ResumeLayout(false);
			this->panel38->ResumeLayout(false);
			this->panel38->PerformLayout();
			this->panel45->ResumeLayout(false);
			this->panel45->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel43->ResumeLayout(false);
			this->panel43->PerformLayout();
			this->panel44->ResumeLayout(false);
			this->panel31->ResumeLayout(false);
			this->panel46->ResumeLayout(false);
			this->panel47->ResumeLayout(false);
			this->panel48->ResumeLayout(false);
			this->panel48->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel55->ResumeLayout(false);
			this->panel55->PerformLayout();
			this->panel56->ResumeLayout(false);
			this->panel49->ResumeLayout(false);
			this->panel50->ResumeLayout(false);
			this->panel51->ResumeLayout(false);
			this->panel52->ResumeLayout(false);
			this->panel52->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel54->ResumeLayout(false);
			this->panel54->PerformLayout();
			this->panel57->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//string name = person->getSellerEmail();
			//System::String^ Name = msclr::interop::marshal_as<System::String^>(name);
			//label2->Text = Name;
		private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
			market->binaryTree.LoadDataFromFile("AllProduct.text");
			person->LoadDataFromFileCustomer("CustomerCart.text",*market);
			person->LoadDataFromFileSeller("AllProduct.text",*market);
			market->binaryTree.loadRatesFromData("Rates.text");
			//market->binaryTree.LoadDataFromFile("AllProduct.text");
			if (person->choseCusomerOrSeller == 3) {
				panel29->Show();
				panel17->Hide();
			}
			else {
				panel29->Hide();
				panel17->Show();
				
			}
			panel1->Hide();
			panel5->Hide();
			panel37->Hide();
			panel31->Hide();
			panel49->Hide();

			panel38->Hide();
			panel45->Hide();
			System::String^ Name = msclr::interop::marshal_as<System::String^>(person->getCustomerName());
			label39->Text = Name;
			label41->Text = Name;
			//label49->Text = Name;
			label51->Text = Name;

			
			//
			

			list<Node*>li = person->getlist();
			if (li.size() > 0)
			{
				for (auto& ptr : li)
				{
					if (ptr != NULL)
					{

						DataGridViewRow^ newRow = gcnew DataGridViewRow();

						DataGridViewTextBoxCell^ nameCell = gcnew DataGridViewTextBoxCell();
						System::String^ Name = msclr::interop::marshal_as<System::String^>(ptr->val.getName());
						nameCell->Value = Name;
						newRow->Cells->Add(nameCell);

						DataGridViewTextBoxCell^ CategoryCell = gcnew DataGridViewTextBoxCell();
						System::String^ Category = msclr::interop::marshal_as<System::String^>(ptr->val.getCategory());
						CategoryCell->Value = Category;
						newRow->Cells->Add(CategoryCell);

						DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
						System::String^ price = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getPrice()));
						priceCell->Value = price;
						newRow->Cells->Add(priceCell);

						DataGridViewTextBoxCell^ SoldQuantityCell = gcnew DataGridViewTextBoxCell();
						System::String^ SoldQuantity = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getSoldQuantity()));
						SoldQuantityCell->Value = SoldQuantity;
						newRow->Cells->Add(SoldQuantityCell);

						DataGridViewTextBoxCell^ QuantityCell = gcnew DataGridViewTextBoxCell();
						System::String^ Quantity = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getAalQuantity()));
						QuantityCell->Value = Quantity;
						newRow->Cells->Add(QuantityCell);

						DataGridViewTextBoxCell^ InCartQuantityCell = gcnew DataGridViewTextBoxCell();
						System::String^ InCartQuantity = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getinCartQuantity()));
						InCartQuantityCell->Value = InCartQuantity;
						newRow->Cells->Add(InCartQuantityCell);
						if (ptr->val.productRate > 5) {
							DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
							System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(0));
							rate->Value = rates;
							newRow->Cells->Add(rate);
						}
						else {
							DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
							System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.productRate));
							rate->Value = rates;
							newRow->Cells->Add(rate);
						}

						DataGridViewTextBoxCell^ s = gcnew DataGridViewTextBoxCell();
						System::String^ sallerid = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getSellerID()));
						s->Value = sallerid;
						newRow->Cells->Add(s);

						DataGridViewTextBoxCell^ productId = gcnew DataGridViewTextBoxCell();
						System::String^ productIds = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getID()));
						productId->Value = productIds;
						newRow->Cells->Add(productId);

						//need quantity in card & sells.

						dataGridView1->Rows->Add(newRow);
					}
				}
			}
			
			queue<Node*>q;
			q.push(market->binaryTree.getroot());
			while (!q.empty()) {
				Node* temp = q.front();
				q.pop();
				//temp->val.getName()

				Searching::products.push_back(make_pair(temp->val.getName() + temp->val.getCategory(), temp->val.getID()));

				DataGridViewRow^ newRow2 = gcnew DataGridViewRow();

				DataGridViewTextBoxCell^ nameCell = gcnew DataGridViewTextBoxCell();
				System::String^ Name = msclr::interop::marshal_as<System::String^>(temp->val.getName());
				nameCell->Value = Name;
				newRow2->Cells->Add(nameCell);

				DataGridViewTextBoxCell^ CategoryCell = gcnew DataGridViewTextBoxCell();
				System::String^ Category = msclr::interop::marshal_as<System::String^>(temp->val.getCategory());
				CategoryCell->Value = Category;
				newRow2->Cells->Add(CategoryCell);

				DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
				System::String^ price = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getPrice()));
				priceCell->Value = price;
				newRow2->Cells->Add(priceCell);

				DataGridViewTextBoxCell^ SoldQuantityCell = gcnew DataGridViewTextBoxCell();
				System::String^ SoldQuantity = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getSoldQuantity()));
				SoldQuantityCell->Value = SoldQuantity;
				newRow2->Cells->Add(SoldQuantityCell);

				DataGridViewTextBoxCell^ QuantityCell = gcnew DataGridViewTextBoxCell();
				System::String^ Quantity = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getAalQuantity()));
				QuantityCell->Value = Quantity;
				newRow2->Cells->Add(QuantityCell);

				DataGridViewTextBoxCell^ InCartQuantityCell = gcnew DataGridViewTextBoxCell();
				System::String^ InCartQuantity = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getinCartQuantity()));
				InCartQuantityCell->Value = InCartQuantity;
				newRow2->Cells->Add(InCartQuantityCell);
				if (temp->val.productRate > 5) {
					DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
					System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(0));
					rate->Value = rates;
					newRow2->Cells->Add(rate);
				}
				else {
					DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
					System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(temp->val.productRate));
					rate->Value = rates;
					newRow2->Cells->Add(rate);
				}
				DataGridViewTextBoxCell^ s = gcnew DataGridViewTextBoxCell();
				System::String^ sallerid = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getSellerID()));
				s->Value = sallerid;
				newRow2->Cells->Add(s);

				DataGridViewTextBoxCell^ productId = gcnew DataGridViewTextBoxCell();
				System::String^ productIds = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getID()));
				productId->Value = productIds;
				newRow2->Cells->Add(productId);

				//need quantity in card & sells.

				dataGridView2->Rows->Add(newRow2);

				if (temp->left && temp->right) {
					q.push(temp->left);
					q.push(temp->right);
				}
				else if (temp->left && !temp->right) {
					q.push(temp->left);
				}
				else if (!temp->left && temp->right) {
					q.push(temp->right);
				}
			}

			list<pair<Node*, int>>cart=person->getCart();
			int totalCart = 0;
			list<pair<Node*, int>>::iterator it1;
			for (it1 = cart.begin(); it1 != cart.end(); it1++) {

				DataGridViewRow^ newRow2 = gcnew DataGridViewRow();

				DataGridViewTextBoxCell^ nameCell = gcnew DataGridViewTextBoxCell();
				System::String^ Name = msclr::interop::marshal_as<System::String^>(it1->first->val.getName());
				nameCell->Value = Name;
				newRow2->Cells->Add(nameCell);

				DataGridViewTextBoxCell^ CategoryCell = gcnew DataGridViewTextBoxCell();
				System::String^ Category = msclr::interop::marshal_as<System::String^>(it1->first->val.getCategory());
				CategoryCell->Value = Category;
				newRow2->Cells->Add(CategoryCell);

				DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
				System::String^ price = msclr::interop::marshal_as<System::String^>(to_string(it1->first->val.getPrice()));
				priceCell->Value = price;
				newRow2->Cells->Add(priceCell);

				DataGridViewTextBoxCell^ SoldQuantityCell = gcnew DataGridViewTextBoxCell();
				System::String^ SoldQuantity = msclr::interop::marshal_as<System::String^>(to_string(it1->first->val.getSoldQuantity()));
				SoldQuantityCell->Value = SoldQuantity;
				newRow2->Cells->Add(SoldQuantityCell);

				DataGridViewTextBoxCell^ QuantityCell = gcnew DataGridViewTextBoxCell();
				System::String^ Quantity = msclr::interop::marshal_as<System::String^>(to_string(it1->first->val.getAalQuantity()));
				QuantityCell->Value = Quantity;
				newRow2->Cells->Add(QuantityCell);

				DataGridViewTextBoxCell^ InCartQuantityCell = gcnew DataGridViewTextBoxCell();
				System::String^ InCartQuantity = msclr::interop::marshal_as<System::String^>(to_string(it1->second));
				InCartQuantityCell->Value = InCartQuantity;
				newRow2->Cells->Add(InCartQuantityCell);

				DataGridViewTextBoxCell^ Total = gcnew DataGridViewTextBoxCell();
				System::String^ TotalPrice = msclr::interop::marshal_as<System::String^>(to_string(it1->first->val.getinCartQuantity()* it1->first->val.getPrice()));
				Total->Value = TotalPrice;
				newRow2->Cells->Add(Total);
				totalCart += (it1->first->val.getinCartQuantity() * it1->first->val.getPrice());

				if (it1->first->val.productRate>5) {
					DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
					System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(0));
					rate->Value = rates;
					newRow2->Cells->Add(rate);
				}
				else {
					DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
					System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(it1->first->val.productRate));
					rate->Value = rates;
					newRow2->Cells->Add(rate);
				}
				DataGridViewTextBoxCell^ s = gcnew DataGridViewTextBoxCell();
				System::String^ sallerid = msclr::interop::marshal_as<System::String^>(to_string(it1->first->val.getSellerID()));
				s->Value = sallerid;
				newRow2->Cells->Add(s);

				DataGridViewTextBoxCell^ productId = gcnew DataGridViewTextBoxCell();
				System::String^ productIds = msclr::interop::marshal_as<System::String^>(to_string(it1->first->val.getID()));
				productId->Value = productIds;
				newRow2->Cells->Add(productId);

				DataGridViewTextBoxCell^ incartCell = gcnew DataGridViewTextBoxCell();
				System::String^ incart = msclr::interop::marshal_as<System::String^>(to_string(it1->first->val.getinCartQuantity()));
				incartCell->Value = incart;
				newRow2->Cells->Add(incartCell);

				//need quantity in card & sells.
				label81->ForeColor = Color::DarkRed;
				dataGridView3->Rows->Add(newRow2);

			}
			System::String^ totalcost = msclr::interop::marshal_as<System::String^>(to_string(totalCart));
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView1->Rows[i]->Height = 50;
			}
			for (int i = 0; i < dataGridView2->RowCount; i++) {
				dataGridView2->Rows[i]->Height = 50;
			}
			for (int i = 0; i < dataGridView3->RowCount; i++) {
				dataGridView3->Rows[i]->Height = 50;
			}
			
			//label86->Text = totalcost;
			panel1->Hide();
			panel5->Hide();
		}
		
	
		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
			panel5->Hide();
			panel29->Show();
			//Product product(1, "amr", "aa", 2, 1, 2);
			//Product product1(11, "amr123", "aa123", 12, 1,12);
			//person->addProduct(product, *market);
			//person->addProduct(product1, *market);
			
		}
		private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
			market->binaryTree.saveRatesInFile("Rates.text");
			market->binaryTree.SaveDataInFile("AllProduct.text");
			person->SaveDataInFileCustomer("CustomerCart.text");
			Application::Exit();
		}
		private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			textBox2->Text = this->dataGridView1->CurrentRow->Cells[0]->Value->ToString();
			textBox3->Text = this->dataGridView1->CurrentRow->Cells[1]->Value->ToString();
			textBox5->Text = this->dataGridView1->CurrentRow->Cells[2]->Value->ToString();
			textBox4->Text = this->dataGridView1->CurrentRow->Cells[4]->Value->ToString();
			label83->Text = this->dataGridView1->CurrentRow->Cells[8]->Value->ToString();
			label28->Text = this->dataGridView1->CurrentRow->Cells[3]->Value->ToString();
			label29->Text = this->dataGridView1->CurrentRow->Cells[5]->Value->ToString();
			//Rectangle rowRect = dataGridView1->GetRowDisplayRectangle(e->RowIndex, false);

			// Set the location of the panel control
			//panel11->Location = rowRect.BottomLeft;
			NumOfRow= dataGridView1->SelectedRows[0]->Index;
			panel11->Show();
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox2->Text == "" || textBox3->Text == "" || (textBox4->Text == "" || textBox4->Text == "0") ||
				(textBox5->Text == "" || textBox5->Text == "0")) {
				label96->ForeColor = Color::DarkRed;
			}
			if (textBox2->Text != "" && textBox3->Text != "" && (textBox4->Text != "" && textBox4->Text != "0") &&
				(textBox5->Text != "" && textBox5->Text != "0")) {
				String^ name = textBox2->Text;
				string  names = msclr::interop::marshal_as<string>(name);

				String^ Catigory = textBox3->Text;
				string  Catigorys = msclr::interop::marshal_as<string>(Catigory);

				String^ Soldquantity = label28->Text;
				string  Soldquantitys = msclr::interop::marshal_as<string>(Soldquantity);

				String^ Avlquantity = textBox4->Text;
				string  Avlquantitys = msclr::interop::marshal_as<string>(Avlquantity);

				String^ InCartquantity = label29->Text;
				string  InCartquantitys = msclr::interop::marshal_as<string>(InCartquantity);

				String^ price = textBox5->Text;
				string  prices = msclr::interop::marshal_as<string>(price);

				String^ Id = this->dataGridView1->CurrentRow->Cells[8]->Value->ToString();
				string  Ids = msclr::interop::marshal_as<string>(Id);

				int q = stoi(Avlquantitys);
				int p = stoi(prices);
				int id = stoi(Ids);
				int SQ = stoi(Soldquantitys);
				int CQ = stoi(InCartquantitys);
				Product product(id, names, Catigorys, q, person->getSellerID(), p, SQ, CQ);

				person->deleteProduct(product, *market);
				person->user->sendMessage(person->getSellerName() + " has deleted product with\nid: " + to_string(product.getID()) + ",\nName: " + product.getName());
				//person->removefromcart(product);

				panel11->Hide();

				String^ SearchByID = Id;    //delete in GUI from products
				int IndxOfRow = -1;
				for (int i = 0; i < dataGridView2->RowCount; i++) {
					DataGridViewRow^ row = dataGridView2->Rows[i];
					String^ RowId = row->Cells[8]->Value->ToString();

					if (SearchByID == RowId) {
						IndxOfRow = i;
						break;
					}

				}
				if (IndxOfRow != -1) {
					dataGridView2->Rows->RemoveAt(IndxOfRow);
				}
				///////////////////////////////////////////////////////////////////////
				int IndxOfRow1 = -1;
				for (int i = 0; i < dataGridView3->RowCount; i++) {
					DataGridViewRow^ row1 = dataGridView3->Rows[i];
					String^ RowId1 = row1->Cells[9]->Value->ToString();

					if (SearchByID == RowId1) {
						IndxOfRow1 = i;
						break;
					}

				}
				if (IndxOfRow1 != -1) {
					dataGridView3->Rows->RemoveAt(IndxOfRow1);
				}
				///////////////////////////////////////////////////////////////////////////////////
				if (NumOfRow != -1) {
					dataGridView1->Rows->RemoveAt(NumOfRow);
				}
				NumOfRow = -1;
			}
		}
		private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox2->Text == "" || textBox3->Text == "" || (textBox4->Text == "" || textBox4->Text == "0") ||
				(textBox5->Text == "" || textBox5->Text == "0")) {
				label96->ForeColor = Color::DarkRed;
			}
			if (textBox2->Text != "" && textBox3->Text != "" && (textBox4->Text != "" && textBox4->Text != "0") &&
				(textBox5->Text != "" && textBox5->Text != "0")) {
				String^ name = textBox2->Text;
				string  names = msclr::interop::marshal_as<string>(name);

				String^ Catigory = textBox3->Text;
				string  Catigorys = msclr::interop::marshal_as<string>(Catigory);


				String^ Soldquantity = label28->Text;
				string  Soldquantitys = msclr::interop::marshal_as<string>(Soldquantity);

				String^ Avlquantity = textBox4->Text;
				string  Avlquantitys = msclr::interop::marshal_as<string>(Avlquantity);

				String^ InCartquantity = label29->Text;
				string  InCartquantitys = msclr::interop::marshal_as<string>(InCartquantity);

				String^ price = textBox5->Text;
				string  prices = msclr::interop::marshal_as<string>(price);

				String^ Pid = label83->Text;
				string  Pids = msclr::interop::marshal_as<string>(Pid);

				int q = stoi(Avlquantitys);
				int p = stoi(prices);
				int id = stoi(Pids);
				int SQ = stoi(Soldquantitys);
				int CQ = stoi(InCartquantitys);

				Product product(id, names, Catigorys, q, person->getCustomerID(), p, SQ, CQ);

				person->editProduct(product, *market);
				person->user->sendMessage(person->getSellerName() + " has edited product with id: " + to_string(product.getID()) + ", Name: " + product.getName());

				int IndxOfRow = -1;
				for (int i = 0; i < dataGridView1->RowCount; i++) {
					DataGridViewRow^ row1 = dataGridView1->Rows[i];
					String^ RowId1 = row1->Cells[8]->Value->ToString();

					if (Pid == RowId1) {
						IndxOfRow = i;
						break;
					}

				}
				if (IndxOfRow != -1) {
					DataGridViewRow^ row = dataGridView1->Rows[IndxOfRow];
					row->Cells[0]->Value = name;
					row->Cells[1]->Value = Catigory;
					row->Cells[2]->Value = price;
					row->Cells[4]->Value = Avlquantity;

				}
				///////////////////////////////////////////////////////////////////
				int IndxOfRow1 = -1;
				for (int i = 0; i < dataGridView2->RowCount; i++) {
					DataGridViewRow^ row11 = dataGridView2->Rows[i];
					String^ RowId11 = row11->Cells[8]->Value->ToString();

					if (Pid == RowId11) {
						IndxOfRow1 = i;
						break;
					}

				}
				if (IndxOfRow1 != -1) {
					DataGridViewRow^ row1 = dataGridView2->Rows[IndxOfRow1];
					row1->Cells[0]->Value = name;
					row1->Cells[1]->Value = Catigory;
					row1->Cells[2]->Value = price;
					row1->Cells[4]->Value = Avlquantity;

				}

				/////////////////////////////////////////////////////////////////////////////////

				int IndxOfRow2 = -1;
				for (int i = 0; i < dataGridView3->RowCount; i++) {
					DataGridViewRow^ row12 = dataGridView3->Rows[i];
					String^ RowId12 = row12->Cells[9]->Value->ToString();

					if (Pid == RowId12) {
						IndxOfRow2 = i;
						break;
					}

				}
				if (IndxOfRow2 != -1) {
					DataGridViewRow^ row2 = dataGridView3->Rows[IndxOfRow2];
					row2->Cells[0]->Value = name;
					row2->Cells[1]->Value = Catigory;
					row2->Cells[2]->Value = price;
					row2->Cells[4]->Value = Avlquantity;
				}
				//////////////////////////////////////////////////////////////////////////////////////////
				panel11->Hide();
			}
		}
	
		private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
			//this->Hide();
			
			panel17->Show();
		}
		private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
			panel17->Hide();
			panel5->Show();
		}
		private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
			market->binaryTree.saveRatesInFile("Rates.text");
			market->binaryTree.SaveDataInFile("AllProduct.text");
			person->SaveDataInFileCustomer("CustomerCart.text");
			Application::Exit();
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			//panel17->Hide();
			panel27->Show();
		}
		private: System::Void label32_Click_1(System::Object^ sender, System::EventArgs^ e) {
			panel27->Hide();
			textBox15->Text = "";
			textBox14->Text = "";
			textBox13->Text = "";
			textBox12->Text = "";
		}
		private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox15->Text == "" || textBox14->Text == "" || textBox13->Text == "" || textBox12->Text == "") {
				label48->ForeColor = Color::DarkRed;
			}
			else {
				String^ name = textBox15->Text;
				string  names = msclr::interop::marshal_as<string>(name);

				String^ Catigory = textBox14->Text;
				string  Catigorys = msclr::interop::marshal_as<string>(Catigory);

				String^ quantity = textBox13->Text;
				string  quantitys = msclr::interop::marshal_as<string>(quantity);

				String^ price = textBox12->Text;
				string  prices = msclr::interop::marshal_as<string>(price);

				int q = stoi(quantitys);
				int p = stoi(prices);
				if (names.size() > 0 && Catigorys.size() > 0 && quantitys.size() > 0 && prices.size() > 0) {

					Product product(Searching::generate_Integers_id(5), names, Catigorys, q, person->getSellerID(), p, 0, 0);

					person->addProduct(product, *market);
					person->user->sendMessage(person->getSellerName() + " has added product to his products with\nid: " + to_string(product.getID()) + ",\nName: " + product.getName() + ",\nCategory " + product.getCategory() + ",\nQuantity " + to_string(product.getAalQuantity()));
					//product.getID();

					DataGridViewRow^ newRow = gcnew DataGridViewRow();

					DataGridViewTextBoxCell^ nameCell = gcnew DataGridViewTextBoxCell();
					nameCell->Value = name;
					newRow->Cells->Add(nameCell);

					DataGridViewTextBoxCell^ CategoryCell = gcnew DataGridViewTextBoxCell();
					CategoryCell->Value = Catigory;
					newRow->Cells->Add(CategoryCell);

					DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
					priceCell->Value = price;
					newRow->Cells->Add(priceCell);



					DataGridViewTextBoxCell^ SoldQuantityCell = gcnew DataGridViewTextBoxCell();
					SoldQuantityCell->Value = "0";
					newRow->Cells->Add(SoldQuantityCell);

					DataGridViewTextBoxCell^ QuantityCell = gcnew DataGridViewTextBoxCell();
					QuantityCell->Value = quantity;
					newRow->Cells->Add(QuantityCell);

					DataGridViewTextBoxCell^ InCartQuantityCell = gcnew DataGridViewTextBoxCell();
					InCartQuantityCell->Value = "0";
					newRow->Cells->Add(InCartQuantityCell);

					DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
					System::String^ rates = msclr::interop::marshal_as<System::String^>("0");
					rate->Value = rates;
					newRow->Cells->Add(rate);

					DataGridViewTextBoxCell^ s = gcnew DataGridViewTextBoxCell();
					System::String^ sallerid = msclr::interop::marshal_as<System::String^>(to_string(person->getSellerID()));
					s->Value = sallerid;
					newRow->Cells->Add(s);

					DataGridViewTextBoxCell^ productId = gcnew DataGridViewTextBoxCell();
					System::String^ productIds = msclr::interop::marshal_as<System::String^>(to_string(product.getID()));
					productId->Value = productIds;
					newRow->Cells->Add(productId);

					//need quantity in card & sells.

					//////////////////////////////////////////////
					DataGridViewRow^ newRow3 = gcnew DataGridViewRow();

					DataGridViewTextBoxCell^ nameCell1 = gcnew DataGridViewTextBoxCell();
					nameCell1->Value = name;
					newRow3->Cells->Add(nameCell1);

					DataGridViewTextBoxCell^ CategoryCell1 = gcnew DataGridViewTextBoxCell();
					CategoryCell1->Value = Catigory;
					newRow3->Cells->Add(CategoryCell1);

					DataGridViewTextBoxCell^ priceCell1 = gcnew DataGridViewTextBoxCell();
					priceCell1->Value = price;
					newRow3->Cells->Add(priceCell1);

					DataGridViewTextBoxCell^ SoldQuantityCell1 = gcnew DataGridViewTextBoxCell();
					SoldQuantityCell1->Value = "0";
					newRow3->Cells->Add(SoldQuantityCell1);

					DataGridViewTextBoxCell^ QuantityCell1 = gcnew DataGridViewTextBoxCell();
					QuantityCell1->Value = quantity;
					newRow3->Cells->Add(QuantityCell1);

					DataGridViewTextBoxCell^ InCartQuantityCell1 = gcnew DataGridViewTextBoxCell();
					InCartQuantityCell1->Value = "0";
					newRow3->Cells->Add(InCartQuantityCell1);

					DataGridViewTextBoxCell^ rate1 = gcnew DataGridViewTextBoxCell();
					System::String^ rates1 = msclr::interop::marshal_as<System::String^>("0");
					rate1->Value = rates1;
					newRow3->Cells->Add(rate1);

					DataGridViewTextBoxCell^ s1 = gcnew DataGridViewTextBoxCell();
					System::String^ sallerid1 = msclr::interop::marshal_as<System::String^>(to_string(person->getSellerID()));
					s1->Value = sallerid1;
					newRow3->Cells->Add(s1);

					DataGridViewTextBoxCell^ productId1 = gcnew DataGridViewTextBoxCell();
					System::String^ productIds1 = msclr::interop::marshal_as<System::String^>(to_string(product.getID()));
					productId1->Value = productIds1;
					newRow3->Cells->Add(productId1);

					//need quantity in card & sells.

					dataGridView1->Rows->Add(newRow);
					dataGridView2->Rows->Add(newRow3);


					for (int i = 0; i < dataGridView1->RowCount; i++) {
						dataGridView1->Rows[i]->Height = 50;
					}
					for (int i = 0; i < dataGridView2->RowCount; i++) {
						dataGridView2->Rows[i]->Height = 50;
					}


					panel27->Hide();
					textBox15->Text = ""; textBox14->Text = ""; textBox13->Text = ""; textBox12->Text = "";
				}
				else {
					label48->BackColor = Color::DarkRed;
				}
				
			}
		}
		private: System::Void panel17_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			panel27->Hide();
			int TotalIncCom=0;
			int TotalSold = 0;
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				DataGridViewRow^ row = dataGridView1->Rows[i];
				String^ PriceForOne = row->Cells[2]->Value->ToString();
				string  PriceForOnes = msclr::interop::marshal_as<string>(PriceForOne);
				int Price = stoi(PriceForOnes);

				String^ NumberOfSold = row->Cells[3]->Value->ToString();
				string  NumberOfSolds = msclr::interop::marshal_as<string>(NumberOfSold);
				int Sold = stoi(NumberOfSolds);

				TotalIncCom += (Price * Sold);
				TotalSold += Sold;

			}

			System::String^ totalincom = msclr::interop::marshal_as<System::String^>(to_string(TotalIncCom));
			label37->Text = totalincom;

			System::String^ numberofsold = msclr::interop::marshal_as<System::String^>(to_string(TotalSold));
			label46->Text = numberofsold;

		}
		private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			panel11->Hide();
		}
		private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
			panel5->Hide();
			panel17->Show();
		}
		/*private: System::Void label51_Click(System::Object^ sender, System::EventArgs^ e) {
			System::String^ Name = msclr::interop::marshal_as<System::String^>(person->getCustomerName());
			label51->Text = Name;
		}*/
		private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			panel2->Hide();
		}
		private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
			panel1->Hide();
			panel29->Show();
		}
		private: System::Void label63_Click(System::Object^ sender, System::EventArgs^ e) {
			panel29->Hide();
			panel1->Show();
		}
		private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
			panel29->Hide();
			panel1->Show();
		}
		private: System::Void label77_Click(System::Object^ sender, System::EventArgs^ e) {
			panel37->Hide();
			panel1->Show();
		}
		private: System::Void label78_Click(System::Object^ sender, System::EventArgs^ e) {
			panel37->Hide();
			panel29->Show();
		}
		private: System::Void label62_Click(System::Object^ sender, System::EventArgs^ e) {
			panel29->Hide();
			panel37->Show();
		}
		private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
			panel1->Hide();
			panel37->Show();
		}
		private: System::Void dataGridView2_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			textBox11->Text = "";
			label71->Text = this->dataGridView2->CurrentRow->Cells[0]->Value->ToString();
			label70->Text = this->dataGridView2->CurrentRow->Cells[1]->Value->ToString();
			label69->Text = this->dataGridView2->CurrentRow->Cells[2]->Value->ToString();
			label68->Text = this->dataGridView2->CurrentRow->Cells[3]->Value->ToString();
			label27->Text = this->dataGridView2->CurrentRow->Cells[4]->Value->ToString();
			label84->Text= this->dataGridView2->CurrentRow->Cells[5]->Value->ToString();
			label83->Text= this->dataGridView2->CurrentRow->Cells[8]->Value->ToString();
			NumOfRow = dataGridView2->SelectedRows[0]->Index;
			panel2->Show();
		}
		private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
			panel29->Hide();
			panel17->Show();

		}
		private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			panel1->Hide();
			panel17->Show();
		}
		private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
			panel17->Hide();
			panel29->Show();
		}
		private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {

			if (textBox11->Text == "" || textBox11->Text == " " || textBox11->Text == "0") {
				label72->Text = "0";
				label81->ForeColor = Color::DarkRed;
			}

			if (textBox11->Text != "" && textBox11->Text != "0") {
				String^ validQ = label27->Text;
				string  validQs = msclr::interop::marshal_as<string>(validQ);
				String^ NeedQ = textBox11->Text;
				string  NeedQs = msclr::interop::marshal_as<string>(NeedQ);
				int Nq = stoi(NeedQs);
			
				String^ price = label69->Text;
				string  prices = msclr::interop::marshal_as<string>(price);
			
				int Vq = stoi(validQs);
				int p = stoi(prices);
			
				if (Nq > Vq) {
					label81->ForeColor=Color::DarkRed;
				}
				else {
					label81->ForeColor = Color::SteelBlue;
				}
				int total = p * Nq;
				System::String^ totalT = msclr::interop::marshal_as<System::String^>(to_string(total));
				label72->Text = totalT;
			}
			
		}

		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

			if (label81->ForeColor == Color::SteelBlue && textBox11->Text != "0" && textBox11->Text != "") {
				String^ name = label71->Text;
				string  names = msclr::interop::marshal_as<string>(name);

				String^ Catigory = label70->Text;
				string  Catigorys = msclr::interop::marshal_as<string>(Catigory);

				String^ price = label69->Text;
				string  prices = msclr::interop::marshal_as<string>(price);


				String^ Soldquantity = label68->Text;
				string  Soldquantitys = msclr::interop::marshal_as<string>(Soldquantity);

				String^ Avlquantity = label27->Text;
				string  Avlquantitys = msclr::interop::marshal_as<string>(Avlquantity);

				String^ InCartquantity = textBox11->Text;
				string  InCartquantitys = msclr::interop::marshal_as<string>(InCartquantity);

				String^ ProductId = label83->Text;///////////
				string  ProductIds = msclr::interop::marshal_as<string>(ProductId);

				String^ NeedQ = textBox11->Text;
				string  NeedQs = msclr::interop::marshal_as<string>(NeedQ);

				int Nq = stoi(NeedQs);
				int q = stoi(Avlquantitys);
				int p = stoi(prices);
				int pid = stoi(ProductIds);
				int SQ = stoi(Soldquantitys);
				int CQ = stoi(InCartquantitys);

				DataGridViewRow^ newRow = gcnew DataGridViewRow();

				DataGridViewTextBoxCell^ nameCell = gcnew DataGridViewTextBoxCell();
				nameCell->Value = name;
				newRow->Cells->Add(nameCell);

				DataGridViewTextBoxCell^ CategoryCell = gcnew DataGridViewTextBoxCell();
				CategoryCell->Value = Catigory;
				newRow->Cells->Add(CategoryCell);

				DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
				priceCell->Value = price;
				newRow->Cells->Add(priceCell);

				DataGridViewTextBoxCell^ SoldQuantityCell = gcnew DataGridViewTextBoxCell();
				SoldQuantityCell->Value = Soldquantity;
				newRow->Cells->Add(SoldQuantityCell);

				DataGridViewTextBoxCell^ QuantityCell = gcnew DataGridViewTextBoxCell();
				QuantityCell->Value = Avlquantity;
				newRow->Cells->Add(QuantityCell);

				/*DataGridViewTextBoxCell^ InCartQuantityCell = gcnew DataGridViewTextBoxCell();
				InCartQuantityCell->Value = InCartquantity;
				newRow->Cells->Add(InCartQuantityCell);*/

				DataGridViewTextBoxCell^ Qneed = gcnew DataGridViewTextBoxCell();
				Qneed->Value = NeedQ;
				newRow->Cells->Add(Qneed);

				DataGridViewTextBoxCell^ Total = gcnew DataGridViewTextBoxCell();
				Total->Value = label72->Text;
				newRow->Cells->Add(Total);

				DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
				System::String^ rates = msclr::interop::marshal_as<System::String^>("0");
				rate->Value = rates;
				newRow->Cells->Add(rate);

				DataGridViewTextBoxCell^ s = gcnew DataGridViewTextBoxCell();
				System::String^ sallerid = msclr::interop::marshal_as<System::String^>(to_string(person->getSellerID()));
				s->Value = sallerid;
				newRow->Cells->Add(s);

				DataGridViewTextBoxCell^ productId = gcnew DataGridViewTextBoxCell();
				productId->Value = ProductId;
				newRow->Cells->Add(productId);

				DataGridViewTextBoxCell^ incartCell = gcnew DataGridViewTextBoxCell();
				incartCell->Value = InCartquantity;
				newRow->Cells->Add(incartCell);
			


				Product product(pid, names, Catigorys, q, person->getCustomerID(), p,SQ,CQ);
				person->addtocart(Nq,product, *market);
				person->user->sendMessage(person->getSellerName() + " has added product to his card witt\nid: " + to_string(product.getID())
					+ ",\nName: " + product.getName() + ",\nQuantity: " + to_string(product.getOrdered()) + ",\nPrice per each: " + to_string(product.getPrice()));
				dataGridView3->Rows->Add(newRow);

				for (int i = 0; i < dataGridView3->RowCount; i++) {
					dataGridView3->Rows[i]->Height = 50;
				}
				
				//String^ TotalCostincart = label86->Text;
				//string  TotalCostincarts = msclr::interop::marshal_as<string>(TotalCostincart);
				//int t = stoi(TotalCostincarts);
				//t += (p * q);
				//System::String^ totalC = msclr::interop::marshal_as<System::String^>(to_string(t));
				//label86->Text = totalC;
				//////////////////////////////////////////////////////////////////////
				int IndxOfRow = -1;
				for (int i = 0; i < dataGridView2->RowCount; i++) {
					DataGridViewRow^ row = dataGridView2->Rows[i];
					String^ RowId = row->Cells[8]->Value->ToString();

					if (ProductId == RowId) {
						IndxOfRow = i;
						break;
					}

				}
				if (IndxOfRow != -1) {
					DataGridViewRow^ row = dataGridView2->Rows[IndxOfRow];
					row->Cells[5]->Value = NeedQ;
				}
				//////////////////////////////////////////////////////////////////////
				int IndxOfRow1 = -1;
				for (int i = 0; i < dataGridView1->RowCount; i++) {
					DataGridViewRow^ row1 = dataGridView1->Rows[i];
					String^ RowId1 = row1->Cells[8]->Value->ToString();

					if (ProductId == RowId1) {
						IndxOfRow1 = i;
						break;
					}

				}
				if (IndxOfRow1 != -1) {
					DataGridViewRow^ row1 = dataGridView1->Rows[IndxOfRow1];
					row1->Cells[5]->Value = NeedQ;
				}


				panel27->Hide();
				panel2->Hide();
			}
			
		}
		private: System::Void label60_Click(System::Object^ sender, System::EventArgs^ e) {
			market->binaryTree.saveRatesInFile("Rates.text");
			market->binaryTree.SaveDataInFile("AllProduct.text");
			person->SaveDataInFileCustomer("CustomerCart.text");
			
			Application::Exit();
		}
		private: System::Void label74_Click(System::Object^ sender, System::EventArgs^ e) {
			market->binaryTree.saveRatesInFile("Rates.text");
			market->binaryTree.SaveDataInFile("AllProduct.text");
			person->SaveDataInFileCustomer("CustomerCart.text");
			Application::Exit();
		}
		private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
			market->binaryTree.saveRatesInFile("Rates.text");
			market->binaryTree.SaveDataInFile("AllProduct.text");
			person->SaveDataInFileCustomer("CustomerCart.text");
			Application::Exit();
		}
		private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView1->Rows[i]->Visible = true;
			}
		}
		private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox10->Text != ""|| textBox10->Text != " ") {
				for (int i = 0; i < dataGridView2->RowCount; i++) {
					dataGridView2->Rows[i]->Visible = false;

				}
				String^ SearchText = textBox10->Text;
				string  SearchTexts = msclr::interop::marshal_as<string>(SearchText);
				vector<int>ProductWhenSearch = Searching::find(SearchTexts);
				for (int i = 0; i < dataGridView2->RowCount; i++) {

					DataGridViewRow^ row2 = dataGridView2->Rows[i];
					String^ indxofproduct = row2->Cells[8]->Value->ToString();
					string  indxofproducts = msclr::interop::marshal_as<string>(indxofproduct);
					int IOP = stoi(indxofproducts);
					for (int J = 0; J < ProductWhenSearch.size();J++) {

						if (IOP == ProductWhenSearch[J]) {
							dataGridView2->Rows[i]->Visible = true;
						}

					}

				}
				textBox10->Text = "";
			}
		}
		private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
			for (int i = 0; i < dataGridView2->RowCount; i++) {
				dataGridView2->Rows[i]->Visible = true;
			}
		}
		private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox23->Text != "" || textBox23->Text != " ") {
				for (int i = 0; i < dataGridView3->RowCount; i++) {
					dataGridView3->Rows[i]->Visible = false;

				}
				String^ SearchText = textBox23->Text;
				string  SearchTexts = msclr::interop::marshal_as<string>(SearchText);
				vector<int>ProductWhenSearch = Searching::find(SearchTexts);

				for (int i = 0; i < dataGridView3->RowCount; i++) {

					DataGridViewRow^ row2 = dataGridView3->Rows[i];
					String^ indxofproduct = row2->Cells[9]->Value->ToString();
					string  indxofproducts = msclr::interop::marshal_as<string>(indxofproduct);
					int IOP = stoi(indxofproducts);

					for (int J = 0; J < ProductWhenSearch.size(); J++) {

						if (IOP == ProductWhenSearch[J]) {
							dataGridView3->Rows[i]->Visible = true;
						}

					}

				}
				textBox23->Text = "";
			}
		}
		private: System::Void label76_Click(System::Object^ sender, System::EventArgs^ e) {
			for (int i = 0; i < dataGridView3->RowCount; i++) {
				dataGridView3->Rows[i]->Visible = true;
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox1->Text != "" || textBox1->Text != " ") {
				for (int i = 0; i < dataGridView1->RowCount; i++) {
					dataGridView1->Rows[i]->Visible = false;
				}
				String^ SearchText = textBox1->Text;
				string  SearchTexts = msclr::interop::marshal_as<string>(SearchText);
				vector<int>ProductWhenSearch = Searching::find(SearchTexts);

				for (int i = 0; i < dataGridView1->RowCount; i++) {

					DataGridViewRow^ row2 = dataGridView1->Rows[i];
					String^ indxofproduct = row2->Cells[8]->Value->ToString();
					string  indxofproducts = msclr::interop::marshal_as<string>(indxofproduct);
					int IOP = stoi(indxofproducts);

					for (int J = 0; J < ProductWhenSearch.size(); J++) {

						if (IOP == ProductWhenSearch[J]) {
							dataGridView1->Rows[i]->Visible = true;
						}

					}

				}
			}
		}
		private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
			panel45->Show();
		}
		private: System::Void dataGridView3_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			label94->ForeColor = Color::SteelBlue;
			pass->Text = this->dataGridView3->CurrentRow->Cells[9]->Value->ToString();
			name->Text= this->dataGridView3->CurrentRow->Cells[0]->Value->ToString();
			cat->Text = this->dataGridView3->CurrentRow->Cells[1]->Value->ToString();
			label91->Text = this->dataGridView3->CurrentRow->Cells[2]->Value->ToString();
			sold->Text = this->dataGridView3->CurrentRow->Cells[3]->Value->ToString();
			label93->Text = this->dataGridView3->CurrentRow->Cells[4]->Value->ToString();
			textBox7->Text= this->dataGridView3->CurrentRow->Cells[5]->Value->ToString();
			label87->Text= this->dataGridView3->CurrentRow->Cells[6]->Value->ToString();
			label90->Text= this->dataGridView3->CurrentRow->Cells[9]->Value->ToString();
			incart->Text= this->dataGridView3->CurrentRow->Cells[10]->Value->ToString();
			CartBChange->Text= this->dataGridView3->CurrentRow->Cells[5]->Value->ToString();
			String^ NeedQ = textBox7->Text;
			string  NeedQs = msclr::interop::marshal_as<string>(NeedQ);
			int Nq = stoi(NeedQs);

			String^ price1 = label91->Text;
			string  prices1 = msclr::interop::marshal_as<string>(price1);
			int p = stoi(prices1);

			int total = p * Nq;
			System::String^ totalT = msclr::interop::marshal_as<System::String^>(to_string(total));
			label87->Text = totalT;

			panel38->Show();
		}
		private: System::Void label87_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (textBox7->Text == "" || textBox7->Text == " " || textBox7->Text == "0") {
				label87->Text = "0";
				label94->ForeColor = Color::DarkRed;
			}
			if (textBox7->Text != "" && textBox7->Text != "0") {
				String^ validQ = label93->Text;
				string  validQs = msclr::interop::marshal_as<string>(validQ);

				String^ NeedQ = textBox7->Text;
				string  NeedQs = msclr::interop::marshal_as<string>(NeedQ);
				int Nq = stoi(NeedQs);

				String^ price1 = label91->Text;
				string  prices1 = msclr::interop::marshal_as<string>(price1);

				int Vq = stoi(validQs);
				int p = stoi(prices1);

				if (Nq > Vq) {
					label94->ForeColor = Color::DarkRed;
				}
				else {
					label94->ForeColor = Color::SteelBlue;
					
					String^ name1 = name->Text;
					string  names = msclr::interop::marshal_as<string>(name1);

					String^ Catigory = cat->Text;
					string  Catigorys = msclr::interop::marshal_as<string>(Catigory);


					String^ Soldquantity = sold->Text;
					string  Soldquantitys = msclr::interop::marshal_as<string>(Soldquantity);

					String^ Avlquantity = label93->Text;
					string  Avlquantitys = msclr::interop::marshal_as<string>(Avlquantity);

					String^ InCartquantity = textBox7->Text;
					string  InCartquantitys = msclr::interop::marshal_as<string>(InCartquantity);

					String^ price = label91->Text;
					string  prices = msclr::interop::marshal_as<string>(price);

					String^ Pid = pass->Text;
					string  Pids = msclr::interop::marshal_as<string>(Pid);

					String^ TotalQuantityincart = incart->Text;
					string  TotalQuantityincarts = msclr::interop::marshal_as<string>(TotalQuantityincart);
					int TotalQuantityincarti = stoi(TotalQuantityincarts);

					String^ CartBChange1 = CartBChange->Text;
					string  CartBChange1s = msclr::interop::marshal_as<string>(CartBChange1);
					int CBC = stoi(CartBChange1s);


					int q = stoi(Avlquantitys);
					int p = stoi(prices);
					int id = stoi(Pids);
					int SQ = stoi(Soldquantitys);
					int CQ = stoi(InCartquantitys);
					
					Product product(id, names, Catigorys, q, person->getCustomerID(), p, SQ, CQ);
					person->editProduct(product, *market);
					person->user->sendMessage(person->getSellerName() + " has edited in his card product with\nid: " + to_string(product.getID()) + ",\nName: " + product.getName() + ",\n Quantity: " + to_string(product.getOrdered()));

				}
				int total = p * Nq;
				System::String^ totalT = msclr::interop::marshal_as<System::String^>(to_string(total));
				label87->Text = totalT;
			}

		}
	
		private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
			if (label94->ForeColor == Color::SteelBlue) {

				String^ name1 = name->Text;
				string  names = msclr::interop::marshal_as<string>(name1);

				String^ Catigory = cat->Text;
				string  Catigorys = msclr::interop::marshal_as<string>(Catigory);


				String^ Soldquantity = sold->Text;
				string  Soldquantitys = msclr::interop::marshal_as<string>(Soldquantity);

				String^ Avlquantity = label93->Text;
				string  Avlquantitys = msclr::interop::marshal_as<string>(Avlquantity);

				String^ InCartquantity = textBox7->Text;
				string  InCartquantitys = msclr::interop::marshal_as<string>(InCartquantity);

				String^ price = label91->Text;
				string  prices = msclr::interop::marshal_as<string>(price);

				String^ Pid = label90->Text;
				string  Pids = msclr::interop::marshal_as<string>(Pid);

				String^ TotalQuantityincart = incart->Text;
				string  TotalQuantityincarts = msclr::interop::marshal_as<string>(TotalQuantityincart);
				int TotalQuantityincarti = stoi(TotalQuantityincarts);

				String^ CartBChange1 = CartBChange->Text;
				string  CartBChange1s = msclr::interop::marshal_as<string>(CartBChange1);
				int CBC = stoi(CartBChange1s);

			
				int q = stoi(Avlquantitys);
				int p = stoi(prices);
				int id = stoi(Pids);
				int SQ = stoi(Soldquantitys);
				int CQ = stoi(InCartquantitys);
			
				
				//list<pair<Node*, int>>cart = person->getCart();
				int totalCart = 0;
				list<pair<Node*, int>>::iterator it1;
				for (it1 = person->cart[person->getCustomerID()].begin(); it1 != person->cart[person->getCustomerID()].end(); it1++) {
					if (id == (*it1).first->val.getID()) {
						(*it1).second = CQ;
					}
				}
				int temp = (CBC - CQ);
				int result = TotalQuantityincarti - temp;
				Product product(id, names, Catigorys, q, person->getCustomerID(), p, SQ, result);
				person->editProduct(product, *market);
				person->user->sendMessage(person->getSellerName() + " person has edited in his card a product with\nid: "+ to_string(product.getID()) + ",\nName: "+product.getName()+",\nCatigory: "+ product.getCategory() + ",\nQuantity: "+ to_string(product.getOrdered()));
				int IndxOfRow = -1;
				for (int i = 0; i < dataGridView1->RowCount; i++) {
					DataGridViewRow^ row1 = dataGridView1->Rows[i];
					String^ RowId1 = row1->Cells[8]->Value->ToString();

					if (Pid == RowId1) {
						IndxOfRow = i;
						break;
					}

				}
				if (IndxOfRow != -1) {
					DataGridViewRow^ row = dataGridView1->Rows[IndxOfRow];
					System::String^ InCartQ = msclr::interop::marshal_as<System::String^>(to_string(result));
					row->Cells[5]->Value = InCartQ;

				}
				///////////////////////////////////////////////////////////////////

				int IndxOfRow1 = -1;
				for (int i = 0; i < dataGridView2->RowCount; i++) {
					DataGridViewRow^ row11 = dataGridView2->Rows[i];
					String^ RowId11 = row11->Cells[8]->Value->ToString();

					if (Pid == RowId11) {
						IndxOfRow1 = i;
						break;
					}

				}
				if (IndxOfRow1 != -1) {
					DataGridViewRow^ row1 = dataGridView2->Rows[IndxOfRow1];
					System::String^ InCartQ1 = msclr::interop::marshal_as<System::String^>(to_string(result));
					row1->Cells[5]->Value = InCartQ1;

				}

				/////////////////////////////////////////////////////////////////////////////////

				int IndxOfRow2 = -1;
				for (int i = 0; i < dataGridView3->RowCount; i++) {
					DataGridViewRow^ row12 = dataGridView3->Rows[i];
					String^ RowId12 = row12->Cells[9]->Value->ToString();
					if (Pid == RowId12) {
						IndxOfRow2 = i;
						break;
					}
				}
				if (IndxOfRow2 != -1) {
					DataGridViewRow^ row2 = dataGridView3->Rows[IndxOfRow2];
					row2->Cells[5]->Value = textBox7->Text;
					System::String^ InCartQ2 = msclr::interop::marshal_as<System::String^>(to_string(result));
					row2->Cells[10]->Value = InCartQ2;
				}
				//////////////////////////////////////////////////////////////////////////////////////////
				panel38->Hide();
				textBox7->Text = "";
			}

		}

		private: System::Void panel45_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			int totalcost = 0;

			for (int i = 0; i < dataGridView3->RowCount; i++) {
				DataGridViewRow^ row = dataGridView3->Rows[i];
				String^ totalForOneProduct = row->Cells[6]->Value->ToString();
				string  totalC = msclr::interop::marshal_as<string>(totalForOneProduct);
				int TC = stoi(totalC);
				totalcost += TC;
			}

			System::String^ TotalCostS = msclr::interop::marshal_as<System::String^>(to_string(totalcost));
			TotalCost->Text = TotalCostS;
		}
		private: System::Void label95_Click(System::Object^ sender, System::EventArgs^ e) {
			panel45->Hide();
		}
		private: System::Void label86_Click(System::Object^ sender, System::EventArgs^ e) {
			panel38->Hide();
			textBox7->Text = "";
		}
		
		private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
			if (label94->ForeColor == Color::SteelBlue) {

				String^ name1 = name->Text;
				string  names = msclr::interop::marshal_as<string>(name1);

				String^ Catigory = cat->Text;
				string  Catigorys = msclr::interop::marshal_as<string>(Catigory);


				String^ Soldquantity = sold->Text;
				string  Soldquantitys = msclr::interop::marshal_as<string>(Soldquantity);

				String^ Avlquantity = label93->Text;
				string  Avlquantitys = msclr::interop::marshal_as<string>(Avlquantity);

				String^ InCartquantity = textBox7->Text;
				string  InCartquantitys = msclr::interop::marshal_as<string>(InCartquantity);

				String^ price = label91->Text;
				string  prices = msclr::interop::marshal_as<string>(price);

				String^ Pid = label90->Text;
				string  Pids = msclr::interop::marshal_as<string>(Pid);

				String^ TotalQuantityincart = incart->Text;
				string  TotalQuantityincarts = msclr::interop::marshal_as<string>(TotalQuantityincart);
				int TotalQuantityincarti = stoi(TotalQuantityincarts);

				String^ CartBChange1 = CartBChange->Text;
				string  CartBChange1s = msclr::interop::marshal_as<string>(CartBChange1);
				int CBC = stoi(CartBChange1s);

				int q = stoi(Avlquantitys);
				int p = stoi(prices);
				int id = stoi(Pids);
				int SQ = stoi(Soldquantitys);
				int CQ = stoi(InCartquantitys);


				//list<pair<Node*, int>>cart = person->getCart();
			
				int result = TotalQuantityincarti - CBC;
				Product product(id, names, Catigorys, q, person->getCustomerID(), p, SQ, result);
				person->editProduct(product, *market);
				person->user->sendMessage(person->getSellerName() + " person has edited in his card a product with\nid: " + to_string(product.getID()) + ",\nName: " + product.getName() + ",\nCatigory: " + product.getCategory() + ",\nQuantity: " + to_string(product.getOrdered()));
				person->removefcart(product);

				int IndxOfRow = -1;
				for (int i = 0; i < dataGridView1->RowCount; i++) {
					DataGridViewRow^ row1 = dataGridView1->Rows[i];
					String^ RowId1 = row1->Cells[8]->Value->ToString();

					if (Pid == RowId1) {
						IndxOfRow = i;
						break;
					}

				}
				if (IndxOfRow != -1) {
					DataGridViewRow^ row = dataGridView1->Rows[IndxOfRow];
					System::String^ InCartQ = msclr::interop::marshal_as<System::String^>(to_string(result));
					row->Cells[5]->Value = InCartQ;

				}
				///////////////////////////////////////////////////////////////////

				int IndxOfRow1 = -1;
				for (int i = 0; i < dataGridView2->RowCount; i++) {
					DataGridViewRow^ row11 = dataGridView2->Rows[i];
					String^ RowId11 = row11->Cells[8]->Value->ToString();

					if (Pid == RowId11) {
						IndxOfRow1 = i;
						break;
					}

				}
				if (IndxOfRow1 != -1) {
					DataGridViewRow^ row1 = dataGridView2->Rows[IndxOfRow1];
					System::String^ InCartQ1 = msclr::interop::marshal_as<System::String^>(to_string(result));
					row1->Cells[5]->Value = InCartQ1;

				}

				/////////////////////////////////////////////////////////////////////////////////

				int IndxOfRow2 = -1;
				for (int i = 0; i < dataGridView3->RowCount; i++) {
					DataGridViewRow^ row12 = dataGridView3->Rows[i];
					String^ RowId12 = row12->Cells[9]->Value->ToString();
					if (Pid == RowId12) {
						IndxOfRow2 = i;
						break;
					}
				}
				if (IndxOfRow2 != -1) {
					dataGridView3->Rows->RemoveAt(IndxOfRow2);
				}
				//////////////////////////////////////////////////////////////////////////////////////////
				panel38->Hide();
				textBox7->Text = "";
			}
		}
		private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {

			person->checkout(*market);
	
			dataGridView1->Rows->Clear();
			dataGridView2->Rows->Clear();
			dataGridView3->Rows->Clear();

			list<Node*>li = person->getlist();
			if (li.size() > 0)
			{
				for (auto& ptr : li)
				{
					if (ptr != NULL)
					{

						DataGridViewRow^ newRow = gcnew DataGridViewRow();

						DataGridViewTextBoxCell^ nameCell = gcnew DataGridViewTextBoxCell();
						System::String^ Name = msclr::interop::marshal_as<System::String^>(ptr->val.getName());
						nameCell->Value = Name;
						newRow->Cells->Add(nameCell);

						DataGridViewTextBoxCell^ CategoryCell = gcnew DataGridViewTextBoxCell();
						System::String^ Category = msclr::interop::marshal_as<System::String^>(ptr->val.getCategory());
						CategoryCell->Value = Category;
						newRow->Cells->Add(CategoryCell);

						DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
						System::String^ price = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getPrice()));
						priceCell->Value = price;
						newRow->Cells->Add(priceCell);

						DataGridViewTextBoxCell^ SoldQuantityCell = gcnew DataGridViewTextBoxCell();
						System::String^ SoldQuantity = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getSoldQuantity()));
						SoldQuantityCell->Value = SoldQuantity;
						newRow->Cells->Add(SoldQuantityCell);

						DataGridViewTextBoxCell^ QuantityCell = gcnew DataGridViewTextBoxCell();
						System::String^ Quantity = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getAalQuantity()));
						QuantityCell->Value = Quantity;
						newRow->Cells->Add(QuantityCell);

						DataGridViewTextBoxCell^ InCartQuantityCell = gcnew DataGridViewTextBoxCell();
						System::String^ InCartQuantity = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getinCartQuantity()));
						InCartQuantityCell->Value = InCartQuantity;
						newRow->Cells->Add(InCartQuantityCell);
						if (ptr->val.productRate > 5) {
							DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
							System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(0));
							rate->Value = rates;
							newRow->Cells->Add(rate);
						}
						else {
							DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
							System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.productRate));
							rate->Value = rates;
							newRow->Cells->Add(rate);
						}
						DataGridViewTextBoxCell^ s = gcnew DataGridViewTextBoxCell();
						System::String^ sallerid = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getSellerID()));
						s->Value = sallerid;
						newRow->Cells->Add(s);

						DataGridViewTextBoxCell^ productId = gcnew DataGridViewTextBoxCell();
						System::String^ productIds = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getID()));
						productId->Value = productIds;
						newRow->Cells->Add(productId);

						//need quantity in card & sells.

						dataGridView1->Rows->Add(newRow);
						for (int i = 0; i < dataGridView1->RowCount; i++) {
							dataGridView1->Rows[i]->Height = 50;
						}
						
					}
				}
			}

			queue<Node*>q;
			q.push(market->binaryTree.getroot());
			while (!q.empty()) {
				Node* temp = q.front();
				q.pop();
				//temp->val.getName()

				Searching::products.push_back(make_pair(temp->val.getName() + temp->val.getCategory(), temp->val.getID()));

				DataGridViewRow^ newRow2 = gcnew DataGridViewRow();

				DataGridViewTextBoxCell^ nameCell = gcnew DataGridViewTextBoxCell();
				System::String^ Name = msclr::interop::marshal_as<System::String^>(temp->val.getName());
				nameCell->Value = Name;
				newRow2->Cells->Add(nameCell);

				DataGridViewTextBoxCell^ CategoryCell = gcnew DataGridViewTextBoxCell();
				System::String^ Category = msclr::interop::marshal_as<System::String^>(temp->val.getCategory());
				CategoryCell->Value = Category;
				newRow2->Cells->Add(CategoryCell);

				DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
				System::String^ price = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getPrice()));
				priceCell->Value = price;
				newRow2->Cells->Add(priceCell);

				DataGridViewTextBoxCell^ SoldQuantityCell = gcnew DataGridViewTextBoxCell();
				System::String^ SoldQuantity = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getSoldQuantity()));
				SoldQuantityCell->Value = SoldQuantity;
				newRow2->Cells->Add(SoldQuantityCell);

				DataGridViewTextBoxCell^ QuantityCell = gcnew DataGridViewTextBoxCell();
				System::String^ Quantity = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getAalQuantity()));
				QuantityCell->Value = Quantity;
				newRow2->Cells->Add(QuantityCell);

				DataGridViewTextBoxCell^ InCartQuantityCell = gcnew DataGridViewTextBoxCell();
				System::String^ InCartQuantity = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getinCartQuantity()));
				InCartQuantityCell->Value = InCartQuantity;
				newRow2->Cells->Add(InCartQuantityCell);
				if (temp->val.productRate > 5) {
					DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
					System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(0));
					rate->Value = rates;
					newRow2->Cells->Add(rate);
				}
				else {
					DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
					System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(temp->val.productRate));
					rate->Value = rates;
					newRow2->Cells->Add(rate);
				}
				DataGridViewTextBoxCell^ s = gcnew DataGridViewTextBoxCell();
				System::String^ sallerid = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getSellerID()));
				s->Value = sallerid;
				newRow2->Cells->Add(s);

				DataGridViewTextBoxCell^ productId = gcnew DataGridViewTextBoxCell();
				System::String^ productIds = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getID()));
				productId->Value = productIds;
				newRow2->Cells->Add(productId);

				//need quantity in card & sells.

				dataGridView2->Rows->Add(newRow2);
				
				for (int i = 0; i < dataGridView2->RowCount; i++) {
					dataGridView2->Rows[i]->Height = 50;
				}

				if (temp->left && temp->right) {
					q.push(temp->left);
					q.push(temp->right);
				}
				else if (temp->left && !temp->right) {
					q.push(temp->left);
				}
				else if (!temp->left && temp->right) {
					q.push(temp->right);
				}
			}

			panel45->Hide();

		}
		private: System::Void panel38_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {

			if (label94->ForeColor == Color::SteelBlue) {
				String^ name1 = name->Text;
				string  names = msclr::interop::marshal_as<string>(name1);

				String^ Catigory = cat->Text;
				string  Catigorys = msclr::interop::marshal_as<string>(Catigory);


				String^ Soldquantity = sold->Text;
				string  Soldquantitys = msclr::interop::marshal_as<string>(Soldquantity);

				String^ Avlquantity = label93->Text;
				string  Avlquantitys = msclr::interop::marshal_as<string>(Avlquantity);

				String^ InCartquantity = textBox7->Text;
				string  InCartquantitys = msclr::interop::marshal_as<string>(InCartquantity);

				String^ price = label91->Text;
				string  prices = msclr::interop::marshal_as<string>(price);

				String^ Pid = label90->Text;
				string  Pids = msclr::interop::marshal_as<string>(Pid);

				String^ TotalQuantityincart = incart->Text;
				string  TotalQuantityincarts = msclr::interop::marshal_as<string>(TotalQuantityincart);
				int TotalQuantityincarti = stoi(TotalQuantityincarts);

				String^ CartBChange1 = CartBChange->Text;
				string  CartBChange1s = msclr::interop::marshal_as<string>(CartBChange1);
				int CBC = stoi(CartBChange1s);

				int q = stoi(Avlquantitys);
				int p = stoi(prices);
				int id = stoi(Pids);
				int SQ = stoi(Soldquantitys);
				int CQ = stoi(InCartquantitys);


				//list<pair<Node*, int>>cart = person->getCart();

				int temp = (CBC - CQ);
				int result = TotalQuantityincarti - temp;

				//int result = TotalQuantityincarti - CBC;
				Product product(id, names, Catigorys, q, person->getCustomerID(), p, SQ, result);
				person->buySingleProduct(CQ,product,*market);

				person->user->sendMessage("Buyer " + person->getSellerName() + " has bought a product with\nid: " + to_string(product.getID()) + ",\nName: " + product.getName() + ",\nCatigory: " + product.getCategory() + ",\nQuantity: " + to_string(product.getOrdered()));
				person->user->sendMessage("Seller " + person->getSellerName() + " has sold a product with\nid: " + to_string(product.getID()) + ",\nName: " + product.getName() + ",\nCatigory: " + product.getCategory() + ",\nTotal Gain: " + to_string(product.getOrdered()*product.getPrice()));

				///////////////////////////////////////////////////////////////////////////
				int IndxOfRow = -1;
				for (int i = 0; i < dataGridView3->RowCount; i++) {
					DataGridViewRow^ row12 = dataGridView3->Rows[i];
					String^ RowId12 = row12->Cells[9]->Value->ToString();
					if (Pid == RowId12) {
						IndxOfRow = i;
						break;
					}
				}
				if (IndxOfRow != -1) {
					dataGridView3->Rows->RemoveAt(IndxOfRow);
				}
				///////////////////////////////////////////////////////////////////

				dataGridView1->Rows->Clear();
				dataGridView2->Rows->Clear();

				list<Node*>li = person->getlist();
				if (li.size() > 0)
				{
					for (auto& ptr : li)
					{
						if (ptr != NULL)
						{

							DataGridViewRow^ newRow = gcnew DataGridViewRow();

							DataGridViewTextBoxCell^ nameCell = gcnew DataGridViewTextBoxCell();
							System::String^ Name = msclr::interop::marshal_as<System::String^>(ptr->val.getName());
							nameCell->Value = Name;
							newRow->Cells->Add(nameCell);

							DataGridViewTextBoxCell^ CategoryCell = gcnew DataGridViewTextBoxCell();
							System::String^ Category = msclr::interop::marshal_as<System::String^>(ptr->val.getCategory());
							CategoryCell->Value = Category;
							newRow->Cells->Add(CategoryCell);

							DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
							System::String^ price = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getPrice()));
							priceCell->Value = price;
							newRow->Cells->Add(priceCell);

							DataGridViewTextBoxCell^ SoldQuantityCell = gcnew DataGridViewTextBoxCell();
							System::String^ SoldQuantity = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getSoldQuantity()));
							SoldQuantityCell->Value = SoldQuantity;
							newRow->Cells->Add(SoldQuantityCell);

							DataGridViewTextBoxCell^ QuantityCell = gcnew DataGridViewTextBoxCell();
							System::String^ Quantity = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getAalQuantity()));
							QuantityCell->Value = Quantity;
							newRow->Cells->Add(QuantityCell);

							DataGridViewTextBoxCell^ InCartQuantityCell = gcnew DataGridViewTextBoxCell();
							System::String^ InCartQuantity = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getinCartQuantity()));
							InCartQuantityCell->Value = InCartQuantity;
							newRow->Cells->Add(InCartQuantityCell);
							if (ptr->val.productRate > 5) {
								DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
								System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(0));
								rate->Value = rates;
								newRow->Cells->Add(rate);
							}
							else {
								DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
								System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.productRate));
								rate->Value = rates;
								newRow->Cells->Add(rate);
							}
							DataGridViewTextBoxCell^ s = gcnew DataGridViewTextBoxCell();
							System::String^ sallerid = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getSellerID()));
							s->Value = sallerid;
							newRow->Cells->Add(s);

							DataGridViewTextBoxCell^ productId = gcnew DataGridViewTextBoxCell();
							System::String^ productIds = msclr::interop::marshal_as<System::String^>(to_string(ptr->val.getID()));
							productId->Value = productIds;
							newRow->Cells->Add(productId);

							//need quantity in card & sells.

							dataGridView1->Rows->Add(newRow);
							for (int i = 0; i < dataGridView1->RowCount; i++) {
								dataGridView1->Rows[i]->Height = 50;
							}
							
						}
					}
				}

				queue<Node*>q1;
				q1.push(market->binaryTree.getroot());
				while (!q1.empty()) {
					Node* temp = q1.front();
					q1.pop();
					//temp->val.getName()

					Searching::products.push_back(make_pair(temp->val.getName() + temp->val.getCategory(), temp->val.getID()));

					DataGridViewRow^ newRow2 = gcnew DataGridViewRow();

					DataGridViewTextBoxCell^ nameCell = gcnew DataGridViewTextBoxCell();
					System::String^ Name = msclr::interop::marshal_as<System::String^>(temp->val.getName());
					nameCell->Value = Name;
					newRow2->Cells->Add(nameCell);

					DataGridViewTextBoxCell^ CategoryCell = gcnew DataGridViewTextBoxCell();
					System::String^ Category = msclr::interop::marshal_as<System::String^>(temp->val.getCategory());
					CategoryCell->Value = Category;
					newRow2->Cells->Add(CategoryCell);

					DataGridViewTextBoxCell^ priceCell = gcnew DataGridViewTextBoxCell();
					System::String^ price = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getPrice()));
					priceCell->Value = price;
					newRow2->Cells->Add(priceCell);

					DataGridViewTextBoxCell^ SoldQuantityCell = gcnew DataGridViewTextBoxCell();
					System::String^ SoldQuantity = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getSoldQuantity()));
					SoldQuantityCell->Value = SoldQuantity;
					newRow2->Cells->Add(SoldQuantityCell);

					DataGridViewTextBoxCell^ QuantityCell = gcnew DataGridViewTextBoxCell();
					System::String^ Quantity = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getAalQuantity()));
					QuantityCell->Value = Quantity;
					newRow2->Cells->Add(QuantityCell);

					DataGridViewTextBoxCell^ InCartQuantityCell = gcnew DataGridViewTextBoxCell();
					System::String^ InCartQuantity = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getinCartQuantity()));
					InCartQuantityCell->Value = InCartQuantity;
					newRow2->Cells->Add(InCartQuantityCell);
					if (temp->val.productRate > 5) {
						DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
						System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(0));
						rate->Value = rates;
						newRow2->Cells->Add(rate);
					}
					else {
						DataGridViewTextBoxCell^ rate = gcnew DataGridViewTextBoxCell();
						System::String^ rates = msclr::interop::marshal_as<System::String^>(to_string(temp->val.productRate));
						rate->Value = rates;
						newRow2->Cells->Add(rate);
					}
					DataGridViewTextBoxCell^ s = gcnew DataGridViewTextBoxCell();
					System::String^ sallerid = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getSellerID()));
					s->Value = sallerid;
					newRow2->Cells->Add(s);

					DataGridViewTextBoxCell^ productId = gcnew DataGridViewTextBoxCell();
					System::String^ productIds = msclr::interop::marshal_as<System::String^>(to_string(temp->val.getID()));
					productId->Value = productIds;
					newRow2->Cells->Add(productId);

					//need quantity in card & sells.

					dataGridView2->Rows->Add(newRow2);
					
					for (int i = 0; i < dataGridView2->RowCount; i++) {
						dataGridView2->Rows[i]->Height = 50;
					}

					if (temp->left && temp->right) {
						q1.push(temp->left);
						q1.push(temp->right);
					}
					else if (temp->left && !temp->right) {
						q1.push(temp->left);
					}
					else if (!temp->left && temp->right) {
						q1.push(temp->right);
					}
				}

				
				//////////////////////////////////////////////////////////////////////////////////////////
				panel38->Hide();
			}
			
		}
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

			if (textBox16->Text != "" || textBox16->Text != " ") {
				panel17->Hide();
				panel5->Show();
				for (int i = 0; i < dataGridView1->RowCount; i++) {
					dataGridView1->Rows[i]->Visible = false;
				}
				String^ SearchText = textBox16->Text;
				textBox1->Text = textBox16->Text;
				string  SearchTexts = msclr::interop::marshal_as<string>(SearchText);
				vector<int>ProductWhenSearch = Searching::find(SearchTexts);

				for (int i = 0; i < dataGridView1->RowCount; i++) {

					DataGridViewRow^ row2 = dataGridView1->Rows[i];
					String^ indxofproduct = row2->Cells[8]->Value->ToString();
					string  indxofproducts = msclr::interop::marshal_as<string>(indxofproduct);
					int IOP = stoi(indxofproducts);

					for (int J = 0; J < ProductWhenSearch.size(); J++) {

						if (IOP == ProductWhenSearch[J]) {
							dataGridView1->Rows[i]->Visible = true;
						}

					}

				}
				textBox16->Text = "";
			}
		}
		private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox22->Text != "" || textBox22->Text != " ") {
				panel29->Hide();
				panel1->Show();
				for (int i = 0; i < dataGridView2->RowCount; i++) {
					dataGridView2->Rows[i]->Visible = false;

				}
				String^ SearchText = textBox22->Text;
				textBox10->Text = textBox22->Text;
				string  SearchTexts = msclr::interop::marshal_as<string>(SearchText);
				vector<int>ProductWhenSearch = Searching::find(SearchTexts);
				for (int i = 0; i < dataGridView2->RowCount; i++) {

					DataGridViewRow^ row2 = dataGridView2->Rows[i];
					String^ indxofproduct = row2->Cells[8]->Value->ToString();
					string  indxofproducts = msclr::interop::marshal_as<string>(indxofproduct);
					int IOP = stoi(indxofproducts);
					for (int J = 0; J < ProductWhenSearch.size(); J++) {

						if (IOP == ProductWhenSearch[J]) {
							dataGridView2->Rows[i]->Visible = true;
						}

					}

				}
			}
		}
		private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				dataGridView1->Rows[i]->Visible = false;
			}
			for (int i = 0; i < dataGridView1->RowCount; i++) {

				DataGridViewRow^ row2 = dataGridView1->Rows[i];
				String^ AvlProduct = row2->Cells[4]->Value->ToString();
				string  AvlProducts = msclr::interop::marshal_as<string>(AvlProduct);
				int A = stoi(AvlProducts);
				if (A == 0) {
					dataGridView1->Rows[i]->Visible = true;
				}
			}
		}
		
		
		private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
			panel37->Hide();
			panel17->Show();
		}
		private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
			panel11->Hide();
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
		}


		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			panel2->Hide();
			dataGridView4->Show();
			dataGridView2->Hide();
			RatePanal->Hide();
			String^ ProductId = label83->Text;///////////
			string  ProductIds = msclr::interop::marshal_as<string>(ProductId);
			int pid = stoi(ProductIds);

			Node* product = market->binaryTree.findNode(pid);

			dataGridView4->Rows->Clear();
			for (int i = 0; i < product->val.customerRates.size(); i++) {

				DataGridViewRow^ RatingRow = gcnew DataGridViewRow();

				DataGridViewTextBoxCell^ customerRateCell = gcnew DataGridViewTextBoxCell();
				System::String^ customerNameCell = msclr::interop::marshal_as<System::String^>(product->val.customerRates[i].getCustomerName());
				customerRateCell->Value = customerNameCell;
				RatingRow->Cells->Add(customerRateCell);

				DataGridViewTextBoxCell^ customerComment = gcnew DataGridViewTextBoxCell();
				System::String^ userComment = msclr::interop::marshal_as<System::String^>(product->val.customerRates[i].getComment());
				customerComment->Value = userComment;
				RatingRow->Cells->Add(customerComment);

				DataGridViewTextBoxCell^ cusommerRate = gcnew DataGridViewTextBoxCell();
				System::String^ customerName = msclr::interop::marshal_as<System::String^>(to_string(product->val.customerRates[i].getCustomerRate()));
				cusommerRate->Value = customerName;
				RatingRow->Cells->Add(cusommerRate);

				dataGridView4->Rows->Add(RatingRow);
				for (int i = 0; i < dataGridView4->RowCount; i++) {
					dataGridView4->Rows[i]->Height = 50;
				}
				
			}
			
		}
		private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
			panel2->Hide();
			textBox11->Text = "";
		}
		private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
			dataGridView4->Hide();
			panel2->Show();
			dataGridView2->Show();
		
		}
		private: System::Void dataGridView2_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		}

		private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
			dataGridView4->Hide();
			RatePanal->Show();
		}
		private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label96_Click(System::Object^ sender, System::EventArgs^ e) {
			RatePanal->Hide();
			dataGridView4->Show();
			Rate->Text = "";
			comment->Text = "";
		}
		private: System::Void addRate_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Rate->Text == "") {

			}
			else {
				RatePanal->Hide();
				String^ ProductId = label83->Text;
				string  ProductIds = msclr::interop::marshal_as<string>(ProductId);
				int pid = stoi(ProductIds);

				Node* product = market->binaryTree.findNode(pid);

				String^ rateSystem = Rate->Text;
				string  rateTmp = msclr::interop::marshal_as<string>(rateSystem);

				String^ commentSystem = comment->Text;
				string  commentTmp = msclr::interop::marshal_as<string>(commentSystem);

				product->val.addRate(person->getCustomerName(), stof(rateTmp), commentTmp);

				person->user->sendMessage("Buyer " + person->getSellerName() + " has rated a product with\nid: " + ProductIds + ",\nRate: " + rateTmp + ",\nComment: " + commentTmp);

				dataGridView4->Show();
				DataGridViewRow^ RatingRow = gcnew DataGridViewRow();

				DataGridViewTextBoxCell^ customerRateCell = gcnew DataGridViewTextBoxCell();
				System::String^ customerNameCell = msclr::interop::marshal_as<System::String^>(product->val.customerRates[product->val.customerRates.size() - 1].getCustomerName());
				customerRateCell->Value = customerNameCell;
				RatingRow->Cells->Add(customerRateCell);

				DataGridViewTextBoxCell^ customerComment = gcnew DataGridViewTextBoxCell();
				System::String^ userComment = msclr::interop::marshal_as<System::String^>(product->val.customerRates[product->val.customerRates.size() - 1].getComment());
				customerComment->Value = userComment;
				RatingRow->Cells->Add(customerComment);

				DataGridViewTextBoxCell^ cusommerRate = gcnew DataGridViewTextBoxCell();
				System::String^ customerName = msclr::interop::marshal_as<System::String^>(to_string(product->val.customerRates[product->val.customerRates.size() - 1].getCustomerRate()));
				cusommerRate->Value = customerName;
				RatingRow->Cells->Add(cusommerRate);


				int IndxOfrateRow = -1;
				for (int i = 0; i < dataGridView4->RowCount; i++) {
					DataGridViewRow^ rowrate = dataGridView4->Rows[i];
					String^ customerNamerate = rowrate->Cells[0]->Value->ToString();
					string customerNames = msclr::interop::marshal_as<string>(customerNamerate);

					if (customerNames == person->getCustomerName()) {
						IndxOfrateRow = i;
						break;
					}

				}
				if (IndxOfrateRow != -1) {
					dataGridView4->Rows->RemoveAt(IndxOfrateRow);
				}

				dataGridView4->Rows->Add(RatingRow);
				for (int i = 0; i < dataGridView4->RowCount; i++) {
					dataGridView4->Rows[i]->Height = 50;
				}
				
				//////////////////////////////////////////////////////////////////////
				Node* product1 = market->binaryTree.findNode(pid);

				int IndxOfRow = -1;
				for (int i = 0; i < dataGridView1->RowCount; i++) {
					DataGridViewRow^ row1 = dataGridView1->Rows[i];
					String^ RowId1 = row1->Cells[8]->Value->ToString();

					if (ProductId == RowId1) {
						IndxOfRow = i;
						break;
					}

				}
				if (IndxOfRow != -1) {
					DataGridViewRow^ row = dataGridView1->Rows[IndxOfRow];
					System::String^ rate = msclr::interop::marshal_as<System::String^>(to_string(product1->val.productRate));
					row->Cells[6]->Value = rate;

				}
				///////////////////////////////////////////////////////////////////

				int IndxOfRow1 = -1;
				for (int i = 0; i < dataGridView2->RowCount; i++) {
					DataGridViewRow^ row11 = dataGridView2->Rows[i];
					String^ RowId11 = row11->Cells[8]->Value->ToString();

					if (ProductId == RowId11) {
						IndxOfRow1 = i;
						break;
					}

				}
				if (IndxOfRow1 != -1) {
					DataGridViewRow^ row1 = dataGridView2->Rows[IndxOfRow1];
					System::String^ InCartQ1 = msclr::interop::marshal_as<System::String^>(to_string(product1->val.productRate));
					row1->Cells[6]->Value = InCartQ1;

				}

				/////////////////////////////////////////////////////////////////////////////////

				int IndxOfRow2 = -1;
				for (int i = 0; i < dataGridView3->RowCount; i++) {
					DataGridViewRow^ row12 = dataGridView3->Rows[i];
					String^ RowId12 = row12->Cells[9]->Value->ToString();
					if (ProductId == RowId12) {
						IndxOfRow2 = i;
						break;
					}
				}
				if (IndxOfRow2 != -1) {
					DataGridViewRow^ row12 = dataGridView3->Rows[IndxOfRow2];
					System::String^ InCartQ12 = msclr::interop::marshal_as<System::String^>(to_string(product1->val.productRate));
					row12->Cells[7]->Value = InCartQ12;
				}
				comment->Text = "";
				Rate->Text = "";
			}
		}

		private: System::Void Rate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
			   //logout
		private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
			//myform1->per = person;
			/*market->binaryTree.saveRatesInFile("Rates.text");
			market->binaryTree.SaveDataInFile("AllProduct.text");
			person->SaveDataInFileCustomer("CustomerCart.text");
			this->Hide();
			login->Show();*/
		}
		
	
		private: System::Void button16_Click_1(System::Object^ sender, System::EventArgs^ e) {
			//dataGridView4->Hide();
			RatePanal->Show();
		}
		private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
			panel2->Hide();
			dataGridView4->Hide();
			panel2->Show();
			dataGridView2->Show();
		}
		private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
			/*MyForm1^ form = gcnew MyForm1();
			this->Hide();
			form->Show();*/
		}
		private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
			panel31->Show();
			panel17->Hide();
		}
		private: System::Void label98_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label99_Click(System::Object^ sender, System::EventArgs^ e) {
			panel31->Hide();
			panel5->Show();
		}
		private: System::Void label100_Click(System::Object^ sender, System::EventArgs^ e) {
			panel31->Hide();
			panel17->Show();
		}

		private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
			panel31->Show();
			panel5->Hide();
		}
		private: System::Void label102_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label61_Click(System::Object^ sender, System::EventArgs^ e) {
			panel49->Show();
			panel29->Hide();
		}
		private: System::Void label75_Click(System::Object^ sender, System::EventArgs^ e) {
			panel49->Show();
			panel37->Hide();
		}
		private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
			panel49->Show();
			panel1->Hide();
		}
		private: System::Void label104_Click(System::Object^ sender, System::EventArgs^ e) {
			panel1->Show();
			panel49->Hide();
		}
		private: System::Void label103_Click(System::Object^ sender, System::EventArgs^ e) {
			panel37->Show();
			panel49->Hide();
		}
		private: System::Void label105_Click(System::Object^ sender, System::EventArgs^ e) {
			panel29->Show();
			panel49->Hide();
		}
		private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
			panel17->Show();
			panel49->Hide();
		}
		private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
			panel29->Show();
			panel31->Hide();
		}
		private: System::Void label97_Click(System::Object^ sender, System::EventArgs^ e) {
			market->binaryTree.saveRatesInFile("Rates.text");
			market->binaryTree.SaveDataInFile("AllProduct.text");
			person->SaveDataInFileCustomer("CustomerCart.text");

			Application::Exit();
		}
		private: System::Void label101_Click(System::Object^ sender, System::EventArgs^ e) {
			market->binaryTree.saveRatesInFile("Rates.text");
			market->binaryTree.SaveDataInFile("AllProduct.text");
			person->SaveDataInFileCustomer("CustomerCart.text");

			Application::Exit();
		}
	};
}
