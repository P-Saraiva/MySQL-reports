#pragma once

#include "JanelaCadastro.h"
#include "JanelaRelatorio.h"
#include "JanelaGrafico.h"

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
	public ref class JanelaPrincipal : public System::Windows::Forms::Form
	{
	public:
		JanelaPrincipal(void)
		{
			InitializeComponent();

			conectarBanco();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~JanelaPrincipal()
		{
			if (components)
			{
				desconectarBanco();
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ cadastroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ relatoriosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gráficosToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripMenuItem^ sistemaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sairToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ limparTelaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ excluirToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ cidadesDeSantaCatarinaToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ filtroToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ gerarPDFToolStripMenuItem1;


	private: System::Windows::Forms::ToolStripMenuItem^ nomeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ códigoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ populaçãoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesDaAméricaDoSulToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ top10PaísesDoMundoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ plotarGráficoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cidadesSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paísesDaAméricaDoSulToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ top10PaísesDoMundoToolStripMenuItem;









		MYSQL* conexao = NULL;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(JanelaPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->cadastroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->excluirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->relatoriosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nomeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->códigoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->populaçãoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gráficosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cidadesDeSantaCatarinaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gerarPDFToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesDaAméricaDoSulToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->top10PaísesDoMundoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plotarGráficoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cidadesSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paísesDaAméricaDoSulToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->top10PaísesDoMundoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sistemaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sairToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->limparTelaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->cadastroToolStripMenuItem,
					this->relatoriosToolStripMenuItem, this->gráficosToolStripMenuItem, this->sistemaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(973, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// cadastroToolStripMenuItem
			// 
			this->cadastroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->buscarToolStripMenuItem,
					this->excluirToolStripMenuItem
			});
			this->cadastroToolStripMenuItem->Name = L"cadastroToolStripMenuItem";
			this->cadastroToolStripMenuItem->Size = System::Drawing::Size(100, 20);
			this->cadastroToolStripMenuItem->Text = L"Gerenciamento";
			this->cadastroToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::cadastroToolStripMenuItem_Click);
			// 
			// buscarToolStripMenuItem
			// 
			this->buscarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buscarToolStripMenuItem.Image")));
			this->buscarToolStripMenuItem->Name = L"buscarToolStripMenuItem";
			this->buscarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->buscarToolStripMenuItem->Text = L"Buscar";
			this->buscarToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::buscarToolStripMenuItem_Click);
			// 
			// excluirToolStripMenuItem
			// 
			this->excluirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"excluirToolStripMenuItem.Image")));
			this->excluirToolStripMenuItem->Name = L"excluirToolStripMenuItem";
			this->excluirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->excluirToolStripMenuItem->Text = L"Excluir";
			this->excluirToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::excluirToolStripMenuItem_Click);
			// 
			// relatoriosToolStripMenuItem
			// 
			this->relatoriosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->filtroToolStripMenuItem });
			this->relatoriosToolStripMenuItem->Name = L"relatoriosToolStripMenuItem";
			this->relatoriosToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->relatoriosToolStripMenuItem->Text = L"Relatórios";
			this->relatoriosToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::relatoriosToolStripMenuItem_Click);
			// 
			// filtroToolStripMenuItem
			// 
			this->filtroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->nomeToolStripMenuItem,
					this->códigoToolStripMenuItem, this->estadoToolStripMenuItem, this->paísToolStripMenuItem, this->populaçãoToolStripMenuItem
			});
			this->filtroToolStripMenuItem->Name = L"filtroToolStripMenuItem";
			this->filtroToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->filtroToolStripMenuItem->Text = L"Gerar PDF";
			this->filtroToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::filtroToolStripMenuItem_Click);
			// 
			// nomeToolStripMenuItem
			// 
			this->nomeToolStripMenuItem->Name = L"nomeToolStripMenuItem";
			this->nomeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nomeToolStripMenuItem->Text = L"Nome";
			this->nomeToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::nomeToolStripMenuItem_Click);
			// 
			// códigoToolStripMenuItem
			// 
			this->códigoToolStripMenuItem->Name = L"códigoToolStripMenuItem";
			this->códigoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->códigoToolStripMenuItem->Text = L"Código";
			// 
			// estadoToolStripMenuItem
			// 
			this->estadoToolStripMenuItem->Name = L"estadoToolStripMenuItem";
			this->estadoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->estadoToolStripMenuItem->Text = L"Estado";
			// 
			// paísToolStripMenuItem
			// 
			this->paísToolStripMenuItem->Name = L"paísToolStripMenuItem";
			this->paísToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->paísToolStripMenuItem->Text = L"País";
			// 
			// populaçãoToolStripMenuItem
			// 
			this->populaçãoToolStripMenuItem->Name = L"populaçãoToolStripMenuItem";
			this->populaçãoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->populaçãoToolStripMenuItem->Text = L"População";
			// 
			// gráficosToolStripMenuItem
			// 
			this->gráficosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cidadesDeSantaCatarinaToolStripMenuItem,
					this->plotarGráficoToolStripMenuItem
			});
			this->gráficosToolStripMenuItem->Name = L"gráficosToolStripMenuItem";
			this->gráficosToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->gráficosToolStripMenuItem->Text = L"Gráficos";
			this->gráficosToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::gráficosToolStripMenuItem_Click);
			// 
			// cidadesDeSantaCatarinaToolStripMenuItem
			// 
			this->cidadesDeSantaCatarinaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->gerarPDFToolStripMenuItem1,
					this->paísesDaAméricaDoSulToolStripMenuItem1, this->top10PaísesDoMundoToolStripMenuItem1
			});
			this->cidadesDeSantaCatarinaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cidadesDeSantaCatarinaToolStripMenuItem.Image")));
			this->cidadesDeSantaCatarinaToolStripMenuItem->Name = L"cidadesDeSantaCatarinaToolStripMenuItem";
			this->cidadesDeSantaCatarinaToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->cidadesDeSantaCatarinaToolStripMenuItem->Text = L"GerarPDF";
			// 
			// gerarPDFToolStripMenuItem1
			// 
			this->gerarPDFToolStripMenuItem1->Name = L"gerarPDFToolStripMenuItem1";
			this->gerarPDFToolStripMenuItem1->Size = System::Drawing::Size(211, 22);
			this->gerarPDFToolStripMenuItem1->Text = L"Cidades de Santa Catarina";
			// 
			// paísesDaAméricaDoSulToolStripMenuItem1
			// 
			this->paísesDaAméricaDoSulToolStripMenuItem1->Name = L"paísesDaAméricaDoSulToolStripMenuItem1";
			this->paísesDaAméricaDoSulToolStripMenuItem1->Size = System::Drawing::Size(211, 22);
			this->paísesDaAméricaDoSulToolStripMenuItem1->Text = L"Países da América do Sul";
			// 
			// top10PaísesDoMundoToolStripMenuItem1
			// 
			this->top10PaísesDoMundoToolStripMenuItem1->Name = L"top10PaísesDoMundoToolStripMenuItem1";
			this->top10PaísesDoMundoToolStripMenuItem1->Size = System::Drawing::Size(211, 22);
			this->top10PaísesDoMundoToolStripMenuItem1->Text = L"Top 10 países do mundo";
			// 
			// plotarGráficoToolStripMenuItem
			// 
			this->plotarGráficoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cidadesSToolStripMenuItem,
					this->paísesDaAméricaDoSulToolStripMenuItem, this->top10PaísesDoMundoToolStripMenuItem
			});
			this->plotarGráficoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plotarGráficoToolStripMenuItem.Image")));
			this->plotarGráficoToolStripMenuItem->Name = L"plotarGráficoToolStripMenuItem";
			this->plotarGráficoToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->plotarGráficoToolStripMenuItem->Text = L"Plotar Gráfico";
			// 
			// cidadesSToolStripMenuItem
			// 
			this->cidadesSToolStripMenuItem->Name = L"cidadesSToolStripMenuItem";
			this->cidadesSToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->cidadesSToolStripMenuItem->Text = L"Cidades de Santa Catarina";
			// 
			// paísesDaAméricaDoSulToolStripMenuItem
			// 
			this->paísesDaAméricaDoSulToolStripMenuItem->Name = L"paísesDaAméricaDoSulToolStripMenuItem";
			this->paísesDaAméricaDoSulToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->paísesDaAméricaDoSulToolStripMenuItem->Text = L"Países da América do Sul";
			// 
			// top10PaísesDoMundoToolStripMenuItem
			// 
			this->top10PaísesDoMundoToolStripMenuItem->Name = L"top10PaísesDoMundoToolStripMenuItem";
			this->top10PaísesDoMundoToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->top10PaísesDoMundoToolStripMenuItem->Text = L"Top 10 países do mundo";
			// 
			// sistemaToolStripMenuItem
			// 
			this->sistemaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sairToolStripMenuItem,
					this->limparTelaToolStripMenuItem
			});
			this->sistemaToolStripMenuItem->Name = L"sistemaToolStripMenuItem";
			this->sistemaToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->sistemaToolStripMenuItem->Text = L"Sistema";
			this->sistemaToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::sistemaToolStripMenuItem_Click);
			// 
			// sairToolStripMenuItem
			// 
			this->sairToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sairToolStripMenuItem.Image")));
			this->sairToolStripMenuItem->Name = L"sairToolStripMenuItem";
			this->sairToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->sairToolStripMenuItem->Text = L"Sair";
			this->sairToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::sairToolStripMenuItem_Click);
			// 
			// limparTelaToolStripMenuItem
			// 
			this->limparTelaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"limparTelaToolStripMenuItem.Image")));
			this->limparTelaToolStripMenuItem->Name = L"limparTelaToolStripMenuItem";
			this->limparTelaToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->limparTelaToolStripMenuItem->Text = L"Limpar tela";
			this->limparTelaToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::limparTelaToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(973, 39);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Margin = System::Windows::Forms::Padding(25, 1, 0, 2);
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(35, 35);
			this->toolStripButton1->Text = L"Gerenciamento";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &JanelaPrincipal::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Margin = System::Windows::Forms::Padding(55, 1, 0, 2);
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(36, 36);
			this->toolStripButton2->Text = L"Relatórios";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &JanelaPrincipal::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Margin = System::Windows::Forms::Padding(30, 1, 0, 2);
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(36, 36);
			this->toolStripButton3->Text = L"Gráficos";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &JanelaPrincipal::toolStripButton3_Click);
			// 
			// JanelaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(973, 511);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"JanelaPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Meu Mundo";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

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

		void desconectarBanco()
		{
			// finaliza conexão com o banco
			mysql_close(conexao);
		}

	private: System::Void JanelaPrincipal_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (conexao != NULL)
			desconectarBanco();
		Application::Exit();
	}
#pragma endregion
	
		   
		   JanelaGrafico^ jg;
		   JanelaCadastro^ jc;
		   JanelaRelatorio^ jr;

private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	JanelaCadastro^ jc = gcnew JanelaCadastro();
	jc->MdiParent = this;
	jc->Show();
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	jr = gcnew JanelaRelatorio();
	jr->MdiParent = this;
	jr->Show();
}

private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	jg = gcnew JanelaGrafico();
	jg->MdiParent = this;
	jg->Show();
}
private: System::Void cadastroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void relatoriosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gráficosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void sairToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (conexao != NULL)
		desconectarBanco();
	Application::Exit();
}
	private: System::Void limparTelaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		/*jg->Close();
		jc->Close();
		jr->Close();*/
	}
private: System::Void sistemaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void filtroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buscarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	jc = gcnew JanelaCadastro();
	jc->MdiParent = this;
	jc->Show();
	MessageBox:: Show("Para buscar uma cidade, digite o código dela e clique no botão!", "Buscar");
}
private: System::Void excluirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	jc->MdiParent = this;
	jc->Show();
	MessageBox::Show("Para excluir uma cidade, digite o código dela e clique no botão!", "Excluir");
}
private: System::Void nomeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	jr->MdiParent = this;
	jr->Show();
}
};
}
