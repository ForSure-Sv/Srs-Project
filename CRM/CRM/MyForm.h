#pragma once
#include <string>
#include <fstream>
#include <chrono>
#include <ctime>

namespace CRM {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	private: System::Windows::Forms::Button^  T3_NTbutton;
	public:

	private: System::Windows::Forms::Label^  T3_l1;
	private: System::Windows::Forms::Button^  T3_UHbutton;
	private: System::Windows::Forms::Button^  T3_PButt;
	private: System::Windows::Forms::Label^  T4_l6;
	private: System::Windows::Forms::Label^  T4_l7;
	private: System::Windows::Forms::Label^  T4_l5;
	private: System::Windows::Forms::Label^  T4_l4;
	private: System::Windows::Forms::Label^  T4_l3;
	private: System::Windows::Forms::Label^  T4_l2;
	private: System::Windows::Forms::Label^  T4_l1;
	private: System::Windows::Forms::Label^  T4_l8;

	private: System::Windows::Forms::TextBox^  T4_TBPW;

	private: System::Windows::Forms::TextBox^  T4_TBPN;

	private: System::Windows::Forms::TextBox^  T4_TBD;

	private: System::Windows::Forms::TextBox^  T4_TBE;

	private: System::Windows::Forms::TextBox^  T4_TBID;

	private: System::Windows::Forms::TextBox^  T4_TBLN;

	private: System::Windows::Forms::TextBox^  T4_TBFN;
	private: System::Windows::Forms::Button^  T4_ButtonF;
	private: System::Windows::Forms::ComboBox^  T4_CB;
	private: System::Windows::Forms::TabPage^  T5_NewTicket;
	private: System::Windows::Forms::Label^  T5_l2;

	private: System::Windows::Forms::ComboBox^  T5_CB;
	private: System::Windows::Forms::Label^  T5_l3;


	private: System::Windows::Forms::Label^  T5_l1;
	private: System::Windows::Forms::RichTextBox^  T5_RTB;
	private: System::Windows::Forms::Button^  T5_Button;
			 String^ m_id;
	private: System::Windows::Forms::TabPage^  T6_UserHistory;
	private: System::Windows::Forms::Label^  T6_l2;

	private: System::Windows::Forms::DataGridView^  T6_DGV;




	private: System::Windows::Forms::Label^  T6_L1;

	private: System::Windows::Forms::TextBox^  T6_TBS;
	private: System::Windows::Forms::Button^  T6_Sbutton;
	private: System::Windows::Forms::ComboBox^  T6_CB;


	private: System::Windows::Forms::Panel^  T6_P;
	private: System::Windows::Forms::TabPage^  T7_TLogin;
	private: System::Windows::Forms::TextBox^  T7_TBPW;
	private: System::Windows::Forms::TextBox^  T7_TBUN;

	private: System::Windows::Forms::Label^  T7_l3;
	private: System::Windows::Forms::Label^  T7_l2;
	private: System::Windows::Forms::Label^  T7_l1;
	private: System::Windows::Forms::Button^  T7_Button;
	private: System::Windows::Forms::TabPage^  T8_TMenu;
	private: System::Windows::Forms::Button^  T8_TAButton;
	private: System::Windows::Forms::Button^  T8_TLButton;
	private: System::Windows::Forms::Label^  T8_l1;

			 int i;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Title;
	protected:

	protected:
	private: System::Windows::Forms::GroupBox^  ShortBox;
	private: System::Windows::Forms::Button^  loginButton;
	private: System::Windows::Forms::Label^  ShortLabel;
	private: System::Windows::Forms::Button^  TecButton;
	private: System::Windows::Forms::TabControl^  TabCon;
	private: System::Windows::Forms::TabPage^  T1WelTab;

	private: System::Windows::Forms::TabPage^  T2LoginTab;

	private: System::Windows::Forms::TabPage^  T3UserMenu;
	private: System::Windows::Forms::TabPage^  T4NewAccount;







	private: System::Windows::Forms::Label^  T1label2;
	private: System::Windows::Forms::Label^  T1label3;
	private: System::Windows::Forms::Button^  MainButton;
	private: System::Windows::Forms::Label^  T2_l3;
	private: System::Windows::Forms::Label^  T2_l2;
	private: System::Windows::Forms::Label^  T2_l1;
	private: System::Windows::Forms::TextBox^  T2_TBPW;
	private: System::Windows::Forms::TextBox^  T2_TBID;
	private: System::Windows::Forms::Button^  T2_ButNew;
	private: System::Windows::Forms::Button^  T2_LoginButton;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Title = (gcnew System::Windows::Forms::Label());
			this->ShortBox = (gcnew System::Windows::Forms::GroupBox());
			this->MainButton = (gcnew System::Windows::Forms::Button());
			this->TecButton = (gcnew System::Windows::Forms::Button());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->ShortLabel = (gcnew System::Windows::Forms::Label());
			this->TabCon = (gcnew System::Windows::Forms::TabControl());
			this->T1WelTab = (gcnew System::Windows::Forms::TabPage());
			this->T1label3 = (gcnew System::Windows::Forms::Label());
			this->T1label2 = (gcnew System::Windows::Forms::Label());
			this->T2LoginTab = (gcnew System::Windows::Forms::TabPage());
			this->T2_LoginButton = (gcnew System::Windows::Forms::Button());
			this->T2_ButNew = (gcnew System::Windows::Forms::Button());
			this->T2_TBPW = (gcnew System::Windows::Forms::TextBox());
			this->T2_TBID = (gcnew System::Windows::Forms::TextBox());
			this->T2_l3 = (gcnew System::Windows::Forms::Label());
			this->T2_l2 = (gcnew System::Windows::Forms::Label());
			this->T2_l1 = (gcnew System::Windows::Forms::Label());
			this->T3UserMenu = (gcnew System::Windows::Forms::TabPage());
			this->T3_PButt = (gcnew System::Windows::Forms::Button());
			this->T3_UHbutton = (gcnew System::Windows::Forms::Button());
			this->T3_NTbutton = (gcnew System::Windows::Forms::Button());
			this->T3_l1 = (gcnew System::Windows::Forms::Label());
			this->T4NewAccount = (gcnew System::Windows::Forms::TabPage());
			this->T4_CB = (gcnew System::Windows::Forms::ComboBox());
			this->T4_ButtonF = (gcnew System::Windows::Forms::Button());
			this->T4_TBPW = (gcnew System::Windows::Forms::TextBox());
			this->T4_TBPN = (gcnew System::Windows::Forms::TextBox());
			this->T4_TBD = (gcnew System::Windows::Forms::TextBox());
			this->T4_TBE = (gcnew System::Windows::Forms::TextBox());
			this->T4_TBID = (gcnew System::Windows::Forms::TextBox());
			this->T4_TBLN = (gcnew System::Windows::Forms::TextBox());
			this->T4_TBFN = (gcnew System::Windows::Forms::TextBox());
			this->T4_l6 = (gcnew System::Windows::Forms::Label());
			this->T4_l7 = (gcnew System::Windows::Forms::Label());
			this->T4_l5 = (gcnew System::Windows::Forms::Label());
			this->T4_l4 = (gcnew System::Windows::Forms::Label());
			this->T4_l3 = (gcnew System::Windows::Forms::Label());
			this->T4_l2 = (gcnew System::Windows::Forms::Label());
			this->T4_l1 = (gcnew System::Windows::Forms::Label());
			this->T4_l8 = (gcnew System::Windows::Forms::Label());
			this->T5_NewTicket = (gcnew System::Windows::Forms::TabPage());
			this->T5_Button = (gcnew System::Windows::Forms::Button());
			this->T5_RTB = (gcnew System::Windows::Forms::RichTextBox());
			this->T5_CB = (gcnew System::Windows::Forms::ComboBox());
			this->T5_l3 = (gcnew System::Windows::Forms::Label());
			this->T5_l1 = (gcnew System::Windows::Forms::Label());
			this->T5_l2 = (gcnew System::Windows::Forms::Label());
			this->T6_UserHistory = (gcnew System::Windows::Forms::TabPage());
			this->T6_P = (gcnew System::Windows::Forms::Panel());
			this->T6_Sbutton = (gcnew System::Windows::Forms::Button());
			this->T6_CB = (gcnew System::Windows::Forms::ComboBox());
			this->T6_L1 = (gcnew System::Windows::Forms::Label());
			this->T6_TBS = (gcnew System::Windows::Forms::TextBox());
			this->T6_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->T6_l2 = (gcnew System::Windows::Forms::Label());
			this->T7_TLogin = (gcnew System::Windows::Forms::TabPage());
			this->T7_Button = (gcnew System::Windows::Forms::Button());
			this->T7_TBPW = (gcnew System::Windows::Forms::TextBox());
			this->T7_TBUN = (gcnew System::Windows::Forms::TextBox());
			this->T7_l3 = (gcnew System::Windows::Forms::Label());
			this->T7_l2 = (gcnew System::Windows::Forms::Label());
			this->T7_l1 = (gcnew System::Windows::Forms::Label());
			this->T8_TMenu = (gcnew System::Windows::Forms::TabPage());
			this->T8_l1 = (gcnew System::Windows::Forms::Label());
			this->T8_TLButton = (gcnew System::Windows::Forms::Button());
			this->T8_TAButton = (gcnew System::Windows::Forms::Button());
			this->ShortBox->SuspendLayout();
			this->TabCon->SuspendLayout();
			this->T1WelTab->SuspendLayout();
			this->T2LoginTab->SuspendLayout();
			this->T3UserMenu->SuspendLayout();
			this->T4NewAccount->SuspendLayout();
			this->T5_NewTicket->SuspendLayout();
			this->T6_UserHistory->SuspendLayout();
			this->T6_P->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->T6_DGV))->BeginInit();
			this->T7_TLogin->SuspendLayout();
			this->T8_TMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->BackColor = System::Drawing::Color::Transparent;
			this->Title->Font = (gcnew System::Drawing::Font(L"David", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Title->Location = System::Drawing::Point(188, 62);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(544, 47);
			this->Title->TabIndex = 0;
			this->Title->Text = L"Academic support system";
			// 
			// ShortBox
			// 
			this->ShortBox->BackColor = System::Drawing::Color::Transparent;
			this->ShortBox->Controls->Add(this->MainButton);
			this->ShortBox->Controls->Add(this->TecButton);
			this->ShortBox->Controls->Add(this->loginButton);
			this->ShortBox->Controls->Add(this->ShortLabel);
			this->ShortBox->Location = System::Drawing::Point(1, 173);
			this->ShortBox->Name = L"ShortBox";
			this->ShortBox->Size = System::Drawing::Size(153, 425);
			this->ShortBox->TabIndex = 1;
			this->ShortBox->TabStop = false;
			// 
			// MainButton
			// 
			this->MainButton->BackColor = System::Drawing::Color::Transparent;
			this->MainButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MainButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainButton->Location = System::Drawing::Point(15, 325);
			this->MainButton->Name = L"MainButton";
			this->MainButton->Size = System::Drawing::Size(109, 67);
			this->MainButton->TabIndex = 3;
			this->MainButton->Text = L"Back to\r\nmain menu\r\n";
			this->MainButton->UseVisualStyleBackColor = false;
			this->MainButton->Visible = false;
			this->MainButton->Click += gcnew System::EventHandler(this, &MyForm::MainButton_Click);
			// 
			// TecButton
			// 
			this->TecButton->BackColor = System::Drawing::Color::Transparent;
			this->TecButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TecButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TecButton->Location = System::Drawing::Point(15, 168);
			this->TecButton->Name = L"TecButton";
			this->TecButton->Size = System::Drawing::Size(109, 41);
			this->TecButton->TabIndex = 2;
			this->TecButton->Text = L"Technician";
			this->TecButton->UseVisualStyleBackColor = false;
			this->TecButton->Click += gcnew System::EventHandler(this, &MyForm::TecButton_Click);
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::Transparent;
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->Location = System::Drawing::Point(15, 86);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(109, 41);
			this->loginButton->TabIndex = 1;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &MyForm::loginButton_Click);
			// 
			// ShortLabel
			// 
			this->ShortLabel->AutoSize = true;
			this->ShortLabel->Font = (gcnew System::Drawing::Font(L"David", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShortLabel->Location = System::Drawing::Point(11, 16);
			this->ShortLabel->Name = L"ShortLabel";
			this->ShortLabel->Size = System::Drawing::Size(57, 19);
			this->ShortLabel->TabIndex = 0;
			this->ShortLabel->Text = L"Menu";
			// 
			// TabCon
			// 
			this->TabCon->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->TabCon->Controls->Add(this->T1WelTab);
			this->TabCon->Controls->Add(this->T2LoginTab);
			this->TabCon->Controls->Add(this->T3UserMenu);
			this->TabCon->Controls->Add(this->T4NewAccount);
			this->TabCon->Controls->Add(this->T5_NewTicket);
			this->TabCon->Controls->Add(this->T6_UserHistory);
			this->TabCon->Controls->Add(this->T7_TLogin);
			this->TabCon->Controls->Add(this->T8_TMenu);
			this->TabCon->ItemSize = System::Drawing::Size(0, 1);
			this->TabCon->Location = System::Drawing::Point(149, 178);
			this->TabCon->Margin = System::Windows::Forms::Padding(0);
			this->TabCon->Multiline = true;
			this->TabCon->Name = L"TabCon";
			this->TabCon->SelectedIndex = 0;
			this->TabCon->Size = System::Drawing::Size(738, 420);
			this->TabCon->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->TabCon->TabIndex = 2;
			// 
			// T1WelTab
			// 
			this->T1WelTab->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T1WelTab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->T1WelTab->Controls->Add(this->T1label3);
			this->T1WelTab->Controls->Add(this->T1label2);
			this->T1WelTab->Location = System::Drawing::Point(4, 5);
			this->T1WelTab->Name = L"T1WelTab";
			this->T1WelTab->Padding = System::Windows::Forms::Padding(3);
			this->T1WelTab->Size = System::Drawing::Size(730, 411);
			this->T1WelTab->TabIndex = 0;
			this->T1WelTab->Text = L"WelTab";
			// 
			// T1label3
			// 
			this->T1label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T1label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1label3->Location = System::Drawing::Point(105, 95);
			this->T1label3->Name = L"T1label3";
			this->T1label3->Size = System::Drawing::Size(573, 92);
			this->T1label3->TabIndex = 1;
			this->T1label3->Text = L"Please choose your choice\r\nFrom the side bar.\r\n";
			// 
			// T1label2
			// 
			this->T1label2->AutoSize = true;
			this->T1label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T1label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1label2->Location = System::Drawing::Point(286, 20);
			this->T1label2->Name = L"T1label2";
			this->T1label2->Size = System::Drawing::Size(181, 39);
			this->T1label2->TabIndex = 0;
			this->T1label2->Text = L"Welcome!";
			// 
			// T2LoginTab
			// 
			this->T2LoginTab->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T2LoginTab->Controls->Add(this->T2_LoginButton);
			this->T2LoginTab->Controls->Add(this->T2_ButNew);
			this->T2LoginTab->Controls->Add(this->T2_TBPW);
			this->T2LoginTab->Controls->Add(this->T2_TBID);
			this->T2LoginTab->Controls->Add(this->T2_l3);
			this->T2LoginTab->Controls->Add(this->T2_l2);
			this->T2LoginTab->Controls->Add(this->T2_l1);
			this->T2LoginTab->Location = System::Drawing::Point(4, 5);
			this->T2LoginTab->Name = L"T2LoginTab";
			this->T2LoginTab->Padding = System::Windows::Forms::Padding(3);
			this->T2LoginTab->Size = System::Drawing::Size(730, 411);
			this->T2LoginTab->TabIndex = 1;
			this->T2LoginTab->Text = L"tabPage2";
			// 
			// T2_LoginButton
			// 
			this->T2_LoginButton->BackColor = System::Drawing::Color::Transparent;
			this->T2_LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T2_LoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_LoginButton->Location = System::Drawing::Point(602, 330);
			this->T2_LoginButton->Name = L"T2_LoginButton";
			this->T2_LoginButton->Size = System::Drawing::Size(115, 52);
			this->T2_LoginButton->TabIndex = 7;
			this->T2_LoginButton->Text = L"->";
			this->T2_LoginButton->UseVisualStyleBackColor = false;
			this->T2_LoginButton->Click += gcnew System::EventHandler(this, &MyForm::T2_LoginButton_Click);
			// 
			// T2_ButNew
			// 
			this->T2_ButNew->BackColor = System::Drawing::Color::Transparent;
			this->T2_ButNew->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T2_ButNew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_ButNew->Location = System::Drawing::Point(279, 247);
			this->T2_ButNew->Name = L"T2_ButNew";
			this->T2_ButNew->Size = System::Drawing::Size(147, 37);
			this->T2_ButNew->TabIndex = 4;
			this->T2_ButNew->Text = L"New Account";
			this->T2_ButNew->UseVisualStyleBackColor = false;
			this->T2_ButNew->Click += gcnew System::EventHandler(this, &MyForm::T2_ButNew_Click);
			// 
			// T2_TBPW
			// 
			this->T2_TBPW->Location = System::Drawing::Point(234, 179);
			this->T2_TBPW->Name = L"T2_TBPW";
			this->T2_TBPW->PasswordChar = '*';
			this->T2_TBPW->Size = System::Drawing::Size(138, 20);
			this->T2_TBPW->TabIndex = 6;
			this->T2_TBPW->UseSystemPasswordChar = true;
			// 
			// T2_TBID
			// 
			this->T2_TBID->Location = System::Drawing::Point(234, 122);
			this->T2_TBID->Name = L"T2_TBID";
			this->T2_TBID->Size = System::Drawing::Size(138, 20);
			this->T2_TBID->TabIndex = 5;
			// 
			// T2_l3
			// 
			this->T2_l3->AutoSize = true;
			this->T2_l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_l3->Location = System::Drawing::Point(98, 175);
			this->T2_l3->Name = L"T2_l3";
			this->T2_l3->Size = System::Drawing::Size(106, 24);
			this->T2_l3->TabIndex = 4;
			this->T2_l3->Text = L"Password:";
			// 
			// T2_l2
			// 
			this->T2_l2->AutoSize = true;
			this->T2_l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_l2->Location = System::Drawing::Point(169, 122);
			this->T2_l2->Name = L"T2_l2";
			this->T2_l2->Size = System::Drawing::Size(35, 24);
			this->T2_l2->TabIndex = 3;
			this->T2_l2->Text = L"ID:";
			// 
			// T2_l1
			// 
			this->T2_l1->AutoSize = true;
			this->T2_l1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T2_l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2_l1->Location = System::Drawing::Point(236, 25);
			this->T2_l1->Name = L"T2_l1";
			this->T2_l1->Size = System::Drawing::Size(229, 39);
			this->T2_l1->TabIndex = 2;
			this->T2_l1->Text = L"Enter Details";
			// 
			// T3UserMenu
			// 
			this->T3UserMenu->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T3UserMenu->Controls->Add(this->T3_PButt);
			this->T3UserMenu->Controls->Add(this->T3_UHbutton);
			this->T3UserMenu->Controls->Add(this->T3_NTbutton);
			this->T3UserMenu->Controls->Add(this->T3_l1);
			this->T3UserMenu->Location = System::Drawing::Point(4, 5);
			this->T3UserMenu->Name = L"T3UserMenu";
			this->T3UserMenu->Padding = System::Windows::Forms::Padding(3);
			this->T3UserMenu->Size = System::Drawing::Size(730, 411);
			this->T3UserMenu->TabIndex = 2;
			this->T3UserMenu->Text = L"UserMenu";
			// 
			// T3_PButt
			// 
			this->T3_PButt->BackColor = System::Drawing::Color::Transparent;
			this->T3_PButt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T3_PButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3_PButt->Location = System::Drawing::Point(7, 350);
			this->T3_PButt->Name = L"T3_PButt";
			this->T3_PButt->Size = System::Drawing::Size(115, 52);
			this->T3_PButt->TabIndex = 8;
			this->T3_PButt->Text = L"<-";
			this->T3_PButt->UseVisualStyleBackColor = false;
			this->T3_PButt->Click += gcnew System::EventHandler(this, &MyForm::T3_PButt_Click);
			// 
			// T3_UHbutton
			// 
			this->T3_UHbutton->BackColor = System::Drawing::Color::Transparent;
			this->T3_UHbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T3_UHbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3_UHbutton->Location = System::Drawing::Point(463, 102);
			this->T3_UHbutton->Name = L"T3_UHbutton";
			this->T3_UHbutton->Size = System::Drawing::Size(168, 41);
			this->T3_UHbutton->TabIndex = 9;
			this->T3_UHbutton->Text = L"User History";
			this->T3_UHbutton->UseVisualStyleBackColor = false;
			this->T3_UHbutton->Click += gcnew System::EventHandler(this, &MyForm::T3_UHbutton_Click);
			// 
			// T3_NTbutton
			// 
			this->T3_NTbutton->BackColor = System::Drawing::Color::Transparent;
			this->T3_NTbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T3_NTbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3_NTbutton->Location = System::Drawing::Point(120, 102);
			this->T3_NTbutton->Name = L"T3_NTbutton";
			this->T3_NTbutton->Size = System::Drawing::Size(173, 41);
			this->T3_NTbutton->TabIndex = 4;
			this->T3_NTbutton->Text = L"Create new ticket";
			this->T3_NTbutton->UseVisualStyleBackColor = false;
			this->T3_NTbutton->Click += gcnew System::EventHandler(this, &MyForm::T3_NTbutton_Click);
			// 
			// T3_l1
			// 
			this->T3_l1->AutoSize = true;
			this->T3_l1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T3_l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T3_l1->Location = System::Drawing::Point(251, 19);
			this->T3_l1->Name = L"T3_l1";
			this->T3_l1->Size = System::Drawing::Size(195, 39);
			this->T3_l1->TabIndex = 8;
			this->T3_l1->Text = L"User Menu";
			// 
			// T4NewAccount
			// 
			this->T4NewAccount->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T4NewAccount->Controls->Add(this->T4_CB);
			this->T4NewAccount->Controls->Add(this->T4_ButtonF);
			this->T4NewAccount->Controls->Add(this->T4_TBPW);
			this->T4NewAccount->Controls->Add(this->T4_TBPN);
			this->T4NewAccount->Controls->Add(this->T4_TBD);
			this->T4NewAccount->Controls->Add(this->T4_TBE);
			this->T4NewAccount->Controls->Add(this->T4_TBID);
			this->T4NewAccount->Controls->Add(this->T4_TBLN);
			this->T4NewAccount->Controls->Add(this->T4_TBFN);
			this->T4NewAccount->Controls->Add(this->T4_l6);
			this->T4NewAccount->Controls->Add(this->T4_l7);
			this->T4NewAccount->Controls->Add(this->T4_l5);
			this->T4NewAccount->Controls->Add(this->T4_l4);
			this->T4NewAccount->Controls->Add(this->T4_l3);
			this->T4NewAccount->Controls->Add(this->T4_l2);
			this->T4NewAccount->Controls->Add(this->T4_l1);
			this->T4NewAccount->Controls->Add(this->T4_l8);
			this->T4NewAccount->Location = System::Drawing::Point(4, 5);
			this->T4NewAccount->Name = L"T4NewAccount";
			this->T4NewAccount->Padding = System::Windows::Forms::Padding(3);
			this->T4NewAccount->Size = System::Drawing::Size(730, 411);
			this->T4NewAccount->TabIndex = 3;
			// 
			// T4_CB
			// 
			this->T4_CB->FormattingEnabled = true;
			this->T4_CB->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"050", L"052", L"054" });
			this->T4_CB->Location = System::Drawing::Point(190, 305);
			this->T4_CB->Name = L"T4_CB";
			this->T4_CB->Size = System::Drawing::Size(51, 21);
			this->T4_CB->TabIndex = 19;
			// 
			// T4_ButtonF
			// 
			this->T4_ButtonF->Cursor = System::Windows::Forms::Cursors::Default;
			this->T4_ButtonF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T4_ButtonF->Location = System::Drawing::Point(590, 327);
			this->T4_ButtonF->Name = L"T4_ButtonF";
			this->T4_ButtonF->Size = System::Drawing::Size(127, 55);
			this->T4_ButtonF->TabIndex = 18;
			this->T4_ButtonF->Text = L"->";
			this->T4_ButtonF->UseVisualStyleBackColor = true;
			this->T4_ButtonF->Click += gcnew System::EventHandler(this, &MyForm::T4_ButtonF_Click);
			// 
			// T4_TBPW
			// 
			this->T4_TBPW->Location = System::Drawing::Point(190, 340);
			this->T4_TBPW->Name = L"T4_TBPW";
			this->T4_TBPW->Size = System::Drawing::Size(161, 20);
			this->T4_TBPW->TabIndex = 17;
			// 
			// T4_TBPN
			// 
			this->T4_TBPN->Location = System::Drawing::Point(247, 306);
			this->T4_TBPN->Name = L"T4_TBPN";
			this->T4_TBPN->Size = System::Drawing::Size(104, 20);
			this->T4_TBPN->TabIndex = 16;
			// 
			// T4_TBD
			// 
			this->T4_TBD->Location = System::Drawing::Point(190, 263);
			this->T4_TBD->Name = L"T4_TBD";
			this->T4_TBD->Size = System::Drawing::Size(161, 20);
			this->T4_TBD->TabIndex = 15;
			// 
			// T4_TBE
			// 
			this->T4_TBE->Location = System::Drawing::Point(190, 222);
			this->T4_TBE->Name = L"T4_TBE";
			this->T4_TBE->Size = System::Drawing::Size(161, 20);
			this->T4_TBE->TabIndex = 14;
			// 
			// T4_TBID
			// 
			this->T4_TBID->Location = System::Drawing::Point(190, 179);
			this->T4_TBID->Name = L"T4_TBID";
			this->T4_TBID->Size = System::Drawing::Size(161, 20);
			this->T4_TBID->TabIndex = 13;
			// 
			// T4_TBLN
			// 
			this->T4_TBLN->Location = System::Drawing::Point(190, 141);
			this->T4_TBLN->Name = L"T4_TBLN";
			this->T4_TBLN->Size = System::Drawing::Size(161, 20);
			this->T4_TBLN->TabIndex = 12;
			// 
			// T4_TBFN
			// 
			this->T4_TBFN->Location = System::Drawing::Point(190, 108);
			this->T4_TBFN->Name = L"T4_TBFN";
			this->T4_TBFN->Size = System::Drawing::Size(161, 20);
			this->T4_TBFN->TabIndex = 11;
			// 
			// T4_l6
			// 
			this->T4_l6->AutoSize = true;
			this->T4_l6->BackColor = System::Drawing::Color::Transparent;
			this->T4_l6->Font = (gcnew System::Drawing::Font(L"David", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_l6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T4_l6->Location = System::Drawing::Point(35, 305);
			this->T4_l6->Name = L"T4_l6";
			this->T4_l6->Size = System::Drawing::Size(153, 20);
			this->T4_l6->TabIndex = 10;
			this->T4_l6->Text = L"Phone Number:";
			// 
			// T4_l7
			// 
			this->T4_l7->AutoSize = true;
			this->T4_l7->BackColor = System::Drawing::Color::Transparent;
			this->T4_l7->Font = (gcnew System::Drawing::Font(L"David", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_l7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T4_l7->Location = System::Drawing::Point(35, 339);
			this->T4_l7->Name = L"T4_l7";
			this->T4_l7->Size = System::Drawing::Size(104, 20);
			this->T4_l7->TabIndex = 9;
			this->T4_l7->Text = L"Password:";
			// 
			// T4_l5
			// 
			this->T4_l5->AutoSize = true;
			this->T4_l5->BackColor = System::Drawing::Color::Transparent;
			this->T4_l5->Font = (gcnew System::Drawing::Font(L"David", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_l5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T4_l5->Location = System::Drawing::Point(35, 262);
			this->T4_l5->Name = L"T4_l5";
			this->T4_l5->Size = System::Drawing::Size(125, 20);
			this->T4_l5->TabIndex = 8;
			this->T4_l5->Text = L"Department:";
			// 
			// T4_l4
			// 
			this->T4_l4->AutoSize = true;
			this->T4_l4->BackColor = System::Drawing::Color::Transparent;
			this->T4_l4->Font = (gcnew System::Drawing::Font(L"David", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_l4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T4_l4->Location = System::Drawing::Point(35, 221);
			this->T4_l4->Name = L"T4_l4";
			this->T4_l4->Size = System::Drawing::Size(71, 20);
			this->T4_l4->TabIndex = 7;
			this->T4_l4->Text = L"Email:";
			// 
			// T4_l3
			// 
			this->T4_l3->AutoSize = true;
			this->T4_l3->BackColor = System::Drawing::Color::Transparent;
			this->T4_l3->Font = (gcnew System::Drawing::Font(L"David", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_l3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T4_l3->Location = System::Drawing::Point(35, 179);
			this->T4_l3->Name = L"T4_l3";
			this->T4_l3->Size = System::Drawing::Size(37, 20);
			this->T4_l3->TabIndex = 6;
			this->T4_l3->Text = L"Id:";
			// 
			// T4_l2
			// 
			this->T4_l2->AutoSize = true;
			this->T4_l2->BackColor = System::Drawing::Color::Transparent;
			this->T4_l2->Font = (gcnew System::Drawing::Font(L"David", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_l2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T4_l2->Location = System::Drawing::Point(38, 140);
			this->T4_l2->Name = L"T4_l2";
			this->T4_l2->Size = System::Drawing::Size(114, 20);
			this->T4_l2->TabIndex = 5;
			this->T4_l2->Text = L"Last Name:";
			// 
			// T4_l1
			// 
			this->T4_l1->AutoSize = true;
			this->T4_l1->BackColor = System::Drawing::Color::Transparent;
			this->T4_l1->Font = (gcnew System::Drawing::Font(L"David", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_l1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T4_l1->Location = System::Drawing::Point(35, 107);
			this->T4_l1->Name = L"T4_l1";
			this->T4_l1->Size = System::Drawing::Size(117, 20);
			this->T4_l1->TabIndex = 4;
			this->T4_l1->Text = L"First Name:";
			// 
			// T4_l8
			// 
			this->T4_l8->AutoSize = true;
			this->T4_l8->BackColor = System::Drawing::Color::Transparent;
			this->T4_l8->Font = (gcnew System::Drawing::Font(L"David", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T4_l8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T4_l8->Location = System::Drawing::Point(124, 19);
			this->T4_l8->Name = L"T4_l8";
			this->T4_l8->Size = System::Drawing::Size(455, 47);
			this->T4_l8->TabIndex = 3;
			this->T4_l8->Text = L"Account Registration";
			// 
			// T5_NewTicket
			// 
			this->T5_NewTicket->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T5_NewTicket->Controls->Add(this->T5_Button);
			this->T5_NewTicket->Controls->Add(this->T5_RTB);
			this->T5_NewTicket->Controls->Add(this->T5_CB);
			this->T5_NewTicket->Controls->Add(this->T5_l3);
			this->T5_NewTicket->Controls->Add(this->T5_l1);
			this->T5_NewTicket->Controls->Add(this->T5_l2);
			this->T5_NewTicket->Location = System::Drawing::Point(4, 5);
			this->T5_NewTicket->Name = L"T5_NewTicket";
			this->T5_NewTicket->Size = System::Drawing::Size(730, 411);
			this->T5_NewTicket->TabIndex = 4;
			// 
			// T5_Button
			// 
			this->T5_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T5_Button->Location = System::Drawing::Point(604, 341);
			this->T5_Button->Name = L"T5_Button";
			this->T5_Button->Size = System::Drawing::Size(113, 61);
			this->T5_Button->TabIndex = 13;
			this->T5_Button->Text = L"->";
			this->T5_Button->UseVisualStyleBackColor = true;
			this->T5_Button->Click += gcnew System::EventHandler(this, &MyForm::T5_Button_Click);
			// 
			// T5_RTB
			// 
			this->T5_RTB->Location = System::Drawing::Point(274, 158);
			this->T5_RTB->Name = L"T5_RTB";
			this->T5_RTB->Size = System::Drawing::Size(343, 134);
			this->T5_RTB->TabIndex = 12;
			this->T5_RTB->Text = L"";
			// 
			// T5_CB
			// 
			this->T5_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T5_CB->FormattingEnabled = true;
			this->T5_CB->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"-Please choose subject-", L"Courses", L"Grades",
					L"Maintenance problem", L"Other"
			});
			this->T5_CB->Location = System::Drawing::Point(274, 106);
			this->T5_CB->Name = L"T5_CB";
			this->T5_CB->Size = System::Drawing::Size(212, 28);
			this->T5_CB->TabIndex = 11;
			// 
			// T5_l3
			// 
			this->T5_l3->AutoSize = true;
			this->T5_l3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T5_l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T5_l3->Location = System::Drawing::Point(23, 158);
			this->T5_l3->Name = L"T5_l3";
			this->T5_l3->Size = System::Drawing::Size(228, 25);
			this->T5_l3->TabIndex = 10;
			this->T5_l3->Text = L"Describe your issue:";
			// 
			// T5_l1
			// 
			this->T5_l1->AutoSize = true;
			this->T5_l1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T5_l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T5_l1->Location = System::Drawing::Point(60, 109);
			this->T5_l1->Name = L"T5_l1";
			this->T5_l1->Size = System::Drawing::Size(191, 25);
			this->T5_l1->TabIndex = 9;
			this->T5_l1->Text = L"Problem Subject:";
			// 
			// T5_l2
			// 
			this->T5_l2->AutoSize = true;
			this->T5_l2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T5_l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T5_l2->Location = System::Drawing::Point(241, 19);
			this->T5_l2->Name = L"T5_l2";
			this->T5_l2->Size = System::Drawing::Size(229, 39);
			this->T5_l2->TabIndex = 8;
			this->T5_l2->Text = L"Enter Details";
			// 
			// T6_UserHistory
			// 
			this->T6_UserHistory->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T6_UserHistory->Controls->Add(this->T6_P);
			this->T6_UserHistory->Controls->Add(this->T6_DGV);
			this->T6_UserHistory->Controls->Add(this->T6_l2);
			this->T6_UserHistory->Location = System::Drawing::Point(4, 5);
			this->T6_UserHistory->Name = L"T6_UserHistory";
			this->T6_UserHistory->Size = System::Drawing::Size(730, 411);
			this->T6_UserHistory->TabIndex = 5;
			// 
			// T6_P
			// 
			this->T6_P->BackColor = System::Drawing::Color::LightSeaGreen;
			this->T6_P->Controls->Add(this->T6_Sbutton);
			this->T6_P->Controls->Add(this->T6_CB);
			this->T6_P->Controls->Add(this->T6_L1);
			this->T6_P->Controls->Add(this->T6_TBS);
			this->T6_P->Location = System::Drawing::Point(7, 86);
			this->T6_P->Name = L"T6_P";
			this->T6_P->Size = System::Drawing::Size(710, 44);
			this->T6_P->TabIndex = 5;
			// 
			// T6_Sbutton
			// 
			this->T6_Sbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->T6_Sbutton->Cursor = System::Windows::Forms::Cursors::Default;
			this->T6_Sbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T6_Sbutton->Location = System::Drawing::Point(654, 9);
			this->T6_Sbutton->Name = L"T6_Sbutton";
			this->T6_Sbutton->Size = System::Drawing::Size(42, 30);
			this->T6_Sbutton->TabIndex = 6;
			this->T6_Sbutton->Text = L"S";
			this->T6_Sbutton->UseVisualStyleBackColor = true;
			// 
			// T6_CB
			// 
			this->T6_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T6_CB->FormattingEnabled = true;
			this->T6_CB->Location = System::Drawing::Point(489, 8);
			this->T6_CB->Name = L"T6_CB";
			this->T6_CB->Size = System::Drawing::Size(154, 33);
			this->T6_CB->TabIndex = 7;
			// 
			// T6_L1
			// 
			this->T6_L1->AutoSize = true;
			this->T6_L1->BackColor = System::Drawing::Color::Transparent;
			this->T6_L1->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T6_L1->ForeColor = System::Drawing::Color::Black;
			this->T6_L1->Location = System::Drawing::Point(333, 15);
			this->T6_L1->Name = L"T6_L1";
			this->T6_L1->Size = System::Drawing::Size(150, 24);
			this->T6_L1->TabIndex = 6;
			this->T6_L1->Text = L"User History:";
			// 
			// T6_TBS
			// 
			this->T6_TBS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T6_TBS->Location = System::Drawing::Point(3, 10);
			this->T6_TBS->Name = L"T6_TBS";
			this->T6_TBS->Size = System::Drawing::Size(324, 31);
			this->T6_TBS->TabIndex = 0;
			// 
			// T6_DGV
			// 
			this->T6_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->T6_DGV->Location = System::Drawing::Point(7, 136);
			this->T6_DGV->Name = L"T6_DGV";
			this->T6_DGV->Size = System::Drawing::Size(710, 266);
			this->T6_DGV->TabIndex = 4;
			// 
			// T6_l2
			// 
			this->T6_l2->AutoSize = true;
			this->T6_l2->BackColor = System::Drawing::Color::Transparent;
			this->T6_l2->Font = (gcnew System::Drawing::Font(L"David", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T6_l2->ForeColor = System::Drawing::Color::Black;
			this->T6_l2->Location = System::Drawing::Point(195, 25);
			this->T6_l2->Name = L"T6_l2";
			this->T6_l2->Size = System::Drawing::Size(281, 47);
			this->T6_l2->TabIndex = 3;
			this->T6_l2->Text = L"User History";
			// 
			// T7_TLogin
			// 
			this->T7_TLogin->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T7_TLogin->Controls->Add(this->T7_Button);
			this->T7_TLogin->Controls->Add(this->T7_TBPW);
			this->T7_TLogin->Controls->Add(this->T7_TBUN);
			this->T7_TLogin->Controls->Add(this->T7_l3);
			this->T7_TLogin->Controls->Add(this->T7_l2);
			this->T7_TLogin->Controls->Add(this->T7_l1);
			this->T7_TLogin->Location = System::Drawing::Point(4, 5);
			this->T7_TLogin->Name = L"T7_TLogin";
			this->T7_TLogin->Size = System::Drawing::Size(730, 411);
			this->T7_TLogin->TabIndex = 6;
			// 
			// T7_Button
			// 
			this->T7_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T7_Button->Location = System::Drawing::Point(614, 337);
			this->T7_Button->Name = L"T7_Button";
			this->T7_Button->Size = System::Drawing::Size(113, 71);
			this->T7_Button->TabIndex = 8;
			this->T7_Button->Text = L"->";
			this->T7_Button->UseVisualStyleBackColor = true;
			this->T7_Button->Click += gcnew System::EventHandler(this, &MyForm::T7_Button_Click);
			// 
			// T7_TBPW
			// 
			this->T7_TBPW->Location = System::Drawing::Point(203, 158);
			this->T7_TBPW->Name = L"T7_TBPW";
			this->T7_TBPW->PasswordChar = '*';
			this->T7_TBPW->Size = System::Drawing::Size(132, 20);
			this->T7_TBPW->TabIndex = 7;
			this->T7_TBPW->UseSystemPasswordChar = true;
			// 
			// T7_TBUN
			// 
			this->T7_TBUN->Location = System::Drawing::Point(203, 119);
			this->T7_TBUN->Name = L"T7_TBUN";
			this->T7_TBUN->Size = System::Drawing::Size(132, 20);
			this->T7_TBUN->TabIndex = 6;
			// 
			// T7_l3
			// 
			this->T7_l3->AutoSize = true;
			this->T7_l3->BackColor = System::Drawing::Color::Transparent;
			this->T7_l3->Font = (gcnew System::Drawing::Font(L"David", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T7_l3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T7_l3->Location = System::Drawing::Point(76, 158);
			this->T7_l3->Name = L"T7_l3";
			this->T7_l3->Size = System::Drawing::Size(104, 20);
			this->T7_l3->TabIndex = 5;
			this->T7_l3->Text = L"Password:";
			// 
			// T7_l2
			// 
			this->T7_l2->AutoSize = true;
			this->T7_l2->BackColor = System::Drawing::Color::Transparent;
			this->T7_l2->Font = (gcnew System::Drawing::Font(L"David", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T7_l2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T7_l2->Location = System::Drawing::Point(70, 119);
			this->T7_l2->Name = L"T7_l2";
			this->T7_l2->Size = System::Drawing::Size(110, 20);
			this->T7_l2->TabIndex = 4;
			this->T7_l2->Text = L"UserName:";
			// 
			// T7_l1
			// 
			this->T7_l1->AutoSize = true;
			this->T7_l1->BackColor = System::Drawing::Color::Transparent;
			this->T7_l1->Font = (gcnew System::Drawing::Font(L"David", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T7_l1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T7_l1->Location = System::Drawing::Point(66, 19);
			this->T7_l1->Name = L"T7_l1";
			this->T7_l1->Size = System::Drawing::Size(583, 47);
			this->T7_l1->TabIndex = 3;
			this->T7_l1->Text = L"Enter Technician Password";
			// 
			// T8_TMenu
			// 
			this->T8_TMenu->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T8_TMenu->Controls->Add(this->T8_TAButton);
			this->T8_TMenu->Controls->Add(this->T8_TLButton);
			this->T8_TMenu->Controls->Add(this->T8_l1);
			this->T8_TMenu->Location = System::Drawing::Point(4, 5);
			this->T8_TMenu->Name = L"T8_TMenu";
			this->T8_TMenu->Size = System::Drawing::Size(730, 411);
			this->T8_TMenu->TabIndex = 7;
			// 
			// T8_l1
			// 
			this->T8_l1->AutoSize = true;
			this->T8_l1->BackColor = System::Drawing::Color::Transparent;
			this->T8_l1->Font = (gcnew System::Drawing::Font(L"David", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T8_l1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T8_l1->Location = System::Drawing::Point(141, 18);
			this->T8_l1->Name = L"T8_l1";
			this->T8_l1->Size = System::Drawing::Size(372, 47);
			this->T8_l1->TabIndex = 3;
			this->T8_l1->Text = L"Technician menu";
			// 
			// T8_TLButton
			// 
			this->T8_TLButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T8_TLButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T8_TLButton->Location = System::Drawing::Point(85, 107);
			this->T8_TLButton->Name = L"T8_TLButton";
			this->T8_TLButton->Size = System::Drawing::Size(208, 51);
			this->T8_TLButton->TabIndex = 4;
			this->T8_TLButton->Text = L"Tickets List";
			this->T8_TLButton->UseVisualStyleBackColor = true;
			// 
			// T8_TAButton
			// 
			this->T8_TAButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T8_TAButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T8_TAButton->Location = System::Drawing::Point(389, 107);
			this->T8_TAButton->Name = L"T8_TAButton";
			this->T8_TAButton->Size = System::Drawing::Size(245, 51);
			this->T8_TAButton->TabIndex = 5;
			this->T8_TAButton->Text = L"Ticket Analysis";
			this->T8_TAButton->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(882, 597);
			this->Controls->Add(this->TabCon);
			this->Controls->Add(this->ShortBox);
			this->Controls->Add(this->Title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ShortBox->ResumeLayout(false);
			this->ShortBox->PerformLayout();
			this->TabCon->ResumeLayout(false);
			this->T1WelTab->ResumeLayout(false);
			this->T1WelTab->PerformLayout();
			this->T2LoginTab->ResumeLayout(false);
			this->T2LoginTab->PerformLayout();
			this->T3UserMenu->ResumeLayout(false);
			this->T3UserMenu->PerformLayout();
			this->T4NewAccount->ResumeLayout(false);
			this->T4NewAccount->PerformLayout();
			this->T5_NewTicket->ResumeLayout(false);
			this->T5_NewTicket->PerformLayout();
			this->T6_UserHistory->ResumeLayout(false);
			this->T6_UserHistory->PerformLayout();
			this->T6_P->ResumeLayout(false);
			this->T6_P->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->T6_DGV))->EndInit();
			this->T7_TLogin->ResumeLayout(false);
			this->T7_TLogin->PerformLayout();
			this->T8_TMenu->ResumeLayout(false);
			this->T8_TMenu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginButton_Click(System::Object^  sender, System::EventArgs^  e) {
		TabCon->SelectedIndex=1;
		ShortLabel->Text = "Login";
		loginButton->Visible = false;
		TecButton->Visible = false;
		MainButton->Visible = true;
	}
private: System::Void MainButton_Click(System::Object^  sender, System::EventArgs^  e) {
	TabCon->SelectedIndex = 0;
	ShortLabel->Text = "Menu";
	loginButton->Visible = true;
	TecButton->Visible = true;
	MainButton->Visible = false;
}
private: System::Void T2_LoginButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Verify_ID_and_Password())
	{
		TabCon->SelectedIndex = 2;
		ShortLabel->Text = "User Menu";
	}	
}
bool Verify_ID_and_Password()
{
	
	if (!CheckPassword())
	{
		return false;
	}
	string pass;
	MarshalString(T2_TBPW->Text, pass);
	string Id;
	MarshalString(T2_TBID->Text, Id);
	string line;
	string flag;
	ifstream myfile("New.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			flag = line.substr(line.find(':') + 1, line.length());
			if (CheckID(Id, flag) == true) //Checks if the user is already existing in the program
			{
				getline(myfile, line);
				/*		flag = line.substr(line.find(':') + 1, line.length())
				name = flag;*/
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				flag = line.substr(line.find(':') + 1, line.length());
					if (Verify_Password(flag, pass) == true)
					{
						MessageBox::Show("Connected");
						myfile.close();
						m_id = gcnew String(Id.c_str());
						return true;
					}
					else
					{
						MessageBox::Show("Incorrect password");
						myfile.close();
						return false;
					}
			}
		}
		myfile.close();
	}
	MessageBox::Show("User not found");

	return false;
}
bool Verify_Password(string CheckPass, string Pass)
{
	{
		if (CheckPass == Pass)
		{
			return true;
		}
		return false;
	}
}
bool CheckPassword()
{
	string password;
	if(TabCon->SelectedIndex==1)
		MarshalString(T2_TBPW->Text, password);
	else if (TabCon->SelectedIndex == 3)
		MarshalString(T4_TBPW->Text, password);
	while (password.length() < 8)
	{
		//cout << "Your password is too short,please try again" << endl;
		//cin >> password;
		MessageBox::Show("Your password is too short,please try again");
		return false;
	}
	while (password.length() > 8)
	{
		MessageBox::Show("Your password is too long,please try again");

		//cout << "Your password is too long,please try again" << endl;
		//cin >> password;
		return false;
	}
	while (!(password.find("!") == string::npos) || !(password.find("@") == string::npos) || !(password.find("#") == string::npos) || !(password.find("$") == string::npos) || !(password.find("%") == string::npos) || !(password.find("^") == string::npos) || !(password.find("&") == string::npos) || !(password.find("*") == string::npos) || !(password.find("(") == string::npos) || !(password.find(")") == string::npos) || !(password.find("-") == string::npos) || !(password.find("+") == string::npos) || !(password.find("_") == string::npos) || !(password.find("=") == string::npos) || !(password.find(".") == string::npos) || !(password.find("[") == string::npos) || !(password.find("]") == string::npos))
	{
		MessageBox::Show("You have selected a password that contains a bad character, please try again");

		//cout << "You have selected a password that contains a bad character, please try again" << endl;
		//cin >> password;
		return false;
	}
	return true;
}
bool CheckID(string New_U, string Excist_U)
{
	if (New_U == Excist_U)
	{
		return true;
	}
	return false;
}
void MarshalString(String ^ s, string& os) //String ^ to string
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

private: System::Void T3_PButt_Click(System::Object^  sender, System::EventArgs^  e) {
	//TabCon->SelectedIndex = 1;
}
private: System::Void T2_ButNew_Click(System::Object^  sender, System::EventArgs^  e) {
	TabCon->SelectedIndex = 3;
	ShortLabel->Text = "New Account";
}
private: System::Void T4_ButtonF_Click(System::Object^  sender, System::EventArgs^  e) {
	//Register function
	string user;
	MarshalString(T4_TBID->Text, user);
	if (Create_User(user))
	{
		TabCon->SelectedIndex = 2;
		m_id = gcnew String(user.c_str());
		MessageBox::Show("User has been registered in our system ! :)");

	}
}
bool Create_User(string New_User)
{
	string line;
	string flag;
	string HOLD;//hold will hold all the text content as a string
	ifstream myfile("New.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			HOLD.append(line);
			HOLD.append("\n");
			flag = line.substr(line.find(':') + 1, line.length());
			if (CheckID(New_User, flag) == true) //Checks if the user is already existing in the program
			{

				MessageBox::Show("The ID is already existing in the system");
				return false;
			}
		}
		if (!Register(New_User, HOLD))//Register a new user
		{
			return false;
		}
		myfile.close();
	}
	return true;
}
bool Register(string New_User, string hold)
{
	int i = 0;
	string temp, temp1;
	string ID = "ID:", Name = "Full Name:", Email = "Email:", PhoneNum = "Phone Number:", Pass = "Password:";
	ofstream myfile("New.txt");
	if (CheckPassword()) // check if the password that chose by the user is under our conditions
	{
		MessageBox::Show("Invalid Password,try again");
		return false;
	}
	MarshalString(T4_TBE->Text, temp);
	if (CheckEmail(temp, hold) == true) //checks if the email is Under our conditions
	{
		MessageBox::Show("Invalid email,try again");
		return false;
	}
	if (myfile.is_open())
	{

		myfile << hold; //enter the content of the file that was open before into a new file
		myfile << "------------------------------------------\n";
		myfile << ID;
		myfile << New_User; // enter the new user
		myfile << "\n";
		myfile << Name; // enter his first name
		MarshalString(T4_TBFN->Text, temp);
		MarshalString(T4_TBLN->Text, temp1);
		temp.append(" ");
		temp.append(temp1);
		myfile << temp;
		myfile << "\n";
		myfile << Email;
		MarshalString(T4_TBE->Text, temp);
		myfile << temp;
		myfile << "\n";
		myfile << PhoneNum;
		temp = PhonePrefix(T4_CB->SelectedIndex); //chose the prefix of the user phone
		MarshalString(T4_TBPN->Text, temp1);
		temp.append(temp1);
		myfile << temp;
		myfile << "\n";
		myfile << Pass;	
		MarshalString(T4_TBPW->Text, temp);
		myfile << temp;
		myfile << "\n";
		myfile.close();
	}
	MessageBox::Show("Cant connect to database!");
	return false;
}
bool CheckEmail(string email, string hold)
{
	if (email.length() < 10)
	{
		return true;
	}
	if ((email.find("@") == string::npos)) //checks if there is no '@' on the email string
	{
		return true;
	}
	if ((email.find(".com") == string::npos) && (email.find(".net") == string::npos) && (email.find(".org") == string::npos) && (email.find(".edu") == string::npos))
	{
		return true;
	}
	string s1 = hold;
	string s2 = email;
	if (strstr(s1.c_str(), s2.c_str())) // checks if there is already such a email
	{
		return true;//" S1 Contains S2";
	}
	return false;
}
string PhonePrefix(int prefix)
{
	if (prefix == 0)
	{
		return "050-";
	}
	if (prefix == 1)
	{
		return "052-";
	}
	if (prefix == 2)
	{
		return "054-";
	}
	return "0xx";
}
private: System::Void T3_NTbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	TabCon->SelectedIndex = 4;
}
private: System::Void T5_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (T5_CB->SelectedIndex == 0 || T5_RTB->Text == "")
	{
		MessageBox::Show("Please fill our form!");
	}
	else
	{
		//NEED HELP
		string user;
		MarshalString(m_id, user);
		create_new_ticket(user);
		MessageBox::Show("Thank you! Your call is now saved in the system.We will contact you soon!");
		TabCon->SelectedIndex = 2;
	}
}
void update_database(string id, string subject, string status, string date, string description) //database update function
{
	string fullname, id1;
	string line;

	ofstream tickets("ticket_database.txt", ofstream::out | ofstream::app);
	tickets << "------------------------------------------" << endl;
	tickets << "ID:" << id << endl;
	tickets << "Subject:" << subject << endl;
	tickets << "Status:" << status << endl;
	tickets << "Date:" << date << endl;
	tickets << "Description:" << description << endl;

	tickets.close(); // close ticket
}
void create_new_ticket(string id) //creating new ticket function
{
	string description = " ";
	string status = "new";
	string subject = " ";
	string date = getTimeStr();

	int choice = T5_CB->SelectedIndex;


	switch (choice)
	{

		case 1://[1]  Courses
		{
			subject = "Courses";
			MarshalString(T5_RTB->Text, description);
			update_database(id, subject, status, date, description);

			break;
		}

		case 2://[2]  Grades
		{
			subject = "Grades";

			MarshalString(T5_RTB->Text, description);
			update_database(id, subject, status, date, description);
			break;
		}

		case 3://[3]  Maintenance problem
		{
			subject = "Maintenance_problem";

			MarshalString(T5_RTB->Text, description);
			update_database(id, subject, status, date, description);
			break;
		}

		case 4://[4]  Other
		{
			subject = "Other";

			MarshalString(T5_RTB->Text, description);
			update_database(id, subject, status, date, description);
			break;
		}
	}

	
}
string getTimeStr() //date & time function
{
	time_t now = chrono::system_clock::to_time_t(chrono::system_clock::now());
	string s(11, '\0');
	strftime(&s[0], s.size(), "%d-%m-%Y", std::localtime(&now));
	return s;
}
private: System::Void T3_UHbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	TabCon->SelectedIndex = 5;
	ShortLabel->Text = "User History";

}
private: System::Void TecButton_Click(System::Object^  sender, System::EventArgs^  e) {
	TabCon->SelectedIndex = 6;
	ShortLabel->Text = "Technician Login";
}
private: System::Void T7_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	string user, password;
	MarshalString(T7_TBUN->Text, user);
	MarshalString(T7_TBPW->Text, password);
	if (Technician_Login(user, password))
	{
		TabCon->SelectedIndex = 7;
		ShortLabel->Text = "T-Menu";
	}
}
bool Technician_Login(string ID, string Password)
{
	string line;
	string flag;
	ifstream myfile("Technician_database.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			flag = line.substr(line.find(':') + 1, line.length());
			if (CheckID(ID, flag) == true) //Checks if the user is already existing in the program
			{
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				flag = line.substr(line.find(':') + 1, line.length());
				if (Verify_Password(flag, Password) == true)
				{
					MessageBox::Show("Connected");
					m_id = gcnew String(ID.c_str());
					return true;
				}
				else
				{
					MessageBox::Show("Incorrect password");
					myfile.close();
					return false;
				}
			}
			
		}
		myfile.close();
		MessageBox::Show("No user found in the database!");
		return false;
	}
	MessageBox::Show("No database to connect!");
	return false;
}
};
}
//user
//ID: 324201600
//Password: 56489944
//technician
//id: 205490170
//pw: 12345678
//Profession:Maintenance
