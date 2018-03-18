#include "main.h"
#include "staticline.h"

IMPLEMENT_APP(StaticLineApp)

bool StaticLineApp::OnInit()
{
	StaticLine *sl = new StaticLine(wxT("The Central Europe"));
	sl->ShowModal();
	sl->Destroy();

	return true;
}