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
	/// Summary for JanelaRelatorio
	/// </summary>
	public ref class JanelaRelatorio : public System::Windows::Forms::Form
	{
	public:
		JanelaRelatorio(void)
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
		~JanelaRelatorio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelFiltro;
	private: System::Windows::Forms::ComboBox^ comboBoxFiltro;
	private: System::Windows::Forms::TextBox^ textBoxParametro;
	private: System::Windows::Forms::Button^ buttonFiltrar;
	protected:



	private: System::Windows::Forms::Label^ labelParametro;
	private: System::Windows::Forms::DataGridView^ dataGrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(JanelaRelatorio::typeid));
			this->labelFiltro = (gcnew System::Windows::Forms::Label());
			this->comboBoxFiltro = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxParametro = (gcnew System::Windows::Forms::TextBox());
			this->buttonFiltrar = (gcnew System::Windows::Forms::Button());
			this->labelParametro = (gcnew System::Windows::Forms::Label());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonPdf = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// labelFiltro
			// 
			this->labelFiltro->AutoSize = true;
			this->labelFiltro->Location = System::Drawing::Point(25, 9);
			this->labelFiltro->Name = L"labelFiltro";
			this->labelFiltro->Size = System::Drawing::Size(29, 13);
			this->labelFiltro->TabIndex = 0;
			this->labelFiltro->Text = L"Filtro";
			// 
			// comboBoxFiltro
			// 
			this->comboBoxFiltro->FormattingEnabled = true;
			this->comboBoxFiltro->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Nome", L"Código", L"Estado", L"País", L"População" });
			this->comboBoxFiltro->Location = System::Drawing::Point(28, 25);
			this->comboBoxFiltro->Name = L"comboBoxFiltro";
			this->comboBoxFiltro->Size = System::Drawing::Size(121, 21);
			this->comboBoxFiltro->TabIndex = 1;
			// 
			// textBoxParametro
			// 
			this->textBoxParametro->Location = System::Drawing::Point(177, 26);
			this->textBoxParametro->Name = L"textBoxParametro";
			this->textBoxParametro->Size = System::Drawing::Size(100, 20);
			this->textBoxParametro->TabIndex = 2;
			// 
			// buttonFiltrar
			// 
			this->buttonFiltrar->Location = System::Drawing::Point(310, 26);
			this->buttonFiltrar->Name = L"buttonFiltrar";
			this->buttonFiltrar->Size = System::Drawing::Size(75, 23);
			this->buttonFiltrar->TabIndex = 3;
			this->buttonFiltrar->Text = L"Filtrar";
			this->buttonFiltrar->UseVisualStyleBackColor = true;
			this->buttonFiltrar->Click += gcnew System::EventHandler(this, &JanelaRelatorio::buttonFiltrar_Click);
			// 
			// labelParametro
			// 
			this->labelParametro->AutoSize = true;
			this->labelParametro->Location = System::Drawing::Point(174, 9);
			this->labelParametro->Name = L"labelParametro";
			this->labelParametro->Size = System::Drawing::Size(55, 13);
			this->labelParametro->TabIndex = 4;
			this->labelParametro->Text = L"Parâmetro";
			// 
			// dataGrid
			// 
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			this->dataGrid->Location = System::Drawing::Point(12, 75);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->Size = System::Drawing::Size(544, 395);
			this->dataGrid->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Cidade";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"País";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Estado";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"População";
			this->Column5->Name = L"Column5";
			// 
			// buttonPdf
			// 
			this->buttonPdf->Location = System::Drawing::Point(458, 25);
			this->buttonPdf->Name = L"buttonPdf";
			this->buttonPdf->Size = System::Drawing::Size(98, 24);
			this->buttonPdf->TabIndex = 6;
			this->buttonPdf->Text = L"Gerar PDF";
			this->buttonPdf->UseVisualStyleBackColor = true;
			this->buttonPdf->Click += gcnew System::EventHandler(this, &JanelaRelatorio::buttonPdf_Click);
			// 
			// JanelaRelatorio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 482);
			this->Controls->Add(this->buttonPdf);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->labelParametro);
			this->Controls->Add(this->buttonFiltrar);
			this->Controls->Add(this->textBoxParametro);
			this->Controls->Add(this->comboBoxFiltro);
			this->Controls->Add(this->labelFiltro);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"JanelaRelatorio";
			this->Text = L"JanelaRelatorio";
			this->Load += gcnew System::EventHandler(this, &JanelaRelatorio::JanelaRelatorio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void gerarPDF(String^ filtro, String^ parametro)
		{
			text::Document^ documento = gcnew text::Document(text::PageSize::A4);
			//Em seguida criamos o arquivo e o abrimos para edição
			text::pdf::PdfWriter::GetInstance(documento, gcnew System::IO::FileStream("relatorio_cidades.pdf", System::IO::FileMode::Create));
			documento->Open();
			// Cria-se uma fonte para iniciar a escrita texto
			text::Font^ fonte = text::FontFactory::GetFont("Times New Roman", 16, text::BaseColor::BLACK);
			//Agora, através de strings, podemos criar parágrafos e inseri-los ao pdf

			String^ texto = "Relatório de Cidades";
			text::Paragraph^ paragrafo = gcnew text::Paragraph(texto, fonte);
			paragrafo->Alignment = 1; // 0 - Esquerda, 1 - centro, 2 - Direita
			documento->Add(paragrafo);

			texto = "\nFiltro: " + filtro + "\nParâmetro: " + parametro + "\n\n";
			fonte = text::FontFactory::GetFont("Arial", 12, text::BaseColor::BLACK);
			paragrafo = gcnew text::Paragraph(texto, fonte);
			paragrafo->Alignment = 0;
			documento->Add(paragrafo);


			//Criação da tabela especificando o número de colunas
			text::pdf::PdfPTable^ tabela = gcnew text::pdf::PdfPTable(5);
			//Adição de células
			
			//Headers 
			for (int x = 0; x < 5; x++)
			{
				tabela->AddCell(dataGrid->Columns[x]->HeaderText);
			}

			
			for (int i = 0; i< dataGrid->Rows->Count ; i++)
			{
				for (int j =0; j< dataGrid->Columns->Count ; j++)
				{
					tabela->AddCell(dataGrid[j, i]->FormattedValue->ToString());
				}
			}

			//Adição da tabela ao documento
			documento->Add(tabela);

			documento->Close();
			//Para apresentá-lo, podemos instanciar o Acrobat Reader
			System::Diagnostics::Process::Start("AcroRd32.exe", "relatorio_cidades.pdf");
		}



		void filtrar(String^ f, String^ p)
		{

			//traduzindo
			
			if (f == "Estado")
				f = "district";
			if (f == "Nome")
				f = "name";
			if (f == "País")
				f = "countrycode";
			if (f == "População")
				f = "population";
			if (f == "Código")
				f = "id";

			// consultando a base

			dataGrid->Rows->Clear();

			if (conexao == NULL)
			{
				MessageBox::Show(gcnew String("Não conectado ao banco.\n"));
				return;
			}

			char comando_consulta[255];
			if (f == "district" || f == "name" || f == "countrycode")
				sprintf(comando_consulta, "SELECT * FROM city where %s like '%%%s%%'", f, p);
			else 
				sprintf(comando_consulta, "SELECT * FROM city where %s = '%s'", f, p);

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
			dataGrid->Rows->Clear();

			for (int i = 0; i < num_registros; i++)
			{
				registro_corrente = mysql_fetch_row(registros);
				dataGrid->Rows->Add(gcnew String(registro_corrente[0]), gcnew String(registro_corrente[1]), gcnew String(registro_corrente[2]), gcnew String(registro_corrente[3]), gcnew String(registro_corrente[4]));
			}

			// limpa memória
			mysql_free_result(registros);
		}

		private: System::Void buttonFiltrar_Click(System::Object^ sender, System::EventArgs^ e) {
		filtrar(comboBoxFiltro->Text, textBoxParametro->Text);
		}
	private: System::Void buttonPdf_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGrid[0, 0]->FormattedValue->ToString() == "")
		{
			MessageBox::Show("Impossível gerar PDF! Filtre algo antes.", "ERRO");
		}
		else
		gerarPDF(comboBoxFiltro->Text, textBoxParametro->Text);
	}
private: System::Void JanelaRelatorio_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
