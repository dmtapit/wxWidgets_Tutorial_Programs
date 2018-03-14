#include "main.h"
#include "gotoclass.h"

IMPLEMENT_APP(GotoClassApp)

bool GotoClassApp::OnInit()
{
	GotoClass *gotoclass = new GotoClass(wxT("GotoClass"));
	gotoclass->Show(true);

	return true;
}