#include "Messenger.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Sockets::Messenger form;
	Application::Run(% form);
}