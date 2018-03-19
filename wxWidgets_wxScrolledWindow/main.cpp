#include "main.h"
#include "scrolledwindow.h"

IMPLEMENT_APP(ScrWindowApp)

bool ScrWindowApp::OnInit()
{
	ScrWindow *sw = new ScrWindow(wxT("ScrolledWindow"));
	sw->Show(true);

	return true;
}