#pragma once

#include <my_global.h>
#include <mysql.h>
#include<vcclr.h>

namespace VisualStudioMysql {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace iTextSharp;

	/// <summary>
	/// Summary for JanelaGrafico
	/// </summary>
	public ref class JanelaGrafico : public System::Windows::Forms::Form
	{
	public:
		JanelaGrafico(void)
		{
			InitializeComponent();
			conectarBanco();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~JanelaGrafico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelGraf;
	private: System::Windows::Forms::ComboBox^ comboBoxGraf;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Grafico;
	protected:


	private: System::Windows::Forms::Button^ buttonMostrar;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ buttonPdf;

		MYSQL* conexao = NULL;

		int conectarBanco()
		{
			// inicializa a biblioteca do mysql
			conexao = mysql_init(NULL);
			if (conexao == NULL)
			{
				MessageBox::Show(gcnew String("Erro ao carregar e iniciar a biblioteca do mysql.\n"));
				return FALSE;
			}

			// conecta ao banco
			if (mysql_real_connect(conexao, "localhost", "root", "root",
				"world", 0, NULL, 0) == NULL)
			{
				MessageBox::Show(gcnew String("Erro de conexão com o banco.\n"));
				return FALSE;
			}

			// sucesso
			return TRUE;
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(JanelaGrafico::typeid));
			this->labelGraf = (gcnew System::Windows::Forms::Label());
			this->comboBoxGraf = (gcnew System::Windows::Forms::ComboBox());
			this->Grafico = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->buttonMostrar = (gcnew System::Windows::Forms::Button());
			this->buttonPdf = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grafico))->BeginInit();
			this->SuspendLayout();
			// 
			// labelGraf
			// 
			this->labelGraf->AutoSize = true;
			this->labelGraf->Location = System::Drawing::Point(12, 19);
			this->labelGraf->Name = L"labelGraf";
			this->labelGraf->Size = System::Drawing::Size(46, 13);
			this->labelGraf->TabIndex = 0;
			this->labelGraf->Text = L"Gráficos";
			// 
			// comboBoxGraf
			// 
			this->comboBoxGraf->FormattingEnabled = true;
			this->comboBoxGraf->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Cidades de Santa Catarina", L"Países da América do Sul",
					L"Top 10 países com maior população"
			});
			this->comboBoxGraf->Location = System::Drawing::Point(15, 35);
			this->comboBoxGraf->Name = L"comboBoxGraf";
			this->comboBoxGraf->Size = System::Drawing::Size(290, 21);
			this->comboBoxGraf->TabIndex = 1;
			// 
			// Grafico
			// 
			this->Grafico->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			this->Grafico->BorderlineColor = System::Drawing::Color::Transparent;
			this->Grafico->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			this->Grafico->BorderlineWidth = 20;
			chartArea1->AlignmentOrientation = static_cast<System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations>((System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Vertical | System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Horizontal));
			chartArea1->AxisX->IsLabelAutoFit = false;
			chartArea1->AxisX->LabelAutoFitMaxFontSize = 12;
			chartArea1->AxisX->ScaleBreakStyle->Enabled = true;
			chartArea1->AxisX->ScaleBreakStyle->MaxNumberOfBreaks = 1;
			chartArea1->AxisX->ScaleBreakStyle->Spacing = 3;
			chartArea1->AxisY->InterlacedColor = System::Drawing::Color::White;
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY->MaximumAutoSize = 100;
			chartArea1->AxisY->ScaleBreakStyle->MaxNumberOfBreaks = 1;
			chartArea1->AxisY->ScaleBreakStyle->Spacing = 0.75;
			chartArea1->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea1->Name = L"ChartArea1";
			this->Grafico->ChartAreas->Add(chartArea1);
			legend1->IsDockedInsideChartArea = false;
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->Grafico->Legends->Add(legend1);
			this->Grafico->Location = System::Drawing::Point(12, 80);
			this->Grafico->Name = L"Grafico";
			this->Grafico->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series1->CustomProperties = L"DrawSideBySide=True, BarLabelStyle=Left";
			series1->Legend = L"Legend1";
			series1->Name = L"População";
			series1->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::Yes;
			series1->SmartLabelStyle->Enabled = false;
			this->Grafico->Series->Add(series1);
			this->Grafico->Size = System::Drawing::Size(711, 383);
			this->Grafico->TabIndex = 1;
			this->Grafico->Text = L"chart1";
			// 
			// buttonMostrar
			// 
			this->buttonMostrar->Location = System::Drawing::Point(326, 33);
			this->buttonMostrar->Name = L"buttonMostrar";
			this->buttonMostrar->Size = System::Drawing::Size(75, 23);
			this->buttonMostrar->TabIndex = 3;
			this->buttonMostrar->Text = L"Mostrar";
			this->buttonMostrar->UseVisualStyleBackColor = true;
			this->buttonMostrar->Click += gcnew System::EventHandler(this, &JanelaGrafico::buttonMostrar_Click);
			// 
			// buttonPdf
			// 
			this->buttonPdf->Location = System::Drawing::Point(625, 32);
			this->buttonPdf->Name = L"buttonPdf";
			this->buttonPdf->Size = System::Drawing::Size(98, 24);
			this->buttonPdf->TabIndex = 7;
			this->buttonPdf->Text = L"Gerar PDF";
			this->buttonPdf->UseVisualStyleBackColor = true;
			this->buttonPdf->Click += gcnew System::EventHandler(this, &JanelaGrafico::buttonPdf_Click);
			// 
			// JanelaGrafico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 475);
			this->Controls->Add(this->buttonPdf);
			this->Controls->Add(this->buttonMostrar);
			this->Controls->Add(this->Grafico);
			this->Controls->Add(this->comboBoxGraf);
			this->Controls->Add(this->labelGraf);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"JanelaGrafico";
			this->Text = L"JanelaGrafico";
			this->Load += gcnew System::EventHandler(this, &JanelaGrafico::JanelaGrafico_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grafico))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void montarGraf(String^ grafico)
		{

			if (conexao == NULL)
			{
				MessageBox::Show(gcnew String("Não conectado ao banco.\n"));
				return;
			}

			char comando_consulta[255];

			//Define o intervalo entre o label dos itens no Eixo X
			Grafico->ChartAreas["ChartArea1"]->AxisX->Interval = 1;

			if (grafico == "Cidades de Santa Catarina" )
			{
				Grafico->Series["População"]->Points->Clear();
				sprintf(comando_consulta, "SELECT name, population FROM city where district = 'Santa Catarina'");
				if (mysql_query(conexao, comando_consulta))
				{
					MessageBox::Show(gcnew String("Erro na consulta.\n"));
					MessageBox::Show(gcnew String(mysql_error(conexao)));
					return;
				}

				MYSQL_RES* registros = mysql_store_result(conexao);

				int num_registros = mysql_num_rows(registros);

				if (num_registros == 0)
				{
					return;
				}

				MYSQL_ROW registro_corrente;

				for (int i = 0; i < num_registros; i++)
				{
					registro_corrente = mysql_fetch_row(registros);
					Grafico->Series["População"]->Points->AddXY(gcnew String(registro_corrente[0]), Convert::ToInt32(gcnew String(registro_corrente[1])));
				}

					
				mysql_free_result(registros);

			}

			if (grafico == "Países da América do Sul")
			{
				Grafico->Series["População"]->Points->Clear();
				sprintf(comando_consulta, "SELECT name, population FROM COUNTRY where CONTINENT = 'SOUTH AMERICA'");

				if (mysql_query(conexao, comando_consulta))
				{
					MessageBox::Show(gcnew String("Erro na consulta.\n"));
					MessageBox::Show(gcnew String(mysql_error(conexao)));
					return;
				}

				MYSQL_RES* registros = mysql_store_result(conexao);

				int num_registros = mysql_num_rows(registros);

				if (num_registros == 0)
				{
					return;
				}

				MYSQL_ROW registro_corrente;

				for (int i = 0; i < num_registros; i++)
				{
					registro_corrente = mysql_fetch_row(registros);
					Grafico->Series["População"]->Points->AddXY(gcnew String(registro_corrente[0]), Convert::ToInt32(gcnew String(registro_corrente[1])));
				}

				mysql_free_result(registros);

			}

			if (grafico == "Top 10 países com maior população")
			{
				Grafico->Series["População"]->Points->Clear();
				sprintf(comando_consulta, "SELECT name, population FROM COUNTRY ORDER BY POPULATION DESC LIMIT 10");

				if (mysql_query(conexao, comando_consulta))
				{
					MessageBox::Show(gcnew String("Erro na consulta.\n"));
					MessageBox::Show(gcnew String(mysql_error(conexao)));
					return;
				}

				MYSQL_RES* registros = mysql_store_result(conexao);

				int num_registros = mysql_num_rows(registros);

				if (num_registros == 0)
				{
					return;
				}

				MYSQL_ROW registro_corrente;

				for (int i = 0; i < num_registros; i++)
				{
					registro_corrente = mysql_fetch_row(registros);
					Grafico->Series["População"]->Points->AddXY(gcnew String(registro_corrente[0]), Convert::ToInt32(gcnew String(registro_corrente[1])));
				}

				mysql_free_result(registros);

			}
			
			Refresh();


		}

#pragma endregion
	private: System::Void buttonMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		if(comboBoxGraf->Text == "")
			MessageBox::Show("Campo vazio. Preencha", "ERRO");

		montarGraf(comboBoxGraf->Text);
	}
private: System::Void JanelaGrafico_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void buttonPdf_Click(System::Object^ sender, System::EventArgs^ e) {

	
	text::Document^ documento = gcnew text::Document(text::PageSize::A4);
	text::pdf::PdfWriter::GetInstance(documento, gcnew System::IO::FileStream("relatorio.pdf", System::IO::FileMode::Create));
	documento->Open();

	text::Font^ fonte = text::FontFactory::GetFont("Arial", 16, text::BaseColor::GRAY);
	String^ texto = "PDF do Gráfico";
	text::Paragraph^ paragrafo = gcnew text::Paragraph(texto, fonte);
	paragrafo->Alignment = 1; // 0 - Esquerda, 1 - centro, 2 - Direita
	documento->Add(paragrafo);

	texto = "\n Título do Gráfico : " + comboBoxGraf->Text;
	fonte = text::FontFactory::GetFont("Arial", 12, text::BaseColor::BLACK);
	paragrafo = gcnew text::Paragraph(texto, fonte);
	paragrafo->Alignment = 1;
	documento->Add(paragrafo);

	System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
	Grafico->SaveImage(ms, System::Windows::Forms::DataVisualization::Charting::ChartImageFormat::Bmp);
	Bitmap^ bm = gcnew Bitmap(ms);
	//Criação de uma imagem de PDF, redimensionamento e adição ao documento
	text::Image^ pic = text::Image::GetInstance(bm, System::Drawing::Imaging::ImageFormat::Jpeg);
	pic->ScalePercent(100);
	documento->Add(pic);

	documento->Close();
	System::Diagnostics::Process::Start("AcroRd32.exe", "relatorio.pdf");
}
};
}
