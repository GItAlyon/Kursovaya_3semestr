#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Kursovaya;
[STAThread]
int main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());

	return 0;
}