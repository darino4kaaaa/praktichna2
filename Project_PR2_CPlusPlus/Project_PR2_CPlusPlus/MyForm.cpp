#include "MyForm.h"
#include <Windows.h>
#include <string>
#include <cmath>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace ProjectPR2CPlusPlus; 
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
