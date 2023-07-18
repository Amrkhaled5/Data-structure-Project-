#include "MyForm1.h"
//#include "Admin.h"
#include <iostream>
//#include <array>
//std::array<int, 5> myArray;
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GUI1::MyForm1 form;
	Application::Run(% form);
}

