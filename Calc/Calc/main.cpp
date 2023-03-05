#include "FFirst.h";

using namespace Calc;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Calc::Form1 form;
    Application::Run(gcnew Form1());
    return 0;
}
