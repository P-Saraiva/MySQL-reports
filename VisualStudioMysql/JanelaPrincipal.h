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
	private: System::Windows::Forms::ToolStripMenuItem^ gr�ficosToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ c�digoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pa�sToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ popula��oToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pa�sesDaAm�ricaDoSulToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ top10Pa�sesDoMundoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ plotarGr�ficoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cidadesSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pa�sesDaAm�ricaDoSulToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ top10Pa�sesDoMundoToolStripMenuItem;









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
			this->c�digoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pa�sToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->popula��oToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gr�ficosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cidadesDeSantaCatarinaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gerarPDFToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pa�sesDaAm�ricaDoSulToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->top10Pa�sesDoMundoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plotarGr�ficoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cidadesSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pa�sesDaAm�ricaDoSulToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->top10Pa�sesDoMundoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
					this->relatoriosToolStripMenuItem, this->gr�ficosToolStripMenuItem, this->sistemaToolStripMenuItem
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
			this->relatoriosToolStripMenuItem->Text = L"Relat�rios";
			this->relatoriosToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::relatoriosToolStripMenuItem_Click);
			// 
			// filtroToolStripMenuItem
			// 
			this->filtroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->nomeToolStripMenuItem,
					this->c�digoToolStripMenuItem, this->estadoToolStripMenuItem, this->pa�sToolStripMenuItem, this->popula��oToolStripMenuItem
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
			// c�digoToolStripMenuItem
			// 
			this->c�digoToolStripMenuItem->Name = L"c�digoToolStripMenuItem";
			this->c�digoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->c�digoToolStripMenuItem->Text = L"C�digo";
			// 
			// estadoToolStripMenuItem
			// 
			this->estadoToolStripMenuItem->Name = L"estadoToolStripMenuItem";
			this->estadoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->estadoToolStripMenuItem->Text = L"Estado";
			// 
			// pa�sToolStripMenuItem
			// 
			this->pa�sToolStripMenuItem->Name = L"pa�sToolStripMenuItem";
			this->pa�sToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pa�sToolStripMenuItem->Text = L"Pa�s";
			// 
			// popula��oToolStripMenuItem
			// 
			this->popula��oToolStripMenuItem->Name = L"popula��oToolStripMenuItem";
			this->popula��oToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->popula��oToolStripMenuItem->Text = L"Popula��o";
			// 
			// gr�ficosToolStripMenuItem
			// 
			this->gr�ficosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cidadesDeSantaCatarinaToolStripMenuItem,
					this->plotarGr�ficoToolStripMenuItem
			});
			this->gr�ficosToolStripMenuItem->Name = L"gr�ficosToolStripMenuItem";
			this->gr�ficosToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->gr�ficosToolStripMenuItem->Text = L"Gr�ficos";
			this->gr�ficosToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::gr�ficosToolStripMenuItem_Click);
			// 
			// cidadesDeSantaCatarinaToolStripMenuItem
			// 
			this->cidadesDeSantaCatarinaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->gerarPDFToolStripMenuItem1,
					this->pa�sesDaAm�ricaDoSulToolStripMenuItem1, this->top10Pa�sesDoMundoToolStripMenuItem1
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
			// pa�sesDaAm�ricaDoSulToolStripMenuItem1
			// 
			this->pa�sesDaAm�ricaDoSulToolStripMenuItem1->Name = L"pa�sesDaAm�ricaDoSulToolStripMenuItem1";
			this->pa�sesDaAm�ricaDoSulToolStripMenuItem1->Size = System::Drawing::Size(211, 22);
			this->pa�sesDaAm�ricaDoSulToolStripMenuItem1->Text = L"Pa�ses da Am�rica do Sul";
			// 
			// top10Pa�sesDoMundoToolStripMenuItem1
			// 
			this->top10Pa�sesDoMundoToolStripMenuItem1->Name = L"top10Pa�sesDoMundoToolStripMenuItem1";
			this->top10Pa�sesDoMundoToolStripMenuItem1->Size = System::Drawing::Size(211, 22);
			this->top10Pa�sesDoMundoToolStripMenuItem1->Text = L"Top 10 pa�ses do mundo";
			// 
			// plotarGr�ficoToolStripMenuItem
			// 
			this->plotarGr�ficoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cidadesSToolStripMenuItem,
					this->pa�sesDaAm�ricaDoSulToolStripMenuItem, this->top10Pa�sesDoMundoToolStripMenuItem
			});
			this->plotarGr�ficoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plotarGr�ficoToolStripMenuItem.Image")));
			this->plotarGr�ficoToolStripMenuItem->Name = L"plotarGr�ficoToolStripMenuItem";
			this->plotarGr�ficoToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->plotarGr�ficoToolStripMenuItem->Text = L"Plotar Gr�fico";
			// 
			// cidadesSToolStripMenuItem
			// 
			this->cidadesSToolStripMenuItem->Name = L"cidadesSToolStripMenuItem";
			this->cidadesSToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->cidadesSToolStripMenuItem->Text = L"Cidades de Santa Catarina";
			// 
			// pa�sesDaAm�ricaDoSulToolStripMenuItem
			// 
			this->pa�sesDaAm�ricaDoSulToolStripMenuItem->Name = L"pa�sesDaAm�ricaDoSulToolStripMenuItem";
			this->pa�sesDaAm�ricaDoSulToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->pa�sesDaAm�ricaDoSulToolStripMenuItem->Text = L"Pa�ses da Am�rica do Sul";
			// 
			// top10Pa�sesDoMundoToolStripMenuItem
			// 
			this->top10Pa�sesDoMundoToolStripMenuItem->Name = L"top10Pa�sesDoMundoToolStripMenuItem";
			this->top10Pa�sesDoMundoToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->top10Pa�sesDoMundoToolStripMenuItem->Text = L"Top 10 pa�ses do mundo";
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
			this->toolStripButton2->Text = L"Relat�rios";
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
			this->toolStripButton3->Text = L"Gr�ficos";
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
				MessageBox::Show(gcnew String("Erro de conex�o com o banco.\n"));
				return FALSE;
			}

			// sucesso
			return TRUE;
		}

		void desconectarBanco()
		{
			// finaliza conex�o com o banco
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
private: System::Void gr�ficosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
	MessageBox:: Show("Para buscar uma cidade, digite o c�digo dela e clique no bot�o!", "Buscar");
}
private: System::Void excluirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	jc->MdiParent = this;
	jc->Show();
	MessageBox::Show("Para excluir uma cidade, digite o c�digo dela e clique no bot�o!", "Excluir");
}
private: System::Void nomeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	jr->MdiParent = this;
	jr->Show();
}
};
}
