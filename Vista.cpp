#include "Vista.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PortadaFE::	Vista form;
	Application::Run(%form);
}
