#pragma once

namespace Phys25 {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ стартToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ стопToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox_x0;
	private: System::Windows::Forms::TextBox^ textBox_v0;
	private: System::Windows::Forms::TextBox^ textBox_m;
	private: System::Windows::Forms::TextBox^ textBox_k;
	private: System::Windows::Forms::TextBox^ textBox_n;
	private: System::Windows::Forms::TextBox^ textBox_d;

	private: System::Windows::Forms::TextBox^ textBox_l;
	private: System::Windows::Forms::TextBox^ textBox_w;
	private: System::Windows::Forms::TextBox^ textBox_f0;
	private: System::Windows::Forms::TextBox^ textBox_r;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox_dt;
	private: System::Windows::Forms::TextBox^ textBox_t_max;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartx;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartv;
	private: System::Windows::Forms::TextBox^ textBox_T;
	private: System::Windows::Forms::TextBox^ textBox_L1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox_wr;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox_L2;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart5;







	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->стартToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стопToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_x0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_v0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox_k = (gcnew System::Windows::Forms::TextBox());
			this->textBox_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox_d = (gcnew System::Windows::Forms::TextBox());
			this->textBox_l = (gcnew System::Windows::Forms::TextBox());
			this->textBox_w = (gcnew System::Windows::Forms::TextBox());
			this->textBox_f0 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_r = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_dt = (gcnew System::Windows::Forms::TextBox());
			this->textBox_t_max = (gcnew System::Windows::Forms::TextBox());
			this->chartx = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartv = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox_T = (gcnew System::Windows::Forms::TextBox());
			this->textBox_L1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox_wr = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox_L2 = (gcnew System::Windows::Forms::TextBox());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartx))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(12, 31);
			this->chart->Name = L"chart";
			this->chart->RightToLeft = System::Windows::Forms::RightToLeft::No;
			series1->BorderWidth = 5;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series2->BorderWidth = 5;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Blue;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			series3->BorderWidth = 5;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Blue;
			series3->Legend = L"Legend1";
			series3->Name = L"Series3";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::SplineArea;
			series4->Color = System::Drawing::Color::Red;
			series4->Legend = L"Legend1";
			series4->Name = L"Series4";
			series5->BorderWidth = 2;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Black;
			series5->Legend = L"Legend1";
			series5->Name = L"Series5";
			series6->BorderWidth = 2;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::Black;
			series6->Legend = L"Legend1";
			series6->Name = L"Series6";
			series7->BorderWidth = 3;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::SplineArea;
			series7->Color = System::Drawing::Color::Red;
			series7->Legend = L"Legend1";
			series7->Name = L"Series7";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Series->Add(series4);
			this->chart->Series->Add(series5);
			this->chart->Series->Add(series6);
			this->chart->Series->Add(series7);
			this->chart->Size = System::Drawing::Size(1000, 500);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->стартToolStripMenuItem,
					this->стопToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// стартToolStripMenuItem
			// 
			this->стартToolStripMenuItem->Name = L"стартToolStripMenuItem";
			this->стартToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->стартToolStripMenuItem->Text = L"Старт";
			this->стартToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::стартToolStripMenuItem_Click);
			// 
			// стопToolStripMenuItem
			// 
			this->стопToolStripMenuItem->Name = L"стопToolStripMenuItem";
			this->стопToolStripMenuItem->Size = System::Drawing::Size(56, 24);
			this->стопToolStripMenuItem->Text = L"Стоп";
			this->стопToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::стопToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 545);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"x0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 575);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"v0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 605);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"m";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 635);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"k";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 665);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"μ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 695);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"d";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 725);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 25);
			this->label7->TabIndex = 8;
			this->label7->Text = L"l";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(220, 548);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 25);
			this->label8->TabIndex = 9;
			this->label8->Text = L"w";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(220, 575);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 25);
			this->label9->TabIndex = 10;
			this->label9->Text = L"f0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(220, 605);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 25);
			this->label10->TabIndex = 11;
			this->label10->Text = L"r";
			// 
			// textBox_x0
			// 
			this->textBox_x0->Location = System::Drawing::Point(60, 548);
			this->textBox_x0->Name = L"textBox_x0";
			this->textBox_x0->Size = System::Drawing::Size(100, 22);
			this->textBox_x0->TabIndex = 12;
			// 
			// textBox_v0
			// 
			this->textBox_v0->Location = System::Drawing::Point(60, 575);
			this->textBox_v0->Name = L"textBox_v0";
			this->textBox_v0->Size = System::Drawing::Size(100, 22);
			this->textBox_v0->TabIndex = 13;
			// 
			// textBox_m
			// 
			this->textBox_m->Location = System::Drawing::Point(60, 605);
			this->textBox_m->Name = L"textBox_m";
			this->textBox_m->Size = System::Drawing::Size(100, 22);
			this->textBox_m->TabIndex = 14;
			// 
			// textBox_k
			// 
			this->textBox_k->Location = System::Drawing::Point(60, 635);
			this->textBox_k->Name = L"textBox_k";
			this->textBox_k->Size = System::Drawing::Size(100, 22);
			this->textBox_k->TabIndex = 15;
			// 
			// textBox_n
			// 
			this->textBox_n->Location = System::Drawing::Point(60, 665);
			this->textBox_n->Name = L"textBox_n";
			this->textBox_n->Size = System::Drawing::Size(100, 22);
			this->textBox_n->TabIndex = 16;
			// 
			// textBox_d
			// 
			this->textBox_d->Location = System::Drawing::Point(60, 695);
			this->textBox_d->Name = L"textBox_d";
			this->textBox_d->Size = System::Drawing::Size(100, 22);
			this->textBox_d->TabIndex = 17;
			// 
			// textBox_l
			// 
			this->textBox_l->Location = System::Drawing::Point(60, 725);
			this->textBox_l->Name = L"textBox_l";
			this->textBox_l->Size = System::Drawing::Size(100, 22);
			this->textBox_l->TabIndex = 18;
			// 
			// textBox_w
			// 
			this->textBox_w->Location = System::Drawing::Point(252, 548);
			this->textBox_w->Name = L"textBox_w";
			this->textBox_w->Size = System::Drawing::Size(100, 22);
			this->textBox_w->TabIndex = 19;
			// 
			// textBox_f0
			// 
			this->textBox_f0->Location = System::Drawing::Point(252, 575);
			this->textBox_f0->Name = L"textBox_f0";
			this->textBox_f0->Size = System::Drawing::Size(100, 22);
			this->textBox_f0->TabIndex = 20;
			// 
			// textBox_r
			// 
			this->textBox_r->Location = System::Drawing::Point(252, 605);
			this->textBox_r->Name = L"textBox_r";
			this->textBox_r->Size = System::Drawing::Size(100, 22);
			this->textBox_r->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(220, 635);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 25);
			this->label11->TabIndex = 22;
			this->label11->Text = L"dt";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(220, 665);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 25);
			this->label12->TabIndex = 23;
			this->label12->Text = L"tmax";
			// 
			// textBox_dt
			// 
			this->textBox_dt->Location = System::Drawing::Point(252, 635);
			this->textBox_dt->Name = L"textBox_dt";
			this->textBox_dt->Size = System::Drawing::Size(100, 22);
			this->textBox_dt->TabIndex = 24;
			// 
			// textBox_t_max
			// 
			this->textBox_t_max->Location = System::Drawing::Point(280, 669);
			this->textBox_t_max->Name = L"textBox_t_max";
			this->textBox_t_max->Size = System::Drawing::Size(100, 22);
			this->textBox_t_max->TabIndex = 25;
			// 
			// chartx
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartx->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chartx->Legends->Add(legend2);
			this->chartx->Location = System::Drawing::Point(1018, 31);
			this->chartx->Name = L"chartx";
			series8->BorderWidth = 3;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Color = System::Drawing::Color::Blue;
			series8->Legend = L"Legend1";
			series8->Name = L"Series1";
			this->chartx->Series->Add(series8);
			this->chartx->Size = System::Drawing::Size(500, 300);
			this->chartx->TabIndex = 26;
			this->chartx->Text = L"chartx";
			title1->Name = L"Координата";
			title1->Text = L"Координата";
			this->chartx->Titles->Add(title1);
			// 
			// chartv
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartv->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chartv->Legends->Add(legend3);
			this->chartv->Location = System::Drawing::Point(1018, 337);
			this->chartv->Name = L"chartv";
			series9->BorderWidth = 3;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Color = System::Drawing::Color::Blue;
			series9->Legend = L"Legend1";
			series9->Name = L"Series1";
			this->chartv->Series->Add(series9);
			this->chartv->Size = System::Drawing::Size(500, 300);
			this->chartv->TabIndex = 27;
			this->chartv->Text = L"chartv";
			title2->Name = L"Title1";
			title2->Text = L"Скорость";
			this->chartv->Titles->Add(title2);
			// 
			// textBox_T
			// 
			this->textBox_T->Location = System::Drawing::Point(469, 549);
			this->textBox_T->Name = L"textBox_T";
			this->textBox_T->Size = System::Drawing::Size(100, 22);
			this->textBox_T->TabIndex = 28;
			// 
			// textBox_L1
			// 
			this->textBox_L1->Location = System::Drawing::Point(469, 575);
			this->textBox_L1->Name = L"textBox_L1";
			this->textBox_L1->Size = System::Drawing::Size(100, 22);
			this->textBox_L1->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(437, 549);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 25);
			this->label13->TabIndex = 30;
			this->label13->Text = L"T";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(418, 574);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(44, 25);
			this->label14->TabIndex = 31;
			this->label14->Text = L"λпр";
			// 
			// textBox_wr
			// 
			this->textBox_wr->Location = System::Drawing::Point(626, 553);
			this->textBox_wr->Name = L"textBox_wr";
			this->textBox_wr->Size = System::Drawing::Size(100, 22);
			this->textBox_wr->TabIndex = 32;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(587, 550);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 25);
			this->label15->TabIndex = 33;
			this->label15->Text = L"wr";
			// 
			// chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Enabled = false;
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(1018, 643);
			this->chart1->Name = L"chart1";
			series10->BorderWidth = 3;
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->Color = System::Drawing::Color::Blue;
			series10->Legend = L"Legend1";
			series10->Name = L"Series1";
			this->chart1->Series->Add(series10);
			this->chart1->Size = System::Drawing::Size(500, 300);
			this->chart1->TabIndex = 34;
			this->chart1->Text = L"chart1";
			title3->Name = L"Title1";
			title3->Text = L"Резонансная кривая теоретическая ";
			this->chart1->Titles->Add(title3);
			// 
			// chart2
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea5);
			legend5->Enabled = false;
			legend5->Name = L"Legend1";
			this->chart2->Legends->Add(legend5);
			this->chart2->Location = System::Drawing::Point(1539, 31);
			this->chart2->Name = L"chart2";
			series11->BorderWidth = 3;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series11->Color = System::Drawing::Color::Blue;
			series11->Legend = L"Legend1";
			series11->Name = L"Series1";
			this->chart2->Series->Add(series11);
			this->chart2->Size = System::Drawing::Size(500, 300);
			this->chart2->TabIndex = 35;
			this->chart2->Text = L"chart2";
			title4->Name = L"Title1";
			title4->Text = L"Потенциальная энергия";
			this->chart2->Titles->Add(title4);
			// 
			// chart3
			// 
			chartArea6->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea6);
			legend6->Enabled = false;
			legend6->Name = L"Legend1";
			this->chart3->Legends->Add(legend6);
			this->chart3->Location = System::Drawing::Point(1539, 337);
			this->chart3->Name = L"chart3";
			series12->BorderWidth = 3;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->Color = System::Drawing::Color::Blue;
			series12->Legend = L"Legend1";
			series12->Name = L"Series1";
			this->chart3->Series->Add(series12);
			this->chart3->Size = System::Drawing::Size(500, 300);
			this->chart3->TabIndex = 36;
			this->chart3->Text = L"chart3";
			title5->Name = L"Title1";
			title5->Text = L"Кинетическая энергия";
			this->chart3->Titles->Add(title5);
			// 
			// chart4
			// 
			chartArea7->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea7);
			legend7->Enabled = false;
			legend7->Name = L"Legend1";
			this->chart4->Legends->Add(legend7);
			this->chart4->Location = System::Drawing::Point(1539, 643);
			this->chart4->Name = L"chart4";
			series13->BorderWidth = 3;
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series13->Color = System::Drawing::Color::Blue;
			series13->Legend = L"Legend1";
			series13->Name = L"Series1";
			this->chart4->Series->Add(series13);
			this->chart4->Size = System::Drawing::Size(500, 300);
			this->chart4->TabIndex = 37;
			this->chart4->Text = L"chart4";
			title6->Name = L"Title1";
			title6->Text = L"Полная механическая энергия";
			this->chart4->Titles->Add(title6);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(395, 605);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(67, 25);
			this->label16->TabIndex = 38;
			this->label16->Text = L"λтеор";
			// 
			// textBox_L2
			// 
			this->textBox_L2->Location = System::Drawing::Point(469, 608);
			this->textBox_L2->Name = L"textBox_L2";
			this->textBox_L2->Size = System::Drawing::Size(100, 22);
			this->textBox_L2->TabIndex = 39;
			// 
			// chart5
			// 
			chartArea8->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea8);
			legend8->Enabled = false;
			legend8->Name = L"Legend1";
			this->chart5->Legends->Add(legend8);
			this->chart5->Location = System::Drawing::Point(512, 643);
			this->chart5->Name = L"chart5";
			series14->BorderWidth = 3;
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series14->Color = System::Drawing::Color::Blue;
			series14->Legend = L"Legend1";
			series14->Name = L"Series1";
			this->chart5->Series->Add(series14);
			this->chart5->Size = System::Drawing::Size(500, 300);
			this->chart5->TabIndex = 41;
			this->chart5->Text = L"chart5";
			title7->Name = L"Title1";
			title7->Text = L"Резонансная кривая практическая";
			this->chart5->Titles->Add(title7);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->chart5);
			this->Controls->Add(this->textBox_L2);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox_wr);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox_L1);
			this->Controls->Add(this->textBox_T);
			this->Controls->Add(this->chartv);
			this->Controls->Add(this->chartx);
			this->Controls->Add(this->textBox_t_max);
			this->Controls->Add(this->textBox_dt);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox_r);
			this->Controls->Add(this->textBox_f0);
			this->Controls->Add(this->textBox_w);
			this->Controls->Add(this->textBox_l);
			this->Controls->Add(this->textBox_d);
			this->Controls->Add(this->textBox_n);
			this->Controls->Add(this->textBox_k);
			this->Controls->Add(this->textBox_m);
			this->Controls->Add(this->textBox_v0);
			this->Controls->Add(this->textBox_x0);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartx))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void стартToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void стопToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		   double f(double x, double v, double t);
		   void DefaultParams();
		   void RK();
		   double k, b, n, m, g, f0, w,w0, ym,wpr,v0,x0, dt, v1, Lpr, Ltr,A1,A2,T, t1,t2, ftr,d,r, A, wr,E,Ek,Ep;
		   int l, tmax,h, u,count;
		   bool stop, AA;
		   double* x;
		   double* v;
		   double* ti;
		   double* wrpr;

};
}
