#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) { /*������� �����*/
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CourseWork::MyForm form;  //����� ������� ��� ������ ������� (� �� test_project)
	Application::Run(%form);
}


