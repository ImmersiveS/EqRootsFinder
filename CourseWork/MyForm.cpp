#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) { /*Функція входу*/
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CourseWork::MyForm form;  //нужно указать имя своего проекта (а не test_project)
	Application::Run(%form);
}


