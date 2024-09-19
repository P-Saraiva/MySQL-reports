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
	

	/// <summary>
	/// Summary for JanelaPrincipal
	/// </summary>
	public ref class JanelaCadastro : public System::Windows::Forms::Form
	{
			public:
				JanelaCadastro(void)
				{

					conectarBanco();
					InitializeComponent();

				}

			protected:
				/// <summary>
				/// Clean up any resources being used.
				/// </summary>
				~JanelaCadastro()
				{
				}
	private: System::ComponentModel::IContainer^ components;
	protected:

			protected:

			private:
				/// <summary>
				/// Required designer variable.
				/// </summary>

				private: System::Windows::Forms::Button^ buttonInserir;
				private: System::Windows::Forms::Button^ buttonBuscar;
				private: System::Windows::Forms::Button^ buttonExcluir;
	private: System::Windows::Forms::TextBox^ textBoxCidade;
	private: System::Windows::Forms::TextBox^ textBoxEstado;
	private: System::Windows::Forms::TextBox^ textBoxPop;
	private: System::Windows::Forms::ComboBox^ comboBoxPais;








				private: System::Windows::Forms::Label^ labelCidade;
				private: System::Windows::Forms::Label^ labelEstado;
				private: System::Windows::Forms::Label^ labelCDG;
				private: System::Windows::Forms::Label^ labelPop;
	private: System::Windows::Forms::Label^ labelCodigoCidade;
	private: System::Windows::Forms::TextBox^ textBoxCodigoCidade;

	private: System::Windows::Forms::ToolTip^ toolTip1;






			// objeto que representa a conexão com o banco
			

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
					this->components = (gcnew System::ComponentModel::Container());
					System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(JanelaCadastro::typeid));
					this->buttonInserir = (gcnew System::Windows::Forms::Button());
					this->buttonBuscar = (gcnew System::Windows::Forms::Button());
					this->buttonExcluir = (gcnew System::Windows::Forms::Button());
					this->textBoxCidade = (gcnew System::Windows::Forms::TextBox());
					this->textBoxEstado = (gcnew System::Windows::Forms::TextBox());
					this->textBoxPop = (gcnew System::Windows::Forms::TextBox());
					this->comboBoxPais = (gcnew System::Windows::Forms::ComboBox());
					this->labelCidade = (gcnew System::Windows::Forms::Label());
					this->labelEstado = (gcnew System::Windows::Forms::Label());
					this->labelCDG = (gcnew System::Windows::Forms::Label());
					this->labelPop = (gcnew System::Windows::Forms::Label());
					this->labelCodigoCidade = (gcnew System::Windows::Forms::Label());
					this->textBoxCodigoCidade = (gcnew System::Windows::Forms::TextBox());
					this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
					this->SuspendLayout();
					// 
					// buttonInserir
					// 
					this->buttonInserir->Location = System::Drawing::Point(385, 56);
					this->buttonInserir->Name = L"buttonInserir";
					this->buttonInserir->Size = System::Drawing::Size(78, 34);
					this->buttonInserir->TabIndex = 0;
					this->buttonInserir->Text = L"Inserir";
					this->buttonInserir->UseVisualStyleBackColor = true;
					this->buttonInserir->Click += gcnew System::EventHandler(this, &JanelaCadastro::buttonInserir_Click);
					// 
					// buttonBuscar
					// 
					this->buttonBuscar->Location = System::Drawing::Point(274, 168);
					this->buttonBuscar->Name = L"buttonBuscar";
					this->buttonBuscar->Size = System::Drawing::Size(82, 21);
					this->buttonBuscar->TabIndex = 1;
					this->buttonBuscar->Text = L"Buscar";
					this->buttonBuscar->UseVisualStyleBackColor = true;
					this->buttonBuscar->Click += gcnew System::EventHandler(this, &JanelaCadastro::buttonBuscar_Click);
					// 
					// buttonExcluir
					// 
					this->buttonExcluir->Location = System::Drawing::Point(160, 169);
					this->buttonExcluir->Name = L"buttonExcluir";
					this->buttonExcluir->Size = System::Drawing::Size(75, 21);
					this->buttonExcluir->TabIndex = 2;
					this->buttonExcluir->Text = L"Excluir";
					this->toolTip1->SetToolTip(this->buttonExcluir, L"Para excluir uma cidade, insira o código da cidade e clique no botão.\r\nPara ver o"
						L" código das cidades, verifique na janela de relatórios.");
					this->buttonExcluir->UseVisualStyleBackColor = true;
					this->buttonExcluir->Click += gcnew System::EventHandler(this, &JanelaCadastro::buttonExcluir_Click_1);
					// 
					// textBoxCidade
					// 
					this->textBoxCidade->Location = System::Drawing::Point(12, 34);
					this->textBoxCidade->Name = L"textBoxCidade";
					this->textBoxCidade->Size = System::Drawing::Size(205, 20);
					this->textBoxCidade->TabIndex = 3;
					// 
					// textBoxEstado
					// 
					this->textBoxEstado->Location = System::Drawing::Point(12, 91);
					this->textBoxEstado->Name = L"textBoxEstado";
					this->textBoxEstado->Size = System::Drawing::Size(205, 20);
					this->textBoxEstado->TabIndex = 4;
					// 
					// textBoxPop
					// 
					this->textBoxPop->Location = System::Drawing::Point(234, 91);
					this->textBoxPop->Name = L"textBoxPop";
					this->textBoxPop->Size = System::Drawing::Size(121, 20);
					this->textBoxPop->TabIndex = 5;
					// 
					// comboBoxPais
					// 
					this->comboBoxPais->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(239) {
						L"ABW", L"AFG", L"AGO", L"AIA",
							L"ALB", L"AND", L"ANT", L"ARE", L"ARG", L"ARM", L"ASM", L"ATA", L"ATF", L"ATG", L"AUS", L"AUT", L"AZE", L"BDI", L"BEL", L"BEN",
							L"BFA", L"BGD", L"BGR", L"BHR", L"BHS", L"BIH", L"BLR", L"BLZ", L"BMU", L"BOL", L"BRA", L"BRB", L"BRN", L"BTN", L"BVT", L"BWA",
							L"CAF", L"CAN", L"CCK", L"CHE", L"CHL", L"CHN", L"CIV", L"CMR", L"COD", L"COG", L"COK", L"COL", L"COM", L"CPV", L"CRI", L"CUB",
							L"CXR", L"CYM", L"CYP", L"CZE", L"DEU", L"DJI", L"DMA", L"DNK", L"DOM", L"DZA", L"ECU", L"EGY", L"ERI", L"ESH", L"ESP", L"EST",
							L"ETH", L"FIN", L"FJI", L"FLK", L"FRA", L"FRO", L"FSM", L"GAB", L"GBR", L"GEO", L"GHA", L"GIB", L"GIN", L"GLP", L"GMB", L"GNB",
							L"GNQ", L"GRC", L"GRD", L"GRL", L"GTM", L"GUF", L"GUM", L"GUY", L"HKG", L"HMD", L"HND", L"HRV", L"HTI", L"HUN", L"IDN", L"IND",
							L"IOT", L"IRL", L"IRN", L"IRQ", L"ISL", L"ISR", L"ITA", L"JAM", L"JOR", L"JPN", L"KAZ", L"KEN", L"KGZ", L"KHM", L"KIR", L"KNA",
							L"KOR", L"KWT", L"LAO", L"LBN", L"LBR", L"LBY", L"LCA", L"LIE", L"LKA", L"LSO", L"LTU", L"LUX", L"LVA", L"MAC", L"MAR", L"MCO",
							L"MDA", L"MDG", L"MDV", L"MEX", L"MHL", L"MKD", L"MLI", L"MLT", L"MMR", L"MNG", L"MNP", L"MOZ", L"MRT", L"MSR", L"MTQ", L"MUS",
							L"MWI", L"MYS", L"MYT", L"NAM", L"NCL", L"NER", L"NFK", L"NGA", L"NIC", L"NIU", L"NLD", L"NOR", L"NPL", L"NRU", L"NZL", L"OMN",
							L"PAK", L"PAN", L"PCN", L"PER", L"PHL", L"PLW", L"PNG", L"POL", L"PRI", L"PRK", L"PRT", L"PRY", L"PSE", L"PYF", L"QAT", L"REU",
							L"ROM", L"RUS", L"RWA", L"SAU", L"SDN", L"SEN", L"SGP", L"SGS", L"SHN", L"SJM", L"SLB", L"SLE", L"SLV", L"SMR", L"SOM", L"SPM",
							L"STP", L"SUR", L"SVK", L"SVN", L"SWE", L"SWZ", L"SYC", L"SYR", L"TCA", L"TCD", L"TGO", L"THA", L"TJK", L"TKL", L"TKM", L"TMP",
							L"TON", L"TTO", L"TUN", L"TUR", L"TUV", L"TWN", L"TZA", L"UGA", L"UKR", L"UMI", L"URY", L"USA", L"UZB", L"VAT", L"VCT", L"VEN",
							L"VGB", L"VIR", L"VNM", L"VUT", L"WLF", L"WSM", L"YEM", L"YUG", L"ZAF", L"ZMB", L"ZWE"
					});
					this->comboBoxPais->FormattingEnabled = true;
					this->comboBoxPais->Location = System::Drawing::Point(234, 34);
					this->comboBoxPais->Name = L"comboBoxPais";
					this->comboBoxPais->Size = System::Drawing::Size(121, 21);
					this->comboBoxPais->TabIndex = 6;
					this->comboBoxPais->SelectedIndexChanged += gcnew System::EventHandler(this, &JanelaCadastro::comboBoxPais_SelectedIndexChanged_1);
					// 
					// labelCidade
					// 
					this->labelCidade->AutoSize = true;
					this->labelCidade->Location = System::Drawing::Point(9, 18);
					this->labelCidade->Name = L"labelCidade";
					this->labelCidade->Size = System::Drawing::Size(40, 13);
					this->labelCidade->TabIndex = 7;
					this->labelCidade->Text = L"Cidade";
					// 
					// labelEstado
					// 
					this->labelEstado->AutoSize = true;
					this->labelEstado->Location = System::Drawing::Point(12, 75);
					this->labelEstado->Name = L"labelEstado";
					this->labelEstado->Size = System::Drawing::Size(40, 13);
					this->labelEstado->TabIndex = 8;
					this->labelEstado->Text = L"Estado";
					// 
					// labelCDG
					// 
					this->labelCDG->AutoSize = true;
					this->labelCDG->Location = System::Drawing::Point(234, 18);
					this->labelCDG->Name = L"labelCDG";
					this->labelCDG->Size = System::Drawing::Size(79, 13);
					this->labelCDG->TabIndex = 9;
					this->labelCDG->Text = L"Código do país";
					// 
					// labelPop
					// 
					this->labelPop->AutoSize = true;
					this->labelPop->Location = System::Drawing::Point(234, 75);
					this->labelPop->Name = L"labelPop";
					this->labelPop->Size = System::Drawing::Size(58, 13);
					this->labelPop->TabIndex = 10;
					this->labelPop->Text = L"População";
					// 
					// labelCodigoCidade
					// 
					this->labelCodigoCidade->AutoSize = true;
					this->labelCodigoCidade->Location = System::Drawing::Point(12, 153);
					this->labelCodigoCidade->Name = L"labelCodigoCidade";
					this->labelCodigoCidade->Size = System::Drawing::Size(40, 13);
					this->labelCodigoCidade->TabIndex = 11;
					this->labelCodigoCidade->Text = L"Código";
					// 
					// textBoxCodigoCidade
					// 
					this->textBoxCodigoCidade->Location = System::Drawing::Point(12, 169);
					this->textBoxCodigoCidade->Name = L"textBoxCodigoCidade";
					this->textBoxCodigoCidade->Size = System::Drawing::Size(121, 20);
					this->textBoxCodigoCidade->TabIndex = 12;
					// 
					// toolTip1
					// 
					this->toolTip1->ForeColor = System::Drawing::Color::Black;
					this->toolTip1->ToolTipTitle = L"Info.";
					// 
					// JanelaCadastro
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->ClientSize = System::Drawing::Size(485, 213);
					this->Controls->Add(this->textBoxCodigoCidade);
					this->Controls->Add(this->labelCodigoCidade);
					this->Controls->Add(this->labelPop);
					this->Controls->Add(this->labelCDG);
					this->Controls->Add(this->labelEstado);
					this->Controls->Add(this->labelCidade);
					this->Controls->Add(this->comboBoxPais);
					this->Controls->Add(this->textBoxPop);
					this->Controls->Add(this->textBoxEstado);
					this->Controls->Add(this->textBoxCidade);
					this->Controls->Add(this->buttonExcluir);
					this->Controls->Add(this->buttonBuscar);
					this->Controls->Add(this->buttonInserir);
					this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
					this->Name = L"JanelaCadastro";
					this->Text = L"Database - Cidades";
					this->Load += gcnew System::EventHandler(this, &JanelaCadastro::JanelaCadastro_Load);
					this->ResumeLayout(false);
					this->PerformLayout();

				}

				

				void criarCB()
				{
					String^ s;
					if (conexao == NULL)
					{
						MessageBox::Show(gcnew String("Não conectado ao banco.\n"));
						return;
					}
					char comando_insercao[255];
					sprintf(comando_insercao, "select code from country");

					if (mysql_query(conexao, comando_insercao))
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
						s = gcnew String (registro_corrente[0]);
						comboBoxPais->Items->Add(s);
					}
				}
				
				


				void buscar(String^ codigo)
				{

					if (conexao == NULL)
					{
						MessageBox::Show(gcnew String("Não conectado ao banco.\n"));
						return;
					}
					char comando_insercao[255];
					sprintf(comando_insercao, "select *from city where ID = '%s'", codigo);

					/* perguntar professor problema compilacao*/
					if (mysql_query(conexao, comando_insercao))
					{
						MessageBox::Show(gcnew String("Erro na consulta.\n"));
						MessageBox::Show(gcnew String(mysql_error(conexao)));
						return;
					}

					MYSQL_RES* registros = mysql_store_result(conexao);

					int num_registros = mysql_num_rows(registros);

					if (num_registros == 0)
					{
						MessageBox::Show("Não existe cidade com esse código.", "Não foi dessa vez!");
						return;
					}

					MYSQL_ROW registro_corrente = mysql_fetch_row(registros);
					textBoxCidade->Text = gcnew String(registro_corrente[1]);
					comboBoxPais->Text = gcnew String(registro_corrente[2]);
					textBoxEstado->Text = gcnew String(registro_corrente[3]);
					textBoxPop->Text = gcnew String(registro_corrente[4]);

				}

				void inserirCidade(String ^nome, String ^codigoPais, String^ estado, int populacao)
				{
	
					if (conexao == NULL)
					{
						MessageBox::Show(gcnew String("Não conectado ao banco.\n"));
						return;
					}

					// construindo o comando de inserção
					char comando_insercao[255];
					sprintf(comando_insercao, "insert into city values (0, '%s', '%s', '%s', %d)", nome, codigoPais, estado, populacao);
					if (mysql_query(conexao, comando_insercao)) {
						MessageBox::Show(gcnew String("erro na inserção.\n"));
						MessageBox::Show(gcnew String(mysql_error(conexao)));
					}
					limparInterface();
					MessageBox::Show(gcnew String("Cidade Inserida com sucesso!\n"));

				}

				void excluirCidade(int codigo)
				{
					if (conexao == NULL)
					{
						MessageBox::Show(gcnew String("Não conectado ao banco.\n"));
						return;
					}

					
					// construindo o comando de inserção
					char comando_insercao[255];
					sprintf(comando_insercao, "DELETE FROM CITY WHERE id = %d", codigo);
					if (mysql_query(conexao, comando_insercao)) {
						MessageBox::Show(gcnew String("erro na exclusão.\n"));
						MessageBox::Show(gcnew String(mysql_error(conexao)));
					}

					
				}

			

				void limparInterface()
				{
					textBoxCodigoCidade->Text = "";
					textBoxCidade->Text = "";
					textBoxEstado->Text = "";
					textBoxPop->Text = "";
					comboBoxPais->Text = "";
				}
		#pragma endregion

	

private: System::Void buttonBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	buscar(textBoxCodigoCidade->Text);
	}

private: System::Void buttonInserir_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxCidade->Text == "" || comboBoxPais->Text == "" || textBoxEstado->Text == "" || textBoxPop->Text == "")
		MessageBox::Show("Ops! Falta alguma informação\nTente novamente, amigão", "ERRO");
	else
	inserirCidade(textBoxCidade->Text, comboBoxPais->Text, textBoxEstado->Text, System::Convert::ToInt32(textBoxPop->Text));
}


private: System::Void buttonExcluir_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	
	try
	{
		excluirCidade(System::Convert::ToInt32(textBoxCodigoCidade->Text));
	}
	catch (...)
	{
		MessageBox::Show("Campo vazio. Preencha", "ERRO");
		return;
	}
	System::Windows::Forms::DialogResult resultado;
	resultado = MessageBox::Show("Apagar a cidade do mapa?!", ":(", MessageBoxButtons::YesNo);
	if (resultado == System::Windows::Forms::DialogResult::Yes)
	{
		
		excluirCidade(System::Convert::ToInt32(textBoxCodigoCidade->Text));
		limparInterface();
		MessageBox::Show("Cidade Excluida do mundo! ;(", "Parabéns");
	}
	else
	{
		limparInterface();
	}
}
private: System::Void comboBoxPais_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBoxPais_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void JanelaCadastro_Load(System::Object^ sender, System::EventArgs^ e) {
	criarCB();
}
};
}
