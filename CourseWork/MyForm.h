#pragma once
#include "Secant.h"
#include "Bisection.h"
#include "Newton.h"
#include "Functions.h"
#include <iomanip>
#include <fstream>
#include <iostream>
std::ofstream file("Output.txt"); //Файл виводу
namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  rb4;
	private: System::Windows::Forms::RadioButton^  rb5;
	private: System::Windows::Forms::RadioButton^  rb6;


	protected:

	protected:




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  rb1;
	private: System::Windows::Forms::RadioButton^  rb2;
	private: System::Windows::Forms::RadioButton^  rb3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  graph_button;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  graphchart;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;









	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->rb4 = (gcnew System::Windows::Forms::RadioButton());
			this->rb5 = (gcnew System::Windows::Forms::RadioButton());
			this->rb6 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->rb1 = (gcnew System::Windows::Forms::RadioButton());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->graph_button = (gcnew System::Windows::Forms::Button());
			this->graphchart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphchart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// rb4
			// 
			this->rb4->AutoSize = true;
			this->rb4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rb4->Location = System::Drawing::Point(7, 22);
			this->rb4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->rb4->Name = L"rb4";
			this->rb4->Size = System::Drawing::Size(117, 21);
			this->rb4->TabIndex = 1;
			this->rb4->TabStop = true;
			this->rb4->Text = L"Метод бісекції";
			this->rb4->UseVisualStyleBackColor = true;
			this->rb4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb4_CheckedChanged);
			// 
			// rb5
			// 
			this->rb5->AutoSize = true;
			this->rb5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rb5->Location = System::Drawing::Point(7, 49);
			this->rb5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->rb5->Name = L"rb5";
			this->rb5->Size = System::Drawing::Size(129, 21);
			this->rb5->TabIndex = 2;
			this->rb5->TabStop = true;
			this->rb5->Text = L"Метод Ньютона";
			this->rb5->UseVisualStyleBackColor = true;
			this->rb5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb5_CheckedChanged);
			// 
			// rb6
			// 
			this->rb6->AutoSize = true;
			this->rb6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rb6->Location = System::Drawing::Point(7, 71);
			this->rb6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->rb6->Name = L"rb6";
			this->rb6->Size = System::Drawing::Size(111, 21);
			this->rb6->TabIndex = 3;
			this->rb6->TabStop = true;
			this->rb6->Text = L"Метод січних";
			this->rb6->UseVisualStyleBackColor = true;
			this->rb6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rb6_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(51, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 46);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// rb1
			// 
			this->rb1->AutoSize = true;
			this->rb1->BackColor = System::Drawing::SystemColors::Control;
			this->rb1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rb1->Location = System::Drawing::Point(10, 21);
			this->rb1->Name = L"rb1";
			this->rb1->Size = System::Drawing::Size(141, 21);
			this->rb1->TabIndex = 6;
			this->rb1->TabStop = true;
			this->rb1->Text = L"-x^5+px^4-tx^3+j=0";
			this->rb1->UseVisualStyleBackColor = false;
			// 
			// rb2
			// 
			this->rb2->AutoSize = true;
			this->rb2->BackColor = System::Drawing::SystemColors::Control;
			this->rb2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rb2->Location = System::Drawing::Point(10, 46);
			this->rb2->Name = L"rb2";
			this->rb2->Size = System::Drawing::Size(196, 21);
			this->rb2->TabIndex = 7;
			this->rb2->TabStop = true;
			this->rb2->Text = L"-px^4+t x^(1/3)-j sqrt(x)+9=0";
			this->rb2->UseVisualStyleBackColor = false;
			// 
			// rb3
			// 
			this->rb3->AutoSize = true;
			this->rb3->BackColor = System::Drawing::SystemColors::Control;
			this->rb3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rb3->Location = System::Drawing::Point(10, 71);
			this->rb3->Name = L"rb3";
			this->rb3->Size = System::Drawing::Size(152, 21);
			this->rb3->TabIndex = 8;
			this->rb3->TabStop = true;
			this->rb3->Text = L"(px^5-tx^2+j)^(1/3)=0";
			this->rb3->UseVisualStyleBackColor = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rb1);
			this->groupBox1->Controls->Add(this->rb3);
			this->groupBox1->Controls->Add(this->rb2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(41, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(198, 105);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Рівняння";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rb4);
			this->groupBox2->Controls->Add(this->rb5);
			this->groupBox2->Controls->Add(this->rb6);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(41, 183);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(198, 112);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Методи";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(648, 223);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 22);
			this->textBox1->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(617, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Результат";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 15);
			this->label2->TabIndex = 16;
			this->label2->Text = L"p:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(99, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 15);
			this->label3->TabIndex = 17;
			this->label3->Text = L"t:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(174, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 15);
			this->label4->TabIndex = 18;
			this->label4->Text = L"j:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->numericUpDown3);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Controls->Add(this->numericUpDown1);
			this->groupBox3->Location = System::Drawing::Point(245, 183);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(201, 115);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(0, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 15);
			this->label8->TabIndex = 7;
			this->label8->Text = L"x0:";
			this->label8->Visible = false;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 6;
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown3->Location = System::Drawing::Point(22, 50);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(63, 22);
			this->numericUpDown3->TabIndex = 6;
			this->numericUpDown3->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(134, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 15);
			this->label7->TabIndex = 5;
			this->label7->Text = L"e:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(156, 18);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(39, 22);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"0,001";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(68, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 15);
			this->label6->TabIndex = 3;
			this->label6->Text = L"b:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 15);
			this->label5->TabIndex = 2;
			this->label5->Text = L"a:";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 1;
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown2->Location = System::Drawing::Point(91, 18);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(38, 22);
			this->numericUpDown2->TabIndex = 1;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 1;
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown1->Location = System::Drawing::Point(22, 18);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(40, 22);
			this->numericUpDown1->TabIndex = 0;
			// 
			// graph_button
			// 
			this->graph_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->graph_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->graph_button->Location = System::Drawing::Point(277, 94);
			this->graph_button->Name = L"graph_button";
			this->graph_button->Size = System::Drawing::Size(153, 52);
			this->graph_button->TabIndex = 20;
			this->graph_button->Text = L"Побудувати графік";
			this->graph_button->UseVisualStyleBackColor = false;
			this->graph_button->Click += gcnew System::EventHandler(this, &MyForm::graph_button_Click);
			// 
			// graphchart
			// 
			chartArea1->Name = L"ChartArea1";
			this->graphchart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->graphchart->Legends->Add(legend1);
			this->graphchart->Location = System::Drawing::Point(451, 12);
			this->graphchart->Name = L"graphchart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->LegendText = L"y=f(x)";
			series1->Name = L"Series1";
			this->graphchart->Series->Add(series1);
			this->graphchart->Size = System::Drawing::Size(471, 191);
			this->graphchart->TabIndex = 21;
			this->graphchart->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Графік функції";
			this->graphchart->Titles->Add(title1);
			this->graphchart->Visible = false;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 1;
			this->numericUpDown4->Location = System::Drawing::Point(41, 131);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(52, 22);
			this->numericUpDown4->TabIndex = 22;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->DecimalPlaces = 1;
			this->numericUpDown5->Location = System::Drawing::Point(119, 131);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(49, 22);
			this->numericUpDown5->TabIndex = 23;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->DecimalPlaces = 1;
			this->numericUpDown6->Location = System::Drawing::Point(192, 129);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(47, 22);
			this->numericUpDown6->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(617, 228);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 17);
			this->label9->TabIndex = 25;
			this->label9->Text = L"x=";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(44, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(65, 22);
			this->textBox2->TabIndex = 26;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(-1, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 15);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Час, с:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(201, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(55, 22);
			this->textBox3->TabIndex = 28;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(118, 26);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 15);
			this->label11->TabIndex = 29;
			this->label11->Text = L"К-ть ітерацій:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Location = System::Drawing::Point(556, 274);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(263, 111);
			this->groupBox4->TabIndex = 30;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Характеристики методу";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 69);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(148, 15);
			this->label12->TabIndex = 31;
			this->label12->Text = L"К-ть атомарних операцій:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(157, 65);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(63, 22);
			this->textBox4->TabIndex = 30;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(316, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(74, 76);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 416);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->graphchart);
			this->Controls->Add(this->graph_button);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"Розв\'язання нелінійних рівнянь";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing_1);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TextChanged += gcnew System::EventHandler(this, &MyForm::g);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphchart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void g(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void rb4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->label5->Text = L"a:";
		this->label6->Text = L"b:";
		this->numericUpDown3->Visible = false;
		this->label8->Visible = false;
	}
	private: System::Void rb5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->label5->Text = L"a:";
		this->label6->Text = L"b:";
		this->numericUpDown3->Visible = true;
		this->label8->Visible = true;
	}
	private: System::Void rb6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->numericUpDown3->Visible = false;
		this->label8->Visible = false;
		this->label5->Text = L"x0:";
		this->label6->Text = L"x1:";
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) { //метод для створення масштабування графіка
		graphchart->ChartAreas[0]->AxisX->ScaleView->Zoom(-100, 100); // задаем область масштабирования
		graphchart->ChartAreas[0]->CursorX->IsUserEnabled = true; //даем пользователю право масштабировать
		graphchart->ChartAreas[0]->CursorX->IsUserSelectionEnabled = true; //даем пользователю право выбирать интервал масштабирования непосредственно на графике
		graphchart->ChartAreas[0]->AxisX->ScaleView->Zoomable = true; //включаем собственно режим масштабирования по оси Х
		graphchart->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;  //добавляем полосы прокрутки
																				 //аналогично для оси Y
		graphchart->ChartAreas[0]->AxisY->ScaleView->Zoom(-100, 100);
		graphchart->ChartAreas[0]->CursorY->IsUserEnabled = true;
		graphchart->ChartAreas[0]->CursorY->IsUserSelectionEnabled = true;
		graphchart->ChartAreas[0]->AxisY->ScaleView->Zoomable = true;
		graphchart->ChartAreas[0]->AxisY->ScrollBar->IsPositionedInside = true;
	}
	private: double pf, tf, jf, ef, x0, a, b, x,x1,x2; int selectf; //коефіцієнти,точність,початкове наближення,проміжок,корінь,обрана ф-я
	private: System::Void graph_button_Click(System::Object^  sender, System::EventArgs^  e) { //метод для побудови графіка
		graphchart->Visible = true;
		pf = Convert::ToDouble(numericUpDown4->Value);
		tf = Convert::ToDouble(numericUpDown5->Value);
		jf = Convert::ToDouble(numericUpDown6->Value);
		if (rb1->Checked)selectf = 1;
		else if (rb2->Checked)selectf = 2;
		else if (rb3->Checked)selectf = 3;
		switch (selectf) {
		case 1: {graphchart->Series[0]->Points->Clear(); for (double i = -10;i < 10;i = i + 0.1)
			graphchart->Series[0]->Points->AddXY(i, func(i, 1, pf, tf, jf));
			break;
		}
		case 2: {graphchart->Series[0]->Points->Clear(); for (double i = 0;i < 20;i = i + 0.1) {
			graphchart->Series[0]->Points->AddXY(i, func(i, 2, pf, tf, jf));
		}
				break;
		}
		case 3: {graphchart->Series[0]->Points->Clear(); for (double i = -100;i < 100;i = i + 0.1)
			graphchart->Series[0]->Points->AddXY(i, func(i, 3, pf, tf, jf));
			break;
		}
		default: {MessageBox::Show("Оберіть функцію!", "Error");break;
		}
		}
	}
			 /*Метод для уточнення кореня*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int numIter = 0, atomOper = 0, derOper = 0; //к-ітерацій,к-ть атомарних операцій, к-ть атомарних операцій в похідній
		pf = Convert::ToDouble(numericUpDown4->Value);
		tf = Convert::ToDouble(numericUpDown5->Value);
		jf = Convert::ToDouble(numericUpDown6->Value);
		a = Convert::ToDouble(numericUpDown1->Value);
		x1= Convert::ToDouble(numericUpDown1->Value);
		b = Convert::ToDouble(numericUpDown2->Value);
		x2= Convert::ToDouble(numericUpDown2->Value);
		x0 = Convert::ToDouble(numericUpDown3->Value);
		file << "Рівняння: ";
		if (rb1->Checked) {
			selectf = 1;
			file << "-x^5+px^4-tx^3+j=0" << std::endl;
			file << "з коефіцієнтами p=" << pf << " t=" << tf << " j=" << jf << std::endl;
			atomOper = 9;
			derOper = 10;
		}
		else if (rb2->Checked) {
			selectf = 2;
			file << "-px^4+tx^(1/3)-jsqrt(x)+9=0" << std::endl;
			file << "з коефіцієнтами p=" << pf << " t=" << tf << " j=" << jf << std::endl;
			atomOper = 10;
			derOper = 12;
		}
		else if (rb3->Checked) {
			selectf = 3;
			file << "(px^5-tx^2+j)^(1/3)=0" << std::endl;
			file << "з коефіцієнтами p=" << pf << " t=" << tf << " j=" << jf << std::endl;
			atomOper = 7;
			derOper = 15;
		}

		if (!rb1->Checked && !rb2->Checked && !rb3->Checked) {
			MessageBox::Show("Оберіть рівняння!", "Error"); file << "Не обрано рівняння" << std::endl;
		}
		else if (!rb4->Checked && !rb5->Checked && !rb6->Checked) {
			MessageBox::Show("Оберіть метод!", "Error");
			file << "Не обрано метод" << std::endl;
		}
		else if (!Double::TryParse(textBox5->Text, ef) || ef <= 0) {
			MessageBox::Show("Неправильно введена точність!", "Error");
			file << "Не правильна точність" << std::endl;
		}
		else if ((a >= b)) {
			MessageBox::Show("Ліва границя менше правої!", "Неправильний проміжок");
			file << "Помилка. Ліва границя менше правої." << std::endl;
		}
		else if (func(a, selectf, pf, tf, jf)*func(b, selectf, pf, tf, jf) > 0 && checkPlural(a, b, selectf, pf, tf, jf) == 0 && !rb6->Checked ) {
			MessageBox::Show("На цьому проміжку немає коренів!", "Massage!");
			file << "На проміжку 0 коренів" << std::endl;
		}
		else if (checkPlural(a, b, selectf, pf, tf, jf)==2 && !rb6->Checked && !rb5->Checked) {
			MessageBox::Show("На цьому проміжку більше ніж 1 корінь!", "Невірний проміжок!");
			file << "На проміжку більше 1 кореня" << std::endl;
		}
		else {
			if (rb4->Checked) {
				unsigned int starttime = clock();
				file << "Метод бісекції" << std::endl;
				file << "Проміжок від а=" << a << " до b=" << b << " точність e=" << ef << std::endl;
				x = methodBisection(selectf, pf, tf, jf, a, b, ef, numIter);
				file << "Результат: х=" << x << std::endl;
				unsigned int endtime = clock();
				atomOper += 7;
				file << "Час, с: " << (((double)endtime - (double)starttime) / 1000) << " к-ть ітерацій:" << numIter << " к-ть атомарних операцій " << atomOper << std::endl << std::endl;
				textBox2->Text = ((Convert::ToString(((double)endtime - (double)starttime) / 1000)));
				textBox3->Text = Convert::ToString(numIter);
				textBox4->Text = Convert::ToString(atomOper);
				textBox1->Text = Convert::ToString(x);
			}
			else if (rb5->Checked) {
				unsigned int starttime = clock();
				file << "Метод Ньютона" << std::endl;
				file << "Проміжок від а=" << a << " до b=" << b << " точність e=" << ef << std::endl;
				x = methodNewton(selectf, pf, tf, jf, a, b, ef, x0, numIter);
				if (numIter > 600000) {
					MessageBox::Show("Початкове наближення недостатнью близьке до рішення!", "Невірне наближення!");
					file << "Недостатнє наближення." << std::endl;
					unsigned int endtime = clock();
				}
				else if (numIter == -1) {
					MessageBox::Show("Похідна дорівнює 0!", "Кінець роботи методу.");
					file << "Похідна дорівнює 0." << std::endl;
					unsigned int endtime = clock();
				}
				else {
					file << "Результат: х=" << x << std::endl;
					unsigned int endtime = clock();
					atomOper = atomOper + 3 + derOper;
					file << "Час, с: " << (((double)endtime - (double)starttime) / 1000) << " к-ть ітерацій:" << numIter << " к-ть атомарних операцій " << atomOper << std::endl << std::endl;
					textBox2->Text = ((Convert::ToString(((double)endtime - (double)starttime) / 1000)));
					textBox3->Text = Convert::ToString(numIter);
					textBox4->Text = Convert::ToString(atomOper);
					textBox1->Text = Convert::ToString(x);
				}
			}
			else if (rb6->Checked) {
				unsigned int starttime = clock();
				file << "Метод січних" << std::endl;
				file << "Проміжок від а=" << a << " до b=" << b << " точність e=" << ef << std::endl;
				x = methodSecant(selectf, pf, tf, jf, x1, x2, ef, numIter);
				if (selectf == 2 && !(x==x)) {
					MessageBox::Show("Недостатні наближення!", "Помилка");
					file << "Недостатні наближення!" << std::endl;
				}
				else {
					file << "Результат: х=" << x << std::endl;
					unsigned int endtime = clock();
					atomOper += 7;
					file << "Час, с: " << (((double)endtime - (double)starttime) / 1000) << " к-ть ітерацій:" << numIter << " к-ть атомарних операцій " << atomOper << std::endl << std::endl;
					textBox2->Text = ((Convert::ToString(((double)endtime - (double)starttime) / 1000)));
					textBox3->Text = Convert::ToString(numIter);
					textBox4->Text = Convert::ToString(atomOper);
					textBox1->Text = Convert::ToString(x);
				}
			}
			
		}
	}
			 /*Метод для підтвердження виходу з програми*/
	private: System::Void MyForm_FormClosing_1(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (MessageBox::Show("Ви справді хочете вийти?", "Вихід", MessageBoxButtons::YesNo) == ::System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
		file.close();
	}
	};
}