#include "JanelaPrincipal.h"
#include "JanelaCadastro.h"

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VisualStudioMysql::JanelaPrincipal form;
	Application::Run(%form);
}