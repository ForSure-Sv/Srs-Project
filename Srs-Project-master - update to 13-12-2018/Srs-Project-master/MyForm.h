#pragma once
#include <string>
#include <fstream>
#include <chrono>
#include <ctime>
#include <vector>
#include <sstream>

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
			SetUpTables();
			for (int i = 0; i < 4; i++)
			{
				m_SubUrgArray[i] = gcnew cli::array<Int32>(4);
			}
			//
			//TODO: Add the constructor code here
			//
		}
	private: void SetUpTables()
	{
		m_UserTable = gcnew DataTable();
		m_UserTable->Columns->Add("Date", DateTime::typeid);
		m_UserTable->Columns->Add("Subject", String::typeid);
		m_UserTable->Columns->Add("Status", String::typeid);
		m_UserTable->Columns->Add("Ticket Number", Int32::typeid);
		T6_DGV->BorderStyle = BorderStyle::None;
		T6_DGV->AlternatingRowsDefaultCellStyle->BackColor = Color::FromArgb(238, 239, 249);
		T6_DGV->CellBorderStyle = DataGridViewCellBorderStyle::SingleHorizontal;
		T6_DGV->DefaultCellStyle->SelectionBackColor = Color::DarkTurquoise;
		T6_DGV->DefaultCellStyle->SelectionForeColor = Color::WhiteSmoke;
		T6_DGV->BackgroundColor = Color::White;

		T6_DGV->EnableHeadersVisualStyles = false;
		T6_DGV->ColumnHeadersBorderStyle = DataGridViewHeaderBorderStyle::None;
		T6_DGV->ColumnHeadersDefaultCellStyle->BackColor = Color::FromArgb(20, 25, 72);
		T6_DGV->ColumnHeadersDefaultCellStyle->ForeColor = Color::White;

		m_TecTable = gcnew DataTable();
		m_TecTable->Columns->Add("Date", DateTime::typeid);
		m_TecTable->Columns->Add("Subject", String::typeid);
		m_TecTable->Columns->Add("User Name", String::typeid);
		m_TecTable->Columns->Add("ID", Int32::typeid);
		m_TecTable->Columns->Add("Status", String::typeid);
		m_TecTable->Columns->Add("Urgency", String::typeid);
		m_TecTable->Columns->Add("Ticket Number", Int32::typeid);

		T9_DGV->BorderStyle = BorderStyle::None;
		T9_DGV->AlternatingRowsDefaultCellStyle->BackColor = Color::FromArgb(238, 239, 249);
		T9_DGV->CellBorderStyle = DataGridViewCellBorderStyle::SingleHorizontal;
		T9_DGV->DefaultCellStyle->SelectionBackColor = Color::DarkTurquoise;
		T9_DGV->DefaultCellStyle->SelectionForeColor = Color::WhiteSmoke;
		T9_DGV->BackgroundColor = Color::White;

		T9_DGV->EnableHeadersVisualStyles = false;
		T9_DGV->ColumnHeadersBorderStyle = DataGridViewHeaderBorderStyle::None;
		T9_DGV->ColumnHeadersDefaultCellStyle->BackColor = Color::FromArgb(20, 25, 72);
		T9_DGV->ColumnHeadersDefaultCellStyle->ForeColor = Color::White;

		T6_DGV->DataSource = m_UserTable;
		T9_DGV->DataSource = m_TecTable;
	}
	
	private: System::Windows::Forms::Button^  T3_NTbutton;
	public:
	private: cli::array<Int32>^ m_SubjectArray=gcnew cli::array<Int32>(4);
	private: cli::array<Int32>^ m_UrgencyArray = gcnew cli::array<Int32>(4);
	private: cli::array<cli::array<Int32>^>^ m_SubUrgArray = gcnew cli::array< cli::array<Int32>^ >(4);
	private: String^ m_id;
	private: DataTable^ m_UserTable;
	private: DataTable^ m_TecTable;
	private: System::Windows::Forms::Label^  T3_l1;
	private: System::Windows::Forms::Button^  T3_UHbutton;

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
	private: System::Windows::Forms::TabPage^  T9_TicketsList;
	private: System::Windows::Forms::DataGridView^  T9_DGV;
	private: System::Windows::Forms::Panel^  T9_P;
private: System::Windows::Forms::Button^  T9_SButton;

	private: System::Windows::Forms::ComboBox^  T9_CBF;
	private: System::Windows::Forms::TextBox^  T9_TBSearch;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  T10_TicketsAn;
	private: System::Windows::Forms::Button^  TMenuButton;
	private: System::Windows::Forms::Label^  T10_l1;
private: System::Windows::Forms::TabPage^  T11_TicketReview;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::TableLayoutPanel^  T11_TLP;
private: System::Windows::Forms::Label^  T11_l1;
private: System::Windows::Forms::Label^  T11_l2;
private: System::Windows::Forms::Label^  T11_l3;
private: System::Windows::Forms::Label^  T11_l4;
private: System::Windows::Forms::Label^  T11_l5;
private: System::Windows::Forms::Label^  T11_l6;
private: System::Windows::Forms::Label^  T11_l7;

private: System::Windows::Forms::Label^  T11_TNlabel;
private: System::Windows::Forms::Label^  T11_l9;
private: System::Windows::Forms::Label^  T11_Desc;
private: System::Windows::Forms::Label^  T11_Subject;
private: System::Windows::Forms::Label^  T11_Date;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
private: System::Windows::Forms::Label^  T11_PN;
private: System::Windows::Forms::Label^  T11_Department;
private: System::Windows::Forms::Label^  T11_EMAIL;
private: System::Windows::Forms::Label^  T11_ID;

private: System::Windows::Forms::Label^  T11_FN;
private: System::Windows::Forms::Label^  T11_l10;

private: System::Windows::Forms::Label^  T11_l12;
private: System::Windows::Forms::Label^  T11_l13;
private: System::Windows::Forms::Label^  T11_l14;
private: System::Windows::Forms::Label^  T11_l15;
private: System::Windows::Forms::ComboBox^  T11_UrgencyCB;



private: System::Windows::Forms::ComboBox^  T11_StatusCB;
private: System::Windows::Forms::Button^  T9_RButton;
private: System::Windows::Forms::RichTextBox^  T11_AT;
private: System::Windows::Forms::Button^  T11_Back;
private: System::Windows::Forms::Button^  T6_RButton;
private: System::Windows::Forms::Button^  TS_BackUser;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  T11_Chart;
private: System::Windows::Forms::Button^  T10_Update;
private: System::Windows::Forms::ComboBox^  T10_MCB;

private: System::Windows::Forms::Label^  T10_L3;
private: System::Windows::Forms::RichTextBox^  T10_RTB;
private: System::Windows::Forms::Label^  T10_l2;
private: System::Windows::Forms::Button^  T11_UButton;
private: System::Windows::Forms::Panel^  T10_PRB;
private: System::Windows::Forms::RadioButton^  T10_RB3;
private: System::Windows::Forms::RadioButton^  T10_RB2;
private: System::Windows::Forms::RadioButton^  T10_RB1;











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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^  title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Title = (gcnew System::Windows::Forms::Label());
			this->ShortBox = (gcnew System::Windows::Forms::GroupBox());
			this->TS_BackUser = (gcnew System::Windows::Forms::Button());
			this->TMenuButton = (gcnew System::Windows::Forms::Button());
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
			this->T6_RButton = (gcnew System::Windows::Forms::Button());
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
			this->T8_TAButton = (gcnew System::Windows::Forms::Button());
			this->T8_TLButton = (gcnew System::Windows::Forms::Button());
			this->T8_l1 = (gcnew System::Windows::Forms::Label());
			this->T9_TicketsList = (gcnew System::Windows::Forms::TabPage());
			this->T9_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->T9_P = (gcnew System::Windows::Forms::Panel());
			this->T9_RButton = (gcnew System::Windows::Forms::Button());
			this->T9_SButton = (gcnew System::Windows::Forms::Button());
			this->T9_CBF = (gcnew System::Windows::Forms::ComboBox());
			this->T9_TBSearch = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->T10_TicketsAn = (gcnew System::Windows::Forms::TabPage());
			this->T10_PRB = (gcnew System::Windows::Forms::Panel());
			this->T10_RB3 = (gcnew System::Windows::Forms::RadioButton());
			this->T10_RB2 = (gcnew System::Windows::Forms::RadioButton());
			this->T10_RB1 = (gcnew System::Windows::Forms::RadioButton());
			this->T10_Update = (gcnew System::Windows::Forms::Button());
			this->T10_MCB = (gcnew System::Windows::Forms::ComboBox());
			this->T10_L3 = (gcnew System::Windows::Forms::Label());
			this->T10_RTB = (gcnew System::Windows::Forms::RichTextBox());
			this->T10_l2 = (gcnew System::Windows::Forms::Label());
			this->T11_Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->T10_l1 = (gcnew System::Windows::Forms::Label());
			this->T11_TicketReview = (gcnew System::Windows::Forms::TabPage());
			this->T11_UButton = (gcnew System::Windows::Forms::Button());
			this->T11_Back = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->T11_TNlabel = (gcnew System::Windows::Forms::Label());
			this->T11_l9 = (gcnew System::Windows::Forms::Label());
			this->T11_TLP = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->T11_UrgencyCB = (gcnew System::Windows::Forms::ComboBox());
			this->T11_Desc = (gcnew System::Windows::Forms::Label());
			this->T11_Subject = (gcnew System::Windows::Forms::Label());
			this->T11_Date = (gcnew System::Windows::Forms::Label());
			this->T11_l1 = (gcnew System::Windows::Forms::Label());
			this->T11_l2 = (gcnew System::Windows::Forms::Label());
			this->T11_l3 = (gcnew System::Windows::Forms::Label());
			this->T11_l4 = (gcnew System::Windows::Forms::Label());
			this->T11_l5 = (gcnew System::Windows::Forms::Label());
			this->T11_l6 = (gcnew System::Windows::Forms::Label());
			this->T11_l7 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->T11_PN = (gcnew System::Windows::Forms::Label());
			this->T11_Department = (gcnew System::Windows::Forms::Label());
			this->T11_EMAIL = (gcnew System::Windows::Forms::Label());
			this->T11_ID = (gcnew System::Windows::Forms::Label());
			this->T11_FN = (gcnew System::Windows::Forms::Label());
			this->T11_l10 = (gcnew System::Windows::Forms::Label());
			this->T11_l12 = (gcnew System::Windows::Forms::Label());
			this->T11_l13 = (gcnew System::Windows::Forms::Label());
			this->T11_l14 = (gcnew System::Windows::Forms::Label());
			this->T11_l15 = (gcnew System::Windows::Forms::Label());
			this->T11_StatusCB = (gcnew System::Windows::Forms::ComboBox());
			this->T11_AT = (gcnew System::Windows::Forms::RichTextBox());
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
			this->T9_TicketsList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->T9_DGV))->BeginInit();
			this->T9_P->SuspendLayout();
			this->T10_TicketsAn->SuspendLayout();
			this->T10_PRB->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->T11_Chart))->BeginInit();
			this->T11_TicketReview->SuspendLayout();
			this->panel1->SuspendLayout();
			this->T11_TLP->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
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
			this->ShortBox->Controls->Add(this->TS_BackUser);
			this->ShortBox->Controls->Add(this->TMenuButton);
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
			// TS_BackUser
			// 
			this->TS_BackUser->BackColor = System::Drawing::Color::Transparent;
			this->TS_BackUser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TS_BackUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TS_BackUser->Location = System::Drawing::Point(15, 232);
			this->TS_BackUser->Name = L"TS_BackUser";
			this->TS_BackUser->Size = System::Drawing::Size(109, 87);
			this->TS_BackUser->TabIndex = 5;
			this->TS_BackUser->Text = L"Back to User menu";
			this->TS_BackUser->UseVisualStyleBackColor = false;
			this->TS_BackUser->Visible = false;
			this->TS_BackUser->Click += gcnew System::EventHandler(this, &MyForm::TS_BackUser_Click);
			// 
			// TMenuButton
			// 
			this->TMenuButton->BackColor = System::Drawing::Color::Transparent;
			this->TMenuButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TMenuButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TMenuButton->Location = System::Drawing::Point(15, 232);
			this->TMenuButton->Name = L"TMenuButton";
			this->TMenuButton->Size = System::Drawing::Size(109, 87);
			this->TMenuButton->TabIndex = 4;
			this->TMenuButton->Text = L"Back to\r\nTechnician menu";
			this->TMenuButton->UseVisualStyleBackColor = false;
			this->TMenuButton->Visible = false;
			this->TMenuButton->Click += gcnew System::EventHandler(this, &MyForm::TMenuButton_Click);
			// 
			// MainButton
			// 
			this->MainButton->BackColor = System::Drawing::Color::Transparent;
			this->MainButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MainButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainButton->Location = System::Drawing::Point(15, 336);
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
			this->TabCon->Controls->Add(this->T9_TicketsList);
			this->TabCon->Controls->Add(this->T10_TicketsAn);
			this->TabCon->Controls->Add(this->T11_TicketReview);
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
			this->T2_TBPW->Text = L"56489944";
			this->T2_TBPW->UseSystemPasswordChar = true;
			// 
			// T2_TBID
			// 
			this->T2_TBID->Location = System::Drawing::Point(234, 122);
			this->T2_TBID->Name = L"T2_TBID";
			this->T2_TBID->Size = System::Drawing::Size(138, 20);
			this->T2_TBID->TabIndex = 5;
			this->T2_TBID->Text = L"324201600";
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
			this->T4_CB->Text = L"xxx";
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
			this->T5_CB->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Courses", L"Grades", L"Maintenance problem", L"Other" });
			this->T5_CB->Location = System::Drawing::Point(274, 106);
			this->T5_CB->Name = L"T5_CB";
			this->T5_CB->Size = System::Drawing::Size(212, 28);
			this->T5_CB->TabIndex = 11;
			this->T5_CB->Text = L"-Please choose subject-";
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
			this->T6_P->Controls->Add(this->T6_RButton);
			this->T6_P->Controls->Add(this->T6_Sbutton);
			this->T6_P->Controls->Add(this->T6_CB);
			this->T6_P->Controls->Add(this->T6_L1);
			this->T6_P->Controls->Add(this->T6_TBS);
			this->T6_P->Location = System::Drawing::Point(7, 86);
			this->T6_P->Name = L"T6_P";
			this->T6_P->Size = System::Drawing::Size(710, 44);
			this->T6_P->TabIndex = 5;
			// 
			// T6_RButton
			// 
			this->T6_RButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->T6_RButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->T6_RButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T6_RButton->Location = System::Drawing::Point(623, 11);
			this->T6_RButton->Name = L"T6_RButton";
			this->T6_RButton->Size = System::Drawing::Size(42, 30);
			this->T6_RButton->TabIndex = 8;
			this->T6_RButton->Text = L"R";
			this->T6_RButton->UseVisualStyleBackColor = true;
			this->T6_RButton->Click += gcnew System::EventHandler(this, &MyForm::T6_RButton_Click);
			// 
			// T6_Sbutton
			// 
			this->T6_Sbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->T6_Sbutton->Cursor = System::Windows::Forms::Cursors::Default;
			this->T6_Sbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T6_Sbutton->Location = System::Drawing::Point(665, 11);
			this->T6_Sbutton->Name = L"T6_Sbutton";
			this->T6_Sbutton->Size = System::Drawing::Size(42, 30);
			this->T6_Sbutton->TabIndex = 6;
			this->T6_Sbutton->Text = L"S";
			this->T6_Sbutton->UseVisualStyleBackColor = true;
			this->T6_Sbutton->Click += gcnew System::EventHandler(this, &MyForm::T6_Sbutton_Click);
			// 
			// T6_CB
			// 
			this->T6_CB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->T6_CB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T6_CB->FormattingEnabled = true;
			this->T6_CB->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Subject", L"Status", L"Date" });
			this->T6_CB->Location = System::Drawing::Point(463, 8);
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
			this->T6_L1->Location = System::Drawing::Point(361, 13);
			this->T6_L1->Name = L"T6_L1";
			this->T6_L1->Size = System::Drawing::Size(108, 24);
			this->T6_L1->TabIndex = 6;
			this->T6_L1->Text = L"Filter by:";
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
			this->T6_DGV->AllowUserToAddRows = false;
			this->T6_DGV->AllowUserToDeleteRows = false;
			this->T6_DGV->AllowUserToOrderColumns = true;
			this->T6_DGV->AllowUserToResizeRows = false;
			this->T6_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->T6_DGV->DefaultCellStyle = dataGridViewCellStyle1;
			this->T6_DGV->Location = System::Drawing::Point(7, 136);
			this->T6_DGV->Name = L"T6_DGV";
			this->T6_DGV->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(0, 4, 0, 0);
			this->T6_DGV->Size = System::Drawing::Size(710, 266);
			this->T6_DGV->TabIndex = 4;
			this->T6_DGV->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::T6_DGV_CellDoubleClick);
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
			this->T8_TAButton->Click += gcnew System::EventHandler(this, &MyForm::T8_TAButton_Click);
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
			this->T8_TLButton->Click += gcnew System::EventHandler(this, &MyForm::T8_TLButton_Click);
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
			// T9_TicketsList
			// 
			this->T9_TicketsList->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T9_TicketsList->Controls->Add(this->T9_DGV);
			this->T9_TicketsList->Controls->Add(this->T9_P);
			this->T9_TicketsList->Controls->Add(this->label1);
			this->T9_TicketsList->Location = System::Drawing::Point(4, 5);
			this->T9_TicketsList->Name = L"T9_TicketsList";
			this->T9_TicketsList->Size = System::Drawing::Size(730, 411);
			this->T9_TicketsList->TabIndex = 8;
			// 
			// T9_DGV
			// 
			this->T9_DGV->AllowUserToAddRows = false;
			this->T9_DGV->AllowUserToDeleteRows = false;
			this->T9_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->T9_DGV->Location = System::Drawing::Point(7, 102);
			this->T9_DGV->Name = L"T9_DGV";
			this->T9_DGV->Size = System::Drawing::Size(710, 300);
			this->T9_DGV->TabIndex = 5;
			this->T9_DGV->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::T9_DGV_CellDoubleClick);
			// 
			// T9_P
			// 
			this->T9_P->BackColor = System::Drawing::Color::LimeGreen;
			this->T9_P->Controls->Add(this->T9_RButton);
			this->T9_P->Controls->Add(this->T9_SButton);
			this->T9_P->Controls->Add(this->T9_CBF);
			this->T9_P->Controls->Add(this->T9_TBSearch);
			this->T9_P->Controls->Add(this->label2);
			this->T9_P->Location = System::Drawing::Point(-4, 52);
			this->T9_P->Name = L"T9_P";
			this->T9_P->Size = System::Drawing::Size(734, 44);
			this->T9_P->TabIndex = 4;
			// 
			// T9_RButton
			// 
			this->T9_RButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->T9_RButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->T9_RButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T9_RButton->Location = System::Drawing::Point(648, 8);
			this->T9_RButton->Name = L"T9_RButton";
			this->T9_RButton->Size = System::Drawing::Size(42, 30);
			this->T9_RButton->TabIndex = 10;
			this->T9_RButton->Text = L"R";
			this->T9_RButton->UseVisualStyleBackColor = true;
			this->T9_RButton->Click += gcnew System::EventHandler(this, &MyForm::T9_RButton_Click);
			// 
			// T9_SButton
			// 
			this->T9_SButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->T9_SButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->T9_SButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T9_SButton->Location = System::Drawing::Point(689, 8);
			this->T9_SButton->Name = L"T9_SButton";
			this->T9_SButton->Size = System::Drawing::Size(42, 30);
			this->T9_SButton->TabIndex = 8;
			this->T9_SButton->Text = L"S";
			this->T9_SButton->UseVisualStyleBackColor = true;
			this->T9_SButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// T9_CBF
			// 
			this->T9_CBF->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->T9_CBF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T9_CBF->FormattingEnabled = true;
			this->T9_CBF->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Urgency", L"Date", L"Status" });
			this->T9_CBF->Location = System::Drawing::Point(488, 5);
			this->T9_CBF->Name = L"T9_CBF";
			this->T9_CBF->Size = System::Drawing::Size(154, 33);
			this->T9_CBF->TabIndex = 8;
			// 
			// T9_TBSearch
			// 
			this->T9_TBSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T9_TBSearch->Location = System::Drawing::Point(11, 6);
			this->T9_TBSearch->Name = L"T9_TBSearch";
			this->T9_TBSearch->Size = System::Drawing::Size(357, 29);
			this->T9_TBSearch->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"David", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(374, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 24);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Filter by:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"David", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(218, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 47);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Tickets List";
			// 
			// T10_TicketsAn
			// 
			this->T10_TicketsAn->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T10_TicketsAn->Controls->Add(this->T10_PRB);
			this->T10_TicketsAn->Controls->Add(this->T10_Update);
			this->T10_TicketsAn->Controls->Add(this->T10_MCB);
			this->T10_TicketsAn->Controls->Add(this->T10_L3);
			this->T10_TicketsAn->Controls->Add(this->T10_RTB);
			this->T10_TicketsAn->Controls->Add(this->T10_l2);
			this->T10_TicketsAn->Controls->Add(this->T11_Chart);
			this->T10_TicketsAn->Controls->Add(this->T10_l1);
			this->T10_TicketsAn->Location = System::Drawing::Point(4, 5);
			this->T10_TicketsAn->Name = L"T10_TicketsAn";
			this->T10_TicketsAn->Size = System::Drawing::Size(730, 411);
			this->T10_TicketsAn->TabIndex = 9;
			// 
			// T10_PRB
			// 
			this->T10_PRB->Controls->Add(this->T10_RB3);
			this->T10_PRB->Controls->Add(this->T10_RB2);
			this->T10_PRB->Controls->Add(this->T10_RB1);
			this->T10_PRB->Location = System::Drawing::Point(7, 97);
			this->T10_PRB->Name = L"T10_PRB";
			this->T10_PRB->Size = System::Drawing::Size(131, 70);
			this->T10_PRB->TabIndex = 10;
			// 
			// T10_RB3
			// 
			this->T10_RB3->AutoSize = true;
			this->T10_RB3->Location = System::Drawing::Point(4, 49);
			this->T10_RB3->Name = L"T10_RB3";
			this->T10_RB3->Size = System::Drawing::Size(104, 17);
			this->T10_RB3->TabIndex = 2;
			this->T10_RB3->TabStop = true;
			this->T10_RB3->Text = L"Subject-Urgency";
			this->T10_RB3->UseVisualStyleBackColor = true;
			this->T10_RB3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::T10_RB3_CheckedChanged);
			// 
			// T10_RB2
			// 
			this->T10_RB2->AutoSize = true;
			this->T10_RB2->Location = System::Drawing::Point(4, 26);
			this->T10_RB2->Name = L"T10_RB2";
			this->T10_RB2->Size = System::Drawing::Size(80, 17);
			this->T10_RB2->TabIndex = 1;
			this->T10_RB2->TabStop = true;
			this->T10_RB2->Text = L"By Urgency";
			this->T10_RB2->UseVisualStyleBackColor = true;
			this->T10_RB2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::T10_RB2_CheckedChanged);
			// 
			// T10_RB1
			// 
			this->T10_RB1->AutoSize = true;
			this->T10_RB1->Location = System::Drawing::Point(4, 3);
			this->T10_RB1->Name = L"T10_RB1";
			this->T10_RB1->Size = System::Drawing::Size(76, 17);
			this->T10_RB1->TabIndex = 0;
			this->T10_RB1->TabStop = true;
			this->T10_RB1->Text = L"By Subject";
			this->T10_RB1->UseVisualStyleBackColor = true;
			this->T10_RB1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::T10_RB1_CheckedChanged);
			// 
			// T10_Update
			// 
			this->T10_Update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T10_Update->Location = System::Drawing::Point(690, 372);
			this->T10_Update->Name = L"T10_Update";
			this->T10_Update->Size = System::Drawing::Size(40, 39);
			this->T10_Update->TabIndex = 9;
			this->T10_Update->Text = L"U";
			this->T10_Update->UseVisualStyleBackColor = true;
			this->T10_Update->Click += gcnew System::EventHandler(this, &MyForm::T10_Update_Click);
			// 
			// T10_MCB
			// 
			this->T10_MCB->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T10_MCB->FormattingEnabled = true;
			this->T10_MCB->Location = System::Drawing::Point(129, 71);
			this->T10_MCB->Name = L"T10_MCB";
			this->T10_MCB->Size = System::Drawing::Size(121, 27);
			this->T10_MCB->TabIndex = 8;
			this->T10_MCB->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::T10_MCB_SelectedIndexChanged);
			this->T10_MCB->TextUpdate += gcnew System::EventHandler(this, &MyForm::T10_MCB_TextUpdate);
			this->T10_MCB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::T10_MCB_KeyPress);
			// 
			// T10_L3
			// 
			this->T10_L3->AutoSize = true;
			this->T10_L3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T10_L3->Location = System::Drawing::Point(3, 72);
			this->T10_L3->Name = L"T10_L3";
			this->T10_L3->Size = System::Drawing::Size(120, 22);
			this->T10_L3->TabIndex = 7;
			this->T10_L3->Text = L"Select month:";
			// 
			// T10_RTB
			// 
			this->T10_RTB->Location = System::Drawing::Point(452, 228);
			this->T10_RTB->Name = L"T10_RTB";
			this->T10_RTB->Size = System::Drawing::Size(282, 180);
			this->T10_RTB->TabIndex = 6;
			this->T10_RTB->Text = L"";
			// 
			// T10_l2
			// 
			this->T10_l2->AutoSize = true;
			this->T10_l2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T10_l2->Location = System::Drawing::Point(448, 203);
			this->T10_l2->Name = L"T10_l2";
			this->T10_l2->Size = System::Drawing::Size(114, 22);
			this->T10_l2->TabIndex = 5;
			this->T10_l2->Text = L"Conclusions:";
			// 
			// T11_Chart
			// 
			this->T11_Chart->BackColor = System::Drawing::Color::Transparent;
			this->T11_Chart->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->T11_Chart->ChartAreas->Add(chartArea1);
			legend1->AutoFitMinFontSize = 8;
			legend1->BackColor = System::Drawing::Color::Transparent;
			legend1->Name = L"BySubject";
			legend2->BackColor = System::Drawing::Color::Transparent;
			legend2->Name = L"ByUrgency";
			legend3->BackColor = System::Drawing::Color::Transparent;
			legend3->Name = L"SubUrg";
			this->T11_Chart->Legends->Add(legend1);
			this->T11_Chart->Legends->Add(legend2);
			this->T11_Chart->Legends->Add(legend3);
			this->T11_Chart->Location = System::Drawing::Point(3, 173);
			this->T11_Chart->Name = L"T11_Chart";
			this->T11_Chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"SubUrg";
			series1->Name = L"Subjects";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Enabled = false;
			series2->Legend = L"ByUrgency";
			series2->Name = L"Urgency";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series3->Enabled = false;
			series3->Legend = L"SubUrg";
			series3->Name = L"Unknown";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series4->Enabled = false;
			series4->Legend = L"SubUrg";
			series4->Name = L"Low";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series5->Enabled = false;
			series5->Legend = L"SubUrg";
			series5->Name = L"Medium";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series6->Enabled = false;
			series6->Legend = L"SubUrg";
			series6->Name = L"High";
			this->T11_Chart->Series->Add(series1);
			this->T11_Chart->Series->Add(series2);
			this->T11_Chart->Series->Add(series3);
			this->T11_Chart->Series->Add(series4);
			this->T11_Chart->Series->Add(series5);
			this->T11_Chart->Series->Add(series6);
			this->T11_Chart->Size = System::Drawing::Size(450, 235);
			this->T11_Chart->TabIndex = 4;
			title1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title1->Name = L"Subject";
			title1->Text = L"By Subject";
			title2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title2->Name = L"Urgency";
			title2->Text = L"By Urgency";
			title2->Visible = false;
			title3->BackColor = System::Drawing::Color::Transparent;
			title3->Name = L"SubUrg";
			title3->Text = L"Subject-Urgency";
			title3->Visible = false;
			this->T11_Chart->Titles->Add(title1);
			this->T11_Chart->Titles->Add(title2);
			this->T11_Chart->Titles->Add(title3);
			// 
			// T10_l1
			// 
			this->T10_l1->AutoSize = true;
			this->T10_l1->BackColor = System::Drawing::Color::Transparent;
			this->T10_l1->Font = (gcnew System::Drawing::Font(L"David", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T10_l1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->T10_l1->Location = System::Drawing::Point(183, 6);
			this->T10_l1->Name = L"T10_l1";
			this->T10_l1->Size = System::Drawing::Size(343, 47);
			this->T10_l1->TabIndex = 3;
			this->T10_l1->Text = L"Tickets analysis";
			// 
			// T11_TicketReview
			// 
			this->T11_TicketReview->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->T11_TicketReview->Controls->Add(this->T11_UButton);
			this->T11_TicketReview->Controls->Add(this->T11_Back);
			this->T11_TicketReview->Controls->Add(this->panel1);
			this->T11_TicketReview->Controls->Add(this->T11_TLP);
			this->T11_TicketReview->Location = System::Drawing::Point(4, 5);
			this->T11_TicketReview->Name = L"T11_TicketReview";
			this->T11_TicketReview->Size = System::Drawing::Size(730, 411);
			this->T11_TicketReview->TabIndex = 10;
			// 
			// T11_UButton
			// 
			this->T11_UButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T11_UButton->Location = System::Drawing::Point(663, 352);
			this->T11_UButton->Name = L"T11_UButton";
			this->T11_UButton->Size = System::Drawing::Size(64, 55);
			this->T11_UButton->TabIndex = 3;
			this->T11_UButton->Text = L"U";
			this->T11_UButton->UseVisualStyleBackColor = true;
			this->T11_UButton->Click += gcnew System::EventHandler(this, &MyForm::T11_UButton_Click);
			// 
			// T11_Back
			// 
			this->T11_Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->T11_Back->Location = System::Drawing::Point(7, 347);
			this->T11_Back->Name = L"T11_Back";
			this->T11_Back->Size = System::Drawing::Size(75, 55);
			this->T11_Back->TabIndex = 2;
			this->T11_Back->Text = L"<-";
			this->T11_Back->UseVisualStyleBackColor = true;
			this->T11_Back->Click += gcnew System::EventHandler(this, &MyForm::T11_Back_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Tan;
			this->panel1->Controls->Add(this->T11_TNlabel);
			this->panel1->Controls->Add(this->T11_l9);
			this->panel1->Location = System::Drawing::Point(94, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(568, 25);
			this->panel1->TabIndex = 1;
			// 
			// T11_TNlabel
			// 
			this->T11_TNlabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_TNlabel->AutoSize = true;
			this->T11_TNlabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T11_TNlabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->T11_TNlabel->Location = System::Drawing::Point(289, 3);
			this->T11_TNlabel->Name = L"T11_TNlabel";
			this->T11_TNlabel->Size = System::Drawing::Size(20, 22);
			this->T11_TNlabel->TabIndex = 9;
			this->T11_TNlabel->Text = L"0";
			this->T11_TNlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l9
			// 
			this->T11_l9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l9->AutoSize = true;
			this->T11_l9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T11_l9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->T11_l9->Location = System::Drawing::Point(123, 3);
			this->T11_l9->Name = L"T11_l9";
			this->T11_l9->Size = System::Drawing::Size(141, 22);
			this->T11_l9->TabIndex = 8;
			this->T11_l9->Text = L"TIcket Number:";
			this->T11_l9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_TLP
			// 
			this->T11_TLP->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->T11_TLP->ColumnCount = 2;
			this->T11_TLP->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 28.49557F)));
			this->T11_TLP->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 71.50443F)));
			this->T11_TLP->Controls->Add(this->T11_UrgencyCB, 1, 6);
			this->T11_TLP->Controls->Add(this->T11_Desc, 1, 2);
			this->T11_TLP->Controls->Add(this->T11_Subject, 1, 1);
			this->T11_TLP->Controls->Add(this->T11_Date, 1, 0);
			this->T11_TLP->Controls->Add(this->T11_l1, 0, 0);
			this->T11_TLP->Controls->Add(this->T11_l2, 0, 1);
			this->T11_TLP->Controls->Add(this->T11_l3, 0, 2);
			this->T11_TLP->Controls->Add(this->T11_l4, 0, 3);
			this->T11_TLP->Controls->Add(this->T11_l5, 0, 4);
			this->T11_TLP->Controls->Add(this->T11_l6, 0, 5);
			this->T11_TLP->Controls->Add(this->T11_l7, 0, 6);
			this->T11_TLP->Controls->Add(this->tableLayoutPanel1, 1, 3);
			this->T11_TLP->Controls->Add(this->T11_StatusCB, 1, 5);
			this->T11_TLP->Controls->Add(this->T11_AT, 1, 4);
			this->T11_TLP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T11_TLP->Location = System::Drawing::Point(95, 23);
			this->T11_TLP->Name = L"T11_TLP";
			this->T11_TLP->RowCount = 7;
			this->T11_TLP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 24)));
			this->T11_TLP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 24)));
			this->T11_TLP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
			this->T11_TLP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 145)));
			this->T11_TLP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 72)));
			this->T11_TLP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->T11_TLP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 8)));
			this->T11_TLP->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->T11_TLP->Size = System::Drawing::Size(567, 388);
			this->T11_TLP->TabIndex = 0;
			// 
			// T11_UrgencyCB
			// 
			this->T11_UrgencyCB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_UrgencyCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->T11_UrgencyCB->FormattingEnabled = true;
			this->T11_UrgencyCB->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Low", L"Medium", L"High", L"Unknown" });
			this->T11_UrgencyCB->Location = System::Drawing::Point(163, 357);
			this->T11_UrgencyCB->Margin = System::Windows::Forms::Padding(0);
			this->T11_UrgencyCB->Name = L"T11_UrgencyCB";
			this->T11_UrgencyCB->Size = System::Drawing::Size(402, 27);
			this->T11_UrgencyCB->TabIndex = 15;
			// 
			// T11_Desc
			// 
			this->T11_Desc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_Desc->AutoSize = true;
			this->T11_Desc->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->T11_Desc->Location = System::Drawing::Point(166, 54);
			this->T11_Desc->Name = L"T11_Desc";
			this->T11_Desc->Size = System::Drawing::Size(396, 47);
			this->T11_Desc->TabIndex = 10;
			this->T11_Desc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_Subject
			// 
			this->T11_Subject->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_Subject->AutoSize = true;
			this->T11_Subject->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->T11_Subject->Location = System::Drawing::Point(166, 28);
			this->T11_Subject->Name = L"T11_Subject";
			this->T11_Subject->Size = System::Drawing::Size(396, 24);
			this->T11_Subject->TabIndex = 9;
			this->T11_Subject->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_Date
			// 
			this->T11_Date->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_Date->AutoSize = true;
			this->T11_Date->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->T11_Date->Location = System::Drawing::Point(166, 2);
			this->T11_Date->Name = L"T11_Date";
			this->T11_Date->Size = System::Drawing::Size(396, 24);
			this->T11_Date->TabIndex = 8;
			this->T11_Date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l1
			// 
			this->T11_l1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l1->AutoSize = true;
			this->T11_l1->Location = System::Drawing::Point(5, 2);
			this->T11_l1->Name = L"T11_l1";
			this->T11_l1->Size = System::Drawing::Size(153, 24);
			this->T11_l1->TabIndex = 0;
			this->T11_l1->Text = L"Submission Date";
			this->T11_l1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l2
			// 
			this->T11_l2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l2->AutoSize = true;
			this->T11_l2->Location = System::Drawing::Point(5, 28);
			this->T11_l2->Name = L"T11_l2";
			this->T11_l2->Size = System::Drawing::Size(153, 24);
			this->T11_l2->TabIndex = 1;
			this->T11_l2->Text = L"Subject";
			this->T11_l2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l3
			// 
			this->T11_l3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l3->AutoSize = true;
			this->T11_l3->Location = System::Drawing::Point(5, 54);
			this->T11_l3->Name = L"T11_l3";
			this->T11_l3->Size = System::Drawing::Size(153, 47);
			this->T11_l3->TabIndex = 2;
			this->T11_l3->Text = L"Description";
			this->T11_l3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l4
			// 
			this->T11_l4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l4->AutoSize = true;
			this->T11_l4->Location = System::Drawing::Point(5, 103);
			this->T11_l4->Name = L"T11_l4";
			this->T11_l4->Size = System::Drawing::Size(153, 145);
			this->T11_l4->TabIndex = 3;
			this->T11_l4->Text = L"User Details";
			this->T11_l4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l5
			// 
			this->T11_l5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l5->AutoSize = true;
			this->T11_l5->Location = System::Drawing::Point(5, 250);
			this->T11_l5->Name = L"T11_l5";
			this->T11_l5->Size = System::Drawing::Size(153, 72);
			this->T11_l5->TabIndex = 4;
			this->T11_l5->Text = L"Actions taken:";
			this->T11_l5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l6
			// 
			this->T11_l6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l6->AutoSize = true;
			this->T11_l6->Location = System::Drawing::Point(5, 324);
			this->T11_l6->Name = L"T11_l6";
			this->T11_l6->Size = System::Drawing::Size(153, 31);
			this->T11_l6->TabIndex = 5;
			this->T11_l6->Text = L"Status";
			this->T11_l6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l7
			// 
			this->T11_l7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l7->AutoSize = true;
			this->T11_l7->Location = System::Drawing::Point(5, 357);
			this->T11_l7->Name = L"T11_l7";
			this->T11_l7->Size = System::Drawing::Size(153, 29);
			this->T11_l7->TabIndex = 6;
			this->T11_l7->Text = L"Urgency";
			this->T11_l7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->T11_PN, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->T11_Department, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->T11_EMAIL, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->T11_ID, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->T11_FN, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->T11_l10, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->T11_l12, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->T11_l13, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->T11_l14, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->T11_l15, 0, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(166, 106);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 11)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(396, 139);
			this->tableLayoutPanel1->TabIndex = 11;
			// 
			// T11_PN
			// 
			this->T11_PN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_PN->AutoSize = true;
			this->T11_PN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->T11_PN->Location = System::Drawing::Point(201, 108);
			this->T11_PN->Name = L"T11_PN";
			this->T11_PN->Size = System::Drawing::Size(191, 30);
			this->T11_PN->TabIndex = 22;
			this->T11_PN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_Department
			// 
			this->T11_Department->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_Department->AutoSize = true;
			this->T11_Department->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->T11_Department->Location = System::Drawing::Point(201, 80);
			this->T11_Department->Name = L"T11_Department";
			this->T11_Department->Size = System::Drawing::Size(191, 27);
			this->T11_Department->TabIndex = 21;
			this->T11_Department->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_EMAIL
			// 
			this->T11_EMAIL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_EMAIL->AutoSize = true;
			this->T11_EMAIL->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->T11_EMAIL->Location = System::Drawing::Point(201, 49);
			this->T11_EMAIL->Name = L"T11_EMAIL";
			this->T11_EMAIL->Size = System::Drawing::Size(191, 30);
			this->T11_EMAIL->TabIndex = 20;
			this->T11_EMAIL->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_ID
			// 
			this->T11_ID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_ID->AutoSize = true;
			this->T11_ID->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->T11_ID->Location = System::Drawing::Point(201, 25);
			this->T11_ID->Name = L"T11_ID";
			this->T11_ID->Size = System::Drawing::Size(191, 23);
			this->T11_ID->TabIndex = 19;
			this->T11_ID->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_FN
			// 
			this->T11_FN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_FN->AutoSize = true;
			this->T11_FN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->T11_FN->Location = System::Drawing::Point(201, 1);
			this->T11_FN->Name = L"T11_FN";
			this->T11_FN->Size = System::Drawing::Size(191, 23);
			this->T11_FN->TabIndex = 12;
			this->T11_FN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l10
			// 
			this->T11_l10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l10->AutoSize = true;
			this->T11_l10->Location = System::Drawing::Point(4, 1);
			this->T11_l10->Name = L"T11_l10";
			this->T11_l10->Size = System::Drawing::Size(190, 23);
			this->T11_l10->TabIndex = 12;
			this->T11_l10->Text = L"Full Name:";
			this->T11_l10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l12
			// 
			this->T11_l12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l12->AutoSize = true;
			this->T11_l12->Location = System::Drawing::Point(4, 25);
			this->T11_l12->Name = L"T11_l12";
			this->T11_l12->Size = System::Drawing::Size(190, 23);
			this->T11_l12->TabIndex = 14;
			this->T11_l12->Text = L"ID:";
			this->T11_l12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l13
			// 
			this->T11_l13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l13->AutoSize = true;
			this->T11_l13->Location = System::Drawing::Point(4, 49);
			this->T11_l13->Name = L"T11_l13";
			this->T11_l13->Size = System::Drawing::Size(190, 30);
			this->T11_l13->TabIndex = 15;
			this->T11_l13->Text = L"Email";
			this->T11_l13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l14
			// 
			this->T11_l14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l14->AutoSize = true;
			this->T11_l14->Location = System::Drawing::Point(4, 80);
			this->T11_l14->Name = L"T11_l14";
			this->T11_l14->Size = System::Drawing::Size(190, 27);
			this->T11_l14->TabIndex = 16;
			this->T11_l14->Text = L"Department:";
			this->T11_l14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_l15
			// 
			this->T11_l15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_l15->AutoSize = true;
			this->T11_l15->Location = System::Drawing::Point(4, 108);
			this->T11_l15->Name = L"T11_l15";
			this->T11_l15->Size = System::Drawing::Size(190, 30);
			this->T11_l15->TabIndex = 17;
			this->T11_l15->Text = L"Phone number:";
			this->T11_l15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T11_StatusCB
			// 
			this->T11_StatusCB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_StatusCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->T11_StatusCB->FormattingEnabled = true;
			this->T11_StatusCB->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"new", L"In progress", L"Escalation", L"Suspended",
					L"Closed"
			});
			this->T11_StatusCB->Location = System::Drawing::Point(163, 324);
			this->T11_StatusCB->Margin = System::Windows::Forms::Padding(0);
			this->T11_StatusCB->Name = L"T11_StatusCB";
			this->T11_StatusCB->Size = System::Drawing::Size(402, 27);
			this->T11_StatusCB->TabIndex = 14;
			// 
			// T11_AT
			// 
			this->T11_AT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->T11_AT->Location = System::Drawing::Point(166, 253);
			this->T11_AT->Name = L"T11_AT";
			this->T11_AT->Size = System::Drawing::Size(396, 66);
			this->T11_AT->TabIndex = 16;
			this->T11_AT->Text = L"";
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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
			this->T9_TicketsList->ResumeLayout(false);
			this->T9_TicketsList->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->T9_DGV))->EndInit();
			this->T9_P->ResumeLayout(false);
			this->T9_P->PerformLayout();
			this->T10_TicketsAn->ResumeLayout(false);
			this->T10_TicketsAn->PerformLayout();
			this->T10_PRB->ResumeLayout(false);
			this->T10_PRB->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->T11_Chart))->EndInit();
			this->T11_TicketReview->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->T11_TLP->ResumeLayout(false);
			this->T11_TLP->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void loginButton_Click(System::Object^  sender, System::EventArgs^  e) {
		TabCon->SelectedIndex=1;
		TMenuButton->Visible = false;
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
	TMenuButton->Visible = false;
}
private: System::Void T2_LoginButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Verify_ID_and_Password())
	{
		TabCon->SelectedIndex = 2;
		ShortLabel->Text = "User Menu";
	}	
}
unsigned int RSHash(const char* str)
{
	unsigned int length = strlen(str);
   unsigned int b    = 378551;
   unsigned int a    = 63689;
   unsigned int hash = 0;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)
   {
      hash = hash * a + (*str);
      a    = a * b;
   }

   return hash;
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
			getline(myfile, line);
			flag = line.substr(line.find(':') + 1, line.length());
			if (CheckID(Id, flag) == true) //Checks if the user is already existing in the program
			{
				getline(myfile, line);
				/*		flag = line.substr(line.find(':') + 1, line.length())
				name = flag;*/
				getline(myfile, line);
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
			else
			{
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line); 
				getline(myfile, line);
				getline(myfile, line);
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
		if (atoi(CheckPass.c_str()) == RSHash(Pass.c_str()))
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
	if (password.length() < 8)
	{
		//cout << "Your password is too short,please try again" << endl;
		//cin >> password;
		MessageBox::Show("Your password is too short,please try again");
		return false;
	}
	if (password.length() > 8)
	{
		MessageBox::Show("Your password is too long,please try again");

		//cout << "Your password is too long,please try again" << endl;
		//cin >> password;
		return false;
	}
	if (!(password.find("!") == string::npos) || !(password.find("@") == string::npos) || !(password.find("#") == string::npos) || !(password.find("$") == string::npos) || !(password.find("%") == string::npos) || !(password.find("^") == string::npos) || !(password.find("&") == string::npos) || !(password.find("*") == string::npos) || !(password.find("(") == string::npos) || !(password.find(")") == string::npos) || !(password.find("-") == string::npos) || !(password.find("+") == string::npos) || !(password.find("_") == string::npos) || !(password.find("=") == string::npos) || !(password.find(".") == string::npos) || !(password.find("[") == string::npos) || !(password.find("]") == string::npos))
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
			getline(myfile, line);
			HOLD.append(line);
			HOLD.append("\n");
			flag = line.substr(line.find(':') + 1, line.length());
			getline(myfile, line);
			HOLD.append(line);
			HOLD.append("\n");
			getline(myfile, line);
			HOLD.append(line);
			HOLD.append("\n");
			if (CheckID(New_User, flag) == true) //Checks if the user is already existing in the program
			{
				myfile.close();
				MessageBox::Show("The ID is already existing in the system");
				return false;
			}
			else
			{			
				getline(myfile, line);
				HOLD.append(line);
				HOLD.append("\n");
				getline(myfile, line);
				HOLD.append(line);
				HOLD.append("\n");
				getline(myfile, line);
				HOLD.append(to_string(RSHash(line.c_str())));
				HOLD.append("\n");
			}
		}
		if (!Register(New_User, HOLD))//Register a new user
		{
			myfile.close();
			return false;
		}
		myfile.close();
	}
	myfile.close();
	return true;
}
bool Register(string New_User, string hold)
{
	int i = 0;
	string temp, temp1;
	string ID = "ID:", Name = "Full Name:", Email = "Email:", PhoneNum = "Phone Number:", Pass = "Password:",Depart="Department:";

	if (CheckPassword() == false) // check if the password that chose by the user is under our conditions
	{
		//myfile.close();
		return false;
	}
	MarshalString(T4_TBE->Text, temp);
	if (CheckEmail(temp, hold) == true) //checks if the email is Under our conditions
	{
	//	myfile.close();
		MessageBox::Show("Invalid email,try again");
		return false;
	}
	ofstream myfile("New.txt");
	if (myfile.is_open())
	{
		//ADDD DEPARTMENT FFS !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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
		myfile << Depart;
		MarshalString(T4_TBD->Text, temp);
		myfile << temp;
		myfile << "\n";
		myfile << Pass;	
		MarshalString(T4_TBPW->Text, temp);
		myfile << temp;
		myfile << "\n";
		myfile.close();
		return true;
	}
	else
	{
		MessageBox::Show("Cant connect to database!");
		return false;
	}
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
	TS_BackUser->Visible = true;
}
private: System::Void T5_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (T5_CB->SelectedIndex == -1 || T5_RTB->Text == "")
	{
		MessageBox::Show("Please fill our form!");
	}
	else
	{
		string user;
		MarshalString(m_id, user);
		create_new_ticket(user);
		MessageBox::Show("Thank you! Your call is now saved in the system.We will contact you soon!");
		TabCon->SelectedIndex = 2;
	}
}
void update_database(string id, string subject, string status, string date, string description, int ticket_number, string tech_notice ,string Urgency) //database update function
{
	string fullname, id1;
	string line;

	ofstream tickets("ticket_database.txt", ofstream::out | ofstream::app);
	//tickets
	tickets << "------------------------------------------" << endl;
	tickets << "ID:" << id << endl;
	tickets << "Subject:" << subject << endl;
	tickets << "Status:" << status << endl;
	tickets << "Date:" << date << endl;
	tickets << "Description:" << description << endl;
	tickets << "Ticket Number:" << ticket_number << endl;
	tickets << "Urgency:" << Urgency << endl;
	tickets << "Technician Notice:" << tech_notice << endl;

	tickets.close(); // close ticket
}
void create_new_ticket(string id) //creating new ticket function
{
	string description = " ";
	string status = "new";
	string subject = " ";
	string date = getTimeStr();
	int ticketNumber = get_new_ticket_number();
	string tech_notice = "empty";
	int choice = T5_CB->SelectedIndex;
	String^ temp = T5_RTB->Text->Replace('\n', '`');
	MarshalString(temp, description);

	switch (choice)
	{

		case 1://[1]  Courses
		{
			subject = "Courses";
			update_database(id, subject, status, date, description, ticketNumber, tech_notice,"Unknown");

			break;
		}

		case 2://[2]  Grades
		{
			subject = "Grades";

			update_database(id, subject, status, date, description, ticketNumber, tech_notice, "Unknown");
			break;
		}

		case 3://[3]  Maintenance problem
		{
			subject = "Maintenance_problem";

			update_database(id, subject, status, date, description, ticketNumber, tech_notice, "Unknown");
			break;
		}

		case 4://[4]  Other
		{
			subject = "Other";

			update_database(id, subject, status, date, description, ticketNumber, tech_notice, "Unknown");
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
	TS_BackUser->Visible = true;
	string user;
	MarshalString(m_id, user);
	User_tickets_history(user, 4);
}
void User_tickets_history(string id,int Choice) //show user ticket's history 
{
	string subject, description, date, status;
	string line;
	string id1;
	string ticket_number;
	string tech_notice;
	string Urgency;

	if (m_UserTable->Rows->Count > 0)
	{
		m_UserTable->Rows->Clear();
		T6_DGV->Refresh();
	}
	ifstream tickets;
	tickets.open("ticket_database.txt");


	//	cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
	//	cout << "[1]  Subject" << endl;
	//	cout << "[2]  Status" << endl;
	//	cout << "[3]  Date" << endl;
	//	cout << "[4]  Non filter" << endl;

	//	cin >> choise;
	//	cout << endl;

	switch (Choice)
	{
	case 1://[1]  filter by subject
	{
		int flag = 0;
		string subject1;
		//int choice2 = 0;
		//int choice2 = 0;
	/*	cout << "Choose Subject:" << endl;
		while (choice2 < 1 || choice2 > 4)
		{
		//	cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
		//	cout << "[1]  Courses" << endl;
		//	cout << "[2]  Grades" << endl;
		//	cout << "[3]  Maintenance problem" << endl;
		//	cout << "[4]  Other" << endl;

			cin >> choise;
			cout << endl;
		}*/
		/*if (choice2 == 1) { subject1 = "Courses"; }
		else if (choice2 == 2) { subject1 = "Grades"; }
		else if (choice2 == 3) { subject1 = "Maintenance_problem"; }
		else if (choice2 == 4) { subject1 = "Other"; }*/
		MarshalString(T6_TBS->Text, subject1);

		while (getline(tickets, line))
		{
			getline(tickets, line);
			id1 = line.substr(line.find(':') + 1, line.length());
			if (id1 == id) //Checks if the user is already existing in the program
			{
				getline(tickets, line);
				subject = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				status = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				date = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				description = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				ticket_number = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				Urgency = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				tech_notice = line.substr(line.find(':') + 1, line.length());

				if (subject1 == subject)
				{
					String^ nSubject = gcnew String(subject.c_str());
					String^ nStatus = gcnew String(status.c_str());
					std::stringstream ss(date);
					std::vector<int> output;
					int i;
					while (ss >> i) {
						output.push_back(i);
						ss.ignore(1);
					}
					int s = stoi(ticket_number);
					DateTime^ d = gcnew DateTime(output[2], output[1], output[0]);
					m_UserTable->Rows->Add(d,nSubject,nStatus,s);
					//cout << "ID: " << id << "\t\tSubject: " << subject << "\t\tstatus: " << status << "\t\tDate: " << date << "\t\tdescription: " << description << endl;
					flag++;
				}

			}
			else
			{
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
			}

		}
		if (flag == 0)
		{
			//cout << "Your user does not have a ticket in subject: " << subject1 << endl;
		}
		T6_DGV->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		T6_DGV->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::None;
		break;

	}

	case 2://[2]  filter by status
	{
		int flag = 0;
		string status1;
		MarshalString(T6_TBS->Text, status1);
	//	int choice2 = 0;
	//	cout << "Choose Status:" << endl;
		//while (choice2 < 1 || choice2 > 3)
		{
	/*		cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
			cout << "[1]  New" << endl;
			cout << "[2]  In progress" << endl;
			cout << "[3]  Closed" << endl;*/

			//cin >> choise;
			//cout << endl;
		}
		//if (choice2 == 1) { status1 = "new"; }
		//else if (choice2 == 2) { status1 = "in_progress"; }
		//else if (choice2 == 3) { status1 = "closed"; }

		while (getline(tickets, line))
		{
			getline(tickets, line);
			id1 = line.substr(line.find(':') + 1, line.length());
			if (id1 == id) //Checks if the user is already existing in the program
			{
				getline(tickets, line);
				subject = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				status = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				date = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				description = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				ticket_number = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				Urgency = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				tech_notice = line.substr(line.find(':') + 1, line.length());

				if (status1 == status)
				{
					String^ nSubject = gcnew String(subject.c_str());
					String^ nStatus = gcnew String(status.c_str());
					std::stringstream ss(date);
					std::vector<int> output;
					int i;
					while (ss >> i) {
						output.push_back(i);
						ss.ignore(1);
					}
					int s = stoi(ticket_number);
					DateTime^ d = gcnew DateTime(output[2], output[1], output[0]);
					m_UserTable->Rows->Add(d, nSubject, nStatus, s);
					//cout << "ID: " << id << "\tSubject: " << subject << "\tstatus: " << status << "\tDate: " << date << "\tdescription: " << description << endl;
					flag++;
				}

			}
			else
			{
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
			}
		}
		if (flag == 0)
		{
			//cout << "Your user does not have a ticket in status: " << status1 << endl;
		}
		T6_DGV->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		T6_DGV->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::None;
		break;
	}

	case 3://[3]  filter by date
	{
		int flag = 0;
		string date1;
		//cout << "Enter Date [DD-MM-YYYY]" << endl;
		//cin >> date1;
		MarshalString(T6_TBS->Text, date1);
		date1 += " ";

		while (getline(tickets, line))
		{
			getline(tickets, line);
			id1 = line.substr(line.find(':') + 1, line.length());
			if (id1 == id) //Checks if the user is already existing in the program
			{
				getline(tickets, line);
				subject = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				status = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				date = line.substr(line.find(':') + 1, line.length() - 1);
				getline(tickets, line);
				description = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				ticket_number = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				Urgency = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				tech_notice = line.substr(line.find(':') + 1, line.length());

				if (date1 == date)
				{
					String^ nSubject = gcnew String(subject.c_str());
					String^ nStatus = gcnew String(status.c_str());
					std::stringstream ss(date);
					std::vector<int> output;
					int i;
					while (ss >> i) {
						output.push_back(i);
						ss.ignore(1);
					}
					int s = stoi(ticket_number);
					DateTime^ d = gcnew DateTime(output[2], output[1], output[0]);
					m_UserTable->Rows->Add(d, nSubject, nStatus, s);
					//cout << "ID: " << id << "\tSubject: " << subject << "\tstatus: " << status << "\tDate: " << date << "\tdescription: " << description << endl;
					flag++;
				}

			}
			else
			{
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
			}
		}
		if (flag == 0)
		{
			//cout << "Your user does not have a ticket by date: " << date1 << endl;
		}
		T6_DGV->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		T6_DGV->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::None;
		break;
	}

	case 4://[4]  non filter
	{
		while (getline(tickets, line))
		{
			getline(tickets, line);
			id1 = line.substr(line.find(':') + 1, line.length());
			if (id1 == id) //Checks if the user is already existing in the program
			{
				getline(tickets, line);
				subject = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				status = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				date = line.substr(line.find(':') + 1, line.length() - 1);
				getline(tickets, line);
				description = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				ticket_number = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				Urgency = line.substr(line.find(':') + 1, line.length());
				getline(tickets, line);
				tech_notice = line.substr(line.find(':') + 1, line.length());

				String^ nSubject = gcnew String(subject.c_str());
				String^ nStatus = gcnew String(status.c_str());
				std::stringstream ss(date);
				std::vector<int> output;
				int i;
				while (ss >> i) {
					output.push_back(i);
					ss.ignore(1);
				}
				int s = stoi(ticket_number);
				DateTime^ d = gcnew DateTime(output[2], output[1], output[0]);
				m_UserTable->Rows->Add(d, nSubject, nStatus, s);
			//	T6_DGV->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::Fill);
				
				//cout << "ID: " << id << "\tSubject: " << subject << "\tstatus: " << status << "\tDate: " << date << "\tdescription: " << description << endl;
			}
			else
			{
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);
				getline(tickets, line);			
			}
		}
		T6_DGV->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		T6_DGV->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::None;
		break;
	}


	tickets.close();

		
	}
}
private: System::Void TecButton_Click(System::Object^  sender, System::EventArgs^  e) {
	TabCon->SelectedIndex = 6;
	ShortLabel->Text = "Technician Login";
	MainButton->Visible = true;
}
private: System::Void T7_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	string user, password;
	MarshalString(T7_TBUN->Text, user);
	MarshalString(T7_TBPW->Text, password);
	if (Technician_Login(user, password))
	{
		TabCon->SelectedIndex = 7;
		ShortLabel->Text = "T-Menu";
		m_id = T7_TBUN->Text;
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
				getline(myfile, line);
				if (Verify_Password(flag, Password) == true)
				{
					MessageBox::Show("Connected");
					m_id = gcnew String(ID.c_str());
					myfile.close();
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
int get_new_ticket_number()
{
	int last;
	string last1;
	string line;
	ifstream tickets;
	tickets.open("ticket_database.txt");

	while (getline(tickets, line))
	{
		getline(tickets, line);
		getline(tickets, line);
		getline(tickets, line);
		getline(tickets, line);
		getline(tickets, line);
		getline(tickets, line);
		last1 = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		getline(tickets, line);
	}
	last = atoi(last1.c_str());
	tickets.close();
	return last + 1;

}
string GetName(string E_User)
{
	string line;
	string flag;
	ifstream myfile("New.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			getline(myfile, line);
			flag = line.substr(line.find(':') + 1, line.length());
			if (CheckID(E_User, flag) == true) //Checks if the user is already existing in the program
			{
				getline(myfile, line);
				flag = line.substr(line.find(':') + 1, line.length());
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				myfile.close();
				return flag;
			}
			else
			{
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
			}
		}
		myfile.close();
	}
	return "Nothing";
}
private: System::Void T8_TLButton_Click(System::Object^  sender, System::EventArgs^  e) {
	TabCon->SelectedIndex = 8;
	ShortLabel->Text = "Tickets List";
	string id;
	MarshalString(m_id, id);
	Technician_ticket_view(id);
	TMenuButton->Visible = true;

}
private: System::Void T8_TAButton_Click(System::Object^  sender, System::EventArgs^  e) {
	FillComboBox();
	TabCon->SelectedIndex = 9;
	ShortLabel->Text = "T-Analysis";
	TMenuButton->Visible = true;	
}
void FillComboBox()
{
	T10_MCB->Items->Clear();
	ifstream tickets;
	string flag,line;
	tickets.open("TicketAnalysis.txt");
	if (tickets.is_open())
	{
		while (getline(tickets, line))
		{
			getline(tickets, line);
			flag = line.substr(line.find(':') + 1, line.length());
			String^ s = gcnew String(flag.c_str());
			T10_MCB->Items->Add(s);
			getline(tickets, line);
		}
	}
	else
	{
		MessageBox::Show("No Ticket Descriptions DB!");
	}


}
private: System::Void TMenuButton_Click(System::Object^  sender, System::EventArgs^  e) {
	TabCon->SelectedIndex = 7;
	ShortLabel->Text = "T-Menu";
	TMenuButton->Visible = false;
}
private: System::Void T6_Sbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (T6_CB->SelectedIndex == -1)
	{
		MessageBox::Show("No filter selected!");
	}
	else
	{	
		string id;
		MarshalString(m_id, id);
		switch (T6_CB->SelectedIndex)
		{
			case 0:User_tickets_history(id, 1);	break;
			case 1:User_tickets_history(id, 2);	break;
			case 2:User_tickets_history(id, 3); break;
		}
	}
}
bool Verify_Tech_Id_and_Password(string ID, string password)
{
	int flag1 = 0;
	string line;
	string flag;
	ifstream myfile("Technician_database.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			flag = line.substr(line.find(":") + 1, line.length());
			if (CheckID(ID, flag) == true) //Checks if the user is already existing in the program
			{
				//get Profession
				flag1++;
				getline(myfile, line);
				flag = line.substr(line.find(":") + 1, line.length());
				if (!Verify_Password(flag, password))
				{
					MessageBox::Show("Incorrect password");
					myfile.close();
					return false;
				}
				else
				{
					MessageBox::Show("Connected");
					myfile.close();
					return true;

				}
			}

		}
		MessageBox::Show("No such user!");
		myfile.close();
		return false;
	}
	MessageBox::Show("No connection to database!");
	return false;
}
string GetTechnicianProfession(string ID)
{
	string line;
	string flag;
	ifstream myfile("Technician_database.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			flag = line.substr(line.find(":") + 1, line.length());
			if (CheckID(ID, flag) == true) //Checks if the user is already existing in the program
			{
				//get Profession
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				string Profession = line.substr(line.find(":") + 1, line.length());
				myfile.close();
				return Profession;
			}

		}
		MessageBox::Show("No such user!");
		myfile.close();
		return NULL;
	}
	MessageBox::Show("No connection to database!");
	return NULL;
}
void AddRowTec(string subject,string status,string id1,string Urgency,string date,string ticket_number)
{
	String^ nSubject = gcnew String(subject.c_str());
	String^ nStatus = gcnew String(status.c_str());
	string FullName = GetName(id1);
	String^ UserName = gcnew String(FullName.c_str());
	String^ GUrgency = gcnew String(Urgency.c_str());

	std::stringstream ss(date);
	std::vector<int> output;
	int i;
	while (ss >> i) {
		output.push_back(i);
		ss.ignore(1);
	}
	int s = stoi(ticket_number);
	int iId = stoi(id1);
	DateTime^ d = gcnew DateTime(output[2], output[1], output[0]);
	m_TecTable->Rows->Add(d, nSubject, UserName, iId, nStatus, GUrgency, s);
}
void Technician_ticket_view(string id)
{
	string subject, description, date, status, ticket_number, tech_notice;
	string line;
	string id1;
	string Urgency;
	
	if (m_TecTable->Rows->Count > 0)
	{
		m_TecTable->Rows->Clear();
		T9_DGV->Refresh();
	}
	

	string subject1 = GetTechnicianProfession(id);
	ifstream tickets("ticket_database.txt");
	while (getline(tickets, line))
	{
		getline(tickets, line);
		id1 = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		subject = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		status = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		date = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		description = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		ticket_number = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		Urgency = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		tech_notice = line.substr(line.find(':') + 1, line.length());

		if (subject1 == subject)
		{
			//cout << "ID: " << id1 << endl << "Subject: " << subject << endl << "status: " << status << endl << "Date: " << date << endl << "Description: " << description << endl << "Ticket Number: " << ticket_number << endl << "Technician Notice: " << tech_notice << endl << endl;
			AddRowTec(subject, status, id1, Urgency, date, ticket_number);
			//cout << "ID: " << id << "\t\tSubject: " << subject << "\t\tstatus: " << status << "\t\tDate: " << date << "\t\tdescription: " << description << endl;
		}

	}


	tickets.close();

}
void tech_update_ticket()
{
	int flag = 0;
	int choise = 0, i = 0;
	string new_status;
/*
	//cout << "Choose Update Options:" << endl;
	while (choise < 1 || choise > 2)
	{
		cout << "ENTER NUMBER BETWEEN 1 - 2:" << endl;
		cout << "[1]  Update Ticket Status" << endl;
		cout << "[2]  Add Notice to Ticket" << endl;
	//	cin >> choise;
	//	cout << endl;
	}*/

	switch (choise)
	{
	case 1://[1]  update status
	{
		flag = 0;
		int line_number = 0;
		string ticket_number;
		int ticket_number1;
		ifstream tickets;
		tickets.open("ticket_database.txt");
		string line;
		int t_n;
	//	cout << "Enter Ticket Number to update:";
	//	cin >> t_n;

		while (getline(tickets, line))
		{
			getline(tickets, line);
			getline(tickets, line);
			getline(tickets, line);
			getline(tickets, line);
			getline(tickets, line);
			getline(tickets, line);
			ticket_number = line.substr(line.find(':') + 1, line.length());
			ticket_number1 = atoi(ticket_number.c_str());
			getline(tickets, line);

			line_number += 8;

			if (t_n == ticket_number1)
			{
				flag++;
				int choose = 0;
				while (choose > 3 || choose < 1)
				{
				/*	cout << "Choose the new status:" << endl;
					cout << "[1] New" << endl;
					cout << "[2] in progress" << endl;
					cout << "[3] closed" << endl;

					cin >> choose;*/
					if (choose == 1) { new_status = "New"; }
					else if (choose == 2) { new_status = "In_Progress"; }
					else if (choose == 3) { new_status = "Closed"; }
				}
				tickets.close();
				fstream input_file("ticket_database.txt", ios::in);
				ofstream output_file("tmp.txt");
				while (!input_file.eof())
				{
					if (i == line_number - 5)
					{
						output_file << "Status:" << new_status << endl;
						getline(input_file, line);
					}
					else
					{
						getline(input_file, line);
						output_file << line << endl;
					}
					i++;
				}

				input_file.close();
				output_file.close();
				break;
			}

		}
	//	if (flag == 0) { cout << "ticket number " << t_n << " not found in the system!" << endl; }
		break;
	}

	case 2://[2]  add notice
	{
		flag = 0;
		int line_number = 1;
		string ticket_number;
		int ticket_number1;
		ifstream tickets;
		tickets.open("ticket_database.txt");
		string line;
		int t_n;
	//	cout << "Enter Ticket Number to update:";
	//	cin >> t_n;

		while (getline(tickets, line))
		{
			getline(tickets, line);
			getline(tickets, line);
			getline(tickets, line);
			getline(tickets, line);
			getline(tickets, line);
			getline(tickets, line);
			ticket_number = line.substr(line.find(':') + 1, line.length());
			ticket_number1 = atoi(ticket_number.c_str());
			getline(tickets, line);

			line_number += 8;

			if (t_n == ticket_number1)
			{
				flag++;
				tickets.close();
				string notice;
//				cout << "Enter your notice:" << endl;
		//		cin.ignore();
		//		getline(cin, notice);
				fstream input_file("ticket_database.txt", ios::in);
				ofstream output_file("tmp.txt");

				while (!input_file.eof())
				{
					if (i == line_number - 2)
					{
						output_file << "Technician Notice:" << notice << endl;
						getline(input_file, line);
					}
					else
					{
						getline(input_file, line);
						output_file << line << endl;
					}
					i++;
				}
				input_file.close();
				output_file.close();
				break;
			}

		}
	//	if (flag == 0) { cout << "ticket number " << t_n << " not found in the system!" << endl; }

	}
	}
	string line;
	fstream input_file("tmp.txt", ios::in);
	ofstream output_file("ticket_database.txt");
	while (!input_file.eof())
	{
		getline(input_file, line);
		output_file << line << endl;
	}

}
void tech_filter(string Filter,int Choice)
{
	string subject, description, date, status, ticket_number, tech_notice;
	string line;
	string id1;
	string id;
	string Urgency;
	MarshalString(m_id, id);
	string Profession=GetTechnicianProfession(id);
	ifstream tickets;
	tickets.open("ticket_database.txt");
	if (m_TecTable->Rows->Count > 0)
	{
		m_TecTable->Rows->Clear();
		T9_DGV->Refresh();
	}

//	cout << "Filter by:" << endl;
//	while (choise < 1 || choise > 4)
//	{
	/*	cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
		cout << "[1]  Id" << endl;
		cout << "[2]  Status" << endl;
		cout << "[3]  Date" << endl;
		cout << "[4]  Non filter" << endl;

		cin >> choise;
		cout << endl;*/

		switch (Choice+1)
		{
			case 1://[1]  filter by Id
			{
				int choise = 0;
				//cout << "Enter ID to filter: " << endl;
				//cin >> id;

				while (getline(tickets, line))
				{
					id1 = line.substr(line.find(':') + 1, line.length());
					if (id1 == Filter) //Checks if the user is already existing in the program
					{
						getline(tickets, line);
						subject = line.substr(line.find(':') + 1, line.length());
						getline(tickets, line);
						status = line.substr(line.find(':') + 1, line.length());
						getline(tickets, line);
						date = line.substr(line.find(':') + 1, line.length());
						getline(tickets, line);
						description = line.substr(line.find(':') + 1, line.length());
						getline(tickets, line);
						ticket_number = line.substr(line.find(':') + 1, line.length());
						getline(tickets, line);
						Urgency = line.substr(line.find(':') + 1, line.length());
						getline(tickets, line);
						tech_notice = line.substr(line.find(':') + 1, line.length());

						if (Profession == subject)
						{
							//cout << "ID: " << id << endl << "Subject: " << subject << endl << "status: " << status << endl << "Date: " << date << endl << "Description: " << description << endl << "Ticket Number: " << ticket_number << endl << "Technician Notice: " << tech_notice << endl << endl;
							AddRowTec(subject, status, id1, Urgency, date, ticket_number);

						}

					}

				}
				break;

			}

			case 4://[4]  filter by status
			{
				int flag = 0;
				string status1;
				int choise = 0;
				/*cout << "Choose Status:" << endl;
				while (choise < 1 || choise > 3)
				{
					cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
					cout << "[1]  New" << endl;
					cout << "[2]  In progress" << endl;
					cout << "[3]  Closed" << endl;

					cin >> choise;
					cout << endl;
				}
				if (choise == 1) { status1 = "new"; }
				else if (choise == 2) { status1 = "In_Progress"; }
				else if (choise == 3) { status1 = "Closed"; }*/

				while (getline(tickets, line))
				{
					getline(tickets, line);
					id1 = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					subject = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					status = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					date = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					description = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					ticket_number = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					Urgency = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					tech_notice = line.substr(line.find(':') + 1, line.length());

					if (Filter == status && subject == Profession)
					{
						//cout << "ID: " << id1 << endl << "Subject: " << subject << endl << "status: " << status << endl << "Date: " << date << endl << "Description: " << description << endl << "Ticket Number: " << ticket_number << endl << "Technician Notice: " << tech_notice << endl << endl;
						AddRowTec(subject, status, id1, Urgency, date, ticket_number);
					}

				}
				break;
			}

			case 3://[3]  filter by date
			{
				//cout << "Enter Date [DD-MM-YYYY]" << endl;
				//cin >> date1;
				Filter += " ";

				while (getline(tickets, line))
				{
					getline(tickets, line);
					id1 = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					subject = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					status = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					date = line.substr(line.find(':') + 1, line.length() - 1);
					getline(tickets, line);
					description = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					ticket_number = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					Urgency = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					tech_notice = line.substr(line.find(':') + 1, line.length());

					if (Filter == date && subject == Profession)
					{
						//cout << "ID: " << id1 << endl << "Subject: " << subject << endl << "status: " << status << endl << "Date: " << date << endl << "Description: " << description << endl << "Ticket Number: " << ticket_number << endl << "Technician Notice: " << tech_notice << endl << endl;
						AddRowTec(subject, status, id1, Urgency, date, ticket_number);
					}

				}
				break;
			}

			case 2://[2]  Urgency
			{
				while (getline(tickets, line))
				{
					getline(tickets, line);
					id1 = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					subject = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					status = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					date = line.substr(line.find(':') + 1, line.length() - 1);
					getline(tickets, line);
					description = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					ticket_number = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					Urgency = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					tech_notice = line.substr(line.find(':') + 1, line.length());

					if (Filter == Urgency && subject == Profession)
					{
						//cout << "ID: " << id1 << endl << "Subject: " << subject << endl << "status: " << status << endl << "Date: " << date << endl << "Description: " << description << endl << "Ticket Number: " << ticket_number << endl << "Technician Notice: " << tech_notice << endl << endl;
						AddRowTec(subject, status, id1, Urgency, date, ticket_number);
					}

				}
			}
			break;
		

			case 5://[5]  non filter
			{
				while (getline(tickets, line))
				{
					getline(tickets, line);
					id1 = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					subject = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					status = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					date = line.substr(line.find(':') + 1, line.length() - 1);
					getline(tickets, line);
					description = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					ticket_number = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					Urgency = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					tech_notice = line.substr(line.find(':') + 1, line.length());

					if (subject == Profession)
					{
						AddRowTec(subject, status, id1, Urgency, date, ticket_number);
					}

				}
			}
			break;
		}


		tickets.close();

	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (T9_CBF->SelectedIndex == -1)
	{
		MessageBox::Show("No filter selected!");
	}
	else
	{
		string id;
		MarshalString(m_id, id);
		string Filter;
		MarshalString(T9_TBSearch->Text,Filter);
		tech_filter(Filter, T9_CBF->SelectedIndex);
	}
}
private: System::Void T9_RButton_Click(System::Object^  sender, System::EventArgs^  e) {
	string id;
	MarshalString(m_id, id);
	Technician_ticket_view(id);
}
private: System::Void T9_DGV_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	TabCon->SelectedIndex = 10;
	ShortLabel->Text = "Ticket Review";
	T11_StatusCB->Enabled = true;
	T11_UrgencyCB->Enabled = true;
	T11_AT->ReadOnly = false;
	T11_UButton->Visible = true;
	if (e->RowIndex != -1)
	{
		int Rindex = e->RowIndex;
		DataRow^ dr= m_TecTable->Rows[Rindex];
		string Tn;
		MarshalString( dr["Ticket Number"]->ToString(),Tn);
		FillTicketReview(Tn);
	}

}
void FillTicketReview(string TicketID)
{

	int ticket_number1=stoi(TicketID);
	ifstream tickets;
	tickets.open("ticket_database.txt");
	
	string subject, description, date, status, ticket_number, tech_notice;
	string line;
	string id1;
	string Urgency;

	while (getline(tickets, line))
	{
		getline(tickets, line);
		id1 = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		subject = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		status = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		date = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		description = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		ticket_number = line.substr(line.find(':') + 1, line.length());
		int TN = stoi(ticket_number);
		getline(tickets, line);
		Urgency = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		tech_notice = line.substr(line.find(':') + 1, line.length());


		if (TN == ticket_number1)
		{
			String^ nSubject = gcnew String(subject.c_str());
			String^ nStatus = gcnew String(status.c_str());
			string FullName = GetName(id1);
			String^ UserName = gcnew String(FullName.c_str());
			String^ GUrgency = gcnew String(Urgency.c_str());
			String^ nDescription = gcnew String(description.c_str());
			nDescription= nDescription->Replace('`', '\n');
			String^ nAt = gcnew String(tech_notice.c_str());
			String^ nTN = gcnew String(ticket_number.c_str());

			T11_TNlabel->Text = nTN;
			std::stringstream ss(date);
			std::vector<int> output;
			int i;
			while (ss >> i) {
				output.push_back(i);
				ss.ignore(1);
			}
			int s = stoi(ticket_number);

			int iId = stoi(id1);
			DateTime^ d = gcnew DateTime(output[2], output[1], output[0]);
			T11_Date->Text = d->ToShortDateString();
			T11_Subject->Text = nSubject;
			T11_Desc -> Text = nDescription;
			T11_AT->Text = nAt;
			T11_StatusCB->SelectedIndex = T11_StatusCB->FindStringExact(nStatus);
			T11_UrgencyCB->SelectedIndex = T11_UrgencyCB->FindStringExact(GUrgency);
			tickets.close();
			AddUserDetails(id1);
			return;
		}

	}
	tickets.close();


}
void AddUserDetails(string i_Id)
{
	string line;
	string id1,FullName,Email,PhoneN,Password,Department;
	ifstream myfile("New.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			getline(myfile, line);
			id1 = line.substr(line.find(':') + 1, line.length());
			if (CheckID(i_Id, id1) == true) //Checks if the user is already existing in the program
			{
				getline(myfile, line);
				FullName = line.substr(line.find(':') + 1, line.length());
				getline(myfile, line);
				Email = line.substr(line.find(':') + 1, line.length());
				getline(myfile, line);
				PhoneN = line.substr(line.find(':') + 1, line.length());
				getline(myfile, line);
				Department = line.substr(line.find(':') + 1, line.length());
				getline(myfile, line);
				Password = line.substr(line.find(':') + 1, line.length());
				myfile.close();
				String^ UserName = gcnew String(FullName.c_str());
				String^ nid1 = gcnew String(id1.c_str());
				String^ nEmail = gcnew String(Email.c_str());
				String^ nPhoneN = gcnew String(PhoneN.c_str());
				String^ nDepart = gcnew String(Department.c_str());

				T11_FN->Text = UserName;
				T11_ID->Text = nid1;
				T11_EMAIL->Text = nEmail;
				T11_Department->Text = nDepart;
				T11_PN->Text = nPhoneN;
				//String^ nAt = gcnew String(tech_notice.c_str());
			}
			else
			{
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
			}
		}
		myfile.close();
	}
}
private: System::Void T6_DGV_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	TabCon->SelectedIndex = 10;
	ShortLabel->Text = "Ticket Review";
	T11_StatusCB->Enabled = false;
	T11_UrgencyCB->Enabled = false;
	T11_AT->ReadOnly = true;
	T11_UButton->Visible = false;
	if (e->RowIndex != -1)
	{
		int Rindex = e->RowIndex;
		DataRow^ dr = m_UserTable->Rows[Rindex];
		string Tn;
		MarshalString(dr["Ticket Number"]->ToString(), Tn);
		FillTicketReview(Tn);
	}
}
private: System::Void T11_Back_Click(System::Object^  sender, System::EventArgs^  e) {
	if (T11_AT->ReadOnly == false)
	{
		TabCon->SelectedIndex = 8;
		ShortLabel->Text = "Tickets List";
	}
	else
	{
		TabCon->SelectedIndex = 5;
		ShortLabel->Text = "User History";
	}
}
private: System::Void T6_RButton_Click(System::Object^  sender, System::EventArgs^  e) {
	string user;
	MarshalString(m_id, user);
	User_tickets_history(user, 4);
}
private: System::Void TS_BackUser_Click(System::Object^  sender, System::EventArgs^  e) {
	TS_BackUser->Visible = false;
	TabCon->SelectedIndex = 2;
	ShortLabel->Text = "User Menu";
}
private: System::Void T10_MCB_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ifstream tickets;
	string flag, line,flag2;
	tickets.open("TicketAnalysis.txt");
	string input;
	MarshalString(T10_MCB->Text, input);
	if (tickets.is_open())
	{
		while (getline(tickets, line))
		{
			getline(tickets, line);
			flag = line.substr(line.find(':') + 1, line.length());
			if (flag == input)
			{
				getline(tickets, line);
				flag2 = line.substr(line.find(':') + 1, line.length());
				String^ s = gcnew String(flag2.c_str());
				s = s->Replace('`', '\n');
				T10_RTB->Text = s;
			}
			else
			{
				getline(tickets, line);
			}
		}
	}
	else
	{
		MessageBox::Show("No Ticket Descriptions DB!");
	}
	tickets.close();
	FillChartInfo(input);
}
/*bool isDigit(char c)
{
	if (c >= '0' && c <= '9')
		return true;
	else
		return false;
}*/
private: System::Void T10_MCB_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (( e->KeyChar <'0' || e->KeyChar > '9') && (e->KeyChar != '-') && (e->KeyChar != 8))
	{
		e->Handled = true;
	}

}
private: System::Void T10_MCB_TextUpdate(System::Object^  sender, System::EventArgs^  e) {
	if (T10_MCB->Text->Length == 7 && T10_MCB->Text[2] == '-')
	{
		string temp;
		MarshalString(T10_MCB->Text, temp);
		FillAnalysis(temp);
	}
}
void FillAnalysis(string Date)
{
	fstream tickets;
	string flag, line, flag2,Desc="Description:",D="Date:",description;
	tickets.open("TicketAnalysis.txt", fstream::in| fstream::out|fstream::ate);
	string input;
	MarshalString(T10_MCB->Text, input);
	if (tickets.is_open())
	{
		while (getline(tickets, line))
		{
			getline(tickets, line);
			flag = line.substr(line.find(':') + 1, line.length());
			if (flag == input)
			{
				getline(tickets, line);
				MessageBox::Show("Already In List!");
				tickets.close();
				return;
			}
			else
			{
				getline(tickets, line);
			}
		}
	}
	else
	{
		MessageBox::Show("No Ticket Descriptions DB!");
	}
//	tickets.close();
	tickets.clear();
//	tickets.open("TicketAnalysis.txt", fstream::out|fstream::app);
	tickets << "------------------------------";
	tickets << endl;
	tickets << D;
	tickets << Date;
	tickets << endl;
	tickets << Desc;
	//String^ temp = T10_RTB->Text->Replace('\n', '`');
	//MarshalString(temp, description);
	tickets << "None";
	tickets << endl;
	tickets.close();
	FillComboBox();
	String^ s = gcnew String(Date.c_str());
	T10_MCB->SelectedIndex = T10_MCB->FindStringExact(s);
	
	
}
private: System::Void T10_Update_Click(System::Object^  sender, System::EventArgs^  e)
{
	ifstream tickets;
	ofstream tickets2;
	string flag, line, flag2, Desc = "Description:", D = "Date:", description;
	tickets.open("TicketAnalysis.txt");
	tickets2.open("temp.txt" , ofstream::trunc);

	string input;
	MarshalString(T10_MCB->Text, input);
	if (tickets.is_open() && tickets2.is_open())
	{
		while (getline(tickets, line))
		{
			tickets2 << line << endl;

			getline(tickets, line);
			tickets2 << line << endl;
			flag = line.substr(line.find(':') + 1, line.length());
			if (flag == input)
			{
				getline(tickets, line);
				String^ temp = T10_RTB->Text->Replace('\n', '`');
				MarshalString(temp, description);
				tickets2 << Desc;
				tickets2 << description;
				tickets2 << endl;
			}
			else
			{
				getline(tickets, line);
				tickets2 << line << endl;
			}
		}
	}
	else
	{
		MessageBox::Show("No Ticket Descriptions DB!");
	}
	tickets.close();
	tickets2.close();
	if (remove("TicketAnalysis.txt") != 0)
	{
		MessageBox::Show("Failed!");
	}
	rename("temp.txt", "TicketAnalysis.txt");

}
private: System::Void T11_UButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (T11_UrgencyCB->SelectedIndex == T11_UrgencyCB->FindStringExact("Unknown") || T11_AT->Text == "empty")
	{
		MessageBox::Show("Please fill necessary fields!");
	}
	else
	{
		UpdateTicketTech();
	}
}
void UpdateTicketTech()
{
	ifstream tickets;
	ofstream tickets2;
	string subject, description, date, status, ticket_number, tech_notice;
	string id1;
	string Urgency;
	string flag, line, flag2;
	tickets.open("ticket_database.txt");
	tickets2.open("temp.txt", ofstream::trunc);

	string input;
	MarshalString(T10_MCB->Text, input);
	if (tickets.is_open() && tickets2.is_open())
	{
		while (getline(tickets, line))
		{
			tickets2 << line << endl;

			getline(tickets, line);
			id1 = line;
			getline(tickets, line);
			subject = line;
			getline(tickets, line);
			status = line;
			getline(tickets, line);
			date = line;
			getline(tickets, line);
			description = line;
			getline(tickets, line);
			ticket_number = line.substr(line.find(':') + 1, line.length());
			getline(tickets, line);
			Urgency = line;
			getline(tickets, line);
			tech_notice = line;

			String^ temp = gcnew String(ticket_number.c_str());
			if (temp == T11_TNlabel->Text)
			{
				tickets2 << id1 << endl;
				tickets2 << subject << endl;
				MarshalString(T11_StatusCB->Text, status);
				tickets2 << "Status:"<< status << endl;
				tickets2 << date << endl;
				tickets2 << description << endl;
				tickets2 << ticket_number << endl;
				MarshalString(T11_UrgencyCB->Text, Urgency);
				tickets2 <<"Urgency:"<< Urgency << endl;
				String^ temp = T11_AT->Text->Replace('\n', '`');
				MarshalString(temp, tech_notice);
				tickets2 <<"Technician Notice:" << tech_notice << endl;

			}
			else
			{
				tickets2 << id1 << endl;
				tickets2 << subject << endl;
				tickets2 << status << endl;
				tickets2 << date << endl;
				tickets2 << description << endl;
				tickets2 << ticket_number << endl;
				tickets2 << Urgency << endl;
				tickets2 << tech_notice << endl;
			}
		}
	}
	else
	{
		MessageBox::Show("No Ticket Descriptions DB!");
	}
	tickets.close();
	tickets2.close();
	if (remove("ticket_database.txt") != 0)
	{
		MessageBox::Show("Failed!");
	}
	rename("temp.txt", "ticket_database.txt");
}
void FillChartInfo(string Date)
{
	for (int i = 0; i < 4; i++)
	{
		m_SubjectArray[i] = 0;
		m_UrgencyArray[i] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			m_SubUrgArray[i][j] = 0;
		}
	}
	string subject, description, date, status, ticket_number, tech_notice;
	string line;
	string id1;
	string Urgency;
	Date += ' ';
	ifstream tickets("ticket_database.txt");
	while (getline(tickets, line))
	{
		getline(tickets, line);
		id1 = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		subject = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		status = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		date = line.substr(line.find(':') + 1, line.length());
		date = date.substr(date.find('-') + 1, line.length());

		getline(tickets, line);
		description = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		ticket_number = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		Urgency = line.substr(line.find(':') + 1, line.length());
		getline(tickets, line);
		tech_notice = line.substr(line.find(':') + 1, line.length());
		if (Date == date)
		{
			if ("Maintenance" == subject)
			{
				m_SubjectArray[0]++;
			}
			else if ("Grades" == subject)
			{
				m_SubjectArray[1]++;
			}
			else if ("Courses" == subject)
			{
				m_SubjectArray[2]++;
			}
			else if ("Other" == subject)
			{
				m_SubjectArray[3]++;
			}
			if ("Unknown" == Urgency)
			{
				m_UrgencyArray[0]++;
				FillMinorArray(subject, 0);
			}
			else if ("Low" == Urgency)
			{
				m_UrgencyArray[1]++;
				FillMinorArray(subject, 1);
			}
			else if ("Medium" == Urgency)
			{
				m_UrgencyArray[2]++;
				FillMinorArray(subject, 2);
			}
			else if ("High" == Urgency)
			{
				m_UrgencyArray[3]++;
				FillMinorArray(subject, 3);
			}
		}
	}
	cli::array<String^>^ managedArray = gcnew cli::array<String^>(4);
	managedArray[0] = "Maintenance";
	managedArray[1] = "Grades";
	managedArray[2] = "Courses";
	managedArray[3] = "Other";

	T11_Chart->Series->FindByName("Subjects")->Points->DataBindXY(managedArray,m_SubjectArray);
	T11_Chart->Series->FindByName("Subjects")["PieLabelStyle"] = "Disabled";

	cli::array<String^>^ managedArray2 = gcnew cli::array<String^>(4);
	managedArray2[0] = "Unknown";
	managedArray2[1] = "Low";
	managedArray2[2] = "Medium";
	managedArray2[3] = "High";
	T11_Chart->Series->FindByName("Urgency")->Points->DataBindXY(managedArray2,m_UrgencyArray);
	T11_Chart->Series->FindByName("Urgency")["PieLabelStyle"] = "Disabled";
	
	//T11_Chart->Legends->FindByName("SubUrg")->
	T11_Chart->Series->FindByName("Unknown")->Points->Clear();
	T11_Chart->Series->FindByName("Low")->Points->Clear();
	T11_Chart->Series->FindByName("Medium")->Points->Clear();
	T11_Chart->Series->FindByName("High")->Points->Clear();

	for (int i = 0; i < 4; i++)
	{
		T11_Chart->Series->FindByName("Unknown")->Points->AddXY(managedArray[i], m_SubUrgArray[i][0]);
		T11_Chart->Series->FindByName("Low")->Points->AddXY(managedArray[i], m_SubUrgArray[i][1]);
		T11_Chart->Series->FindByName("Medium")->Points->AddXY(managedArray[i], m_SubUrgArray[i][2]);
		T11_Chart->Series->FindByName("High")->Points->AddXY(managedArray[i], m_SubUrgArray[i][3]);
	}



	T10_RB1->Checked = true;

	tickets.close();
}
Void FillMinorArray(string Subject,int Sector)
{
	if ("Maintenance" == Subject)
	{
		m_SubUrgArray[Sector][0]++;
	}
	else if ("Grades" == Subject)
	{
		m_SubUrgArray[Sector][1]++;
	}
	else if ("Courses" == Subject)
	{
		m_SubUrgArray[Sector][2]++;
	}
	else if ("Other" == Subject)
	{
		m_SubUrgArray[Sector][3]++;
	}
}



private: System::Void T10_RB1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (T10_RB1->Checked)
	{
		T11_Chart->Series->FindByName("Subjects")->Enabled = true;
		T11_Chart->Titles->FindByName("Subject")->Visible = true;

		T11_Chart->Series->FindByName("Unknown")->Enabled = false;
		T11_Chart->Series->FindByName("Low")->Enabled = false;
		T11_Chart->Series->FindByName("Medium")->Enabled = false;
		T11_Chart->Series->FindByName("High")->Enabled = false;
		T11_Chart->Titles->FindByName("SubUrg")->Visible = false;

		T11_Chart->Series->FindByName("Urgency")->Enabled = false;
		T11_Chart->Titles->FindByName("Urgency")->Visible = false;
	}
}
private: System::Void T10_RB2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (T10_RB2->Checked)
	{
		T11_Chart->Series->FindByName("Urgency")->Enabled = true;
		T11_Chart->Titles->FindByName("Urgency")->Visible = true;

		T11_Chart->Series->FindByName("Unknown")->Enabled = false;
		T11_Chart->Series->FindByName("Low")->Enabled = false;
		T11_Chart->Series->FindByName("Medium")->Enabled = false;
		T11_Chart->Series->FindByName("High")->Enabled = false;
		T11_Chart->Titles->FindByName("SubUrg")->Visible = false;

		T11_Chart->Series->FindByName("Subjects")->Enabled = false;
		T11_Chart->Titles->FindByName("Subject")->Visible = false;

	}
}
private: System::Void T10_RB3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if (T10_RB3->Checked)
	{
		T11_Chart->Series->FindByName("Urgency")->Enabled = false;
		T11_Chart->Titles->FindByName("Urgency")->Visible = false;


		T11_Chart->Series->FindByName("Unknown")->Enabled = true;
		T11_Chart->Series->FindByName("Low")->Enabled = true;
		T11_Chart->Series->FindByName("Medium")->Enabled = true;
		T11_Chart->Series->FindByName("High")->Enabled = true;
		T11_Chart->Titles->FindByName("SubUrg")->Visible = true;

		T11_Chart->Series->FindByName("Subjects")->Enabled = false;
		T11_Chart->Titles->FindByName("Subject")->Visible = false;

	}
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
