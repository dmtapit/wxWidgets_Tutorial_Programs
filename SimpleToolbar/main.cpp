#include "main.h"
#include "toolbar.h"

IMPLEMENT_APP(SimpleToolbarApp)

bool SimpleToolbarApp::OnInit()
{
	Toolbar *toolbar = new Toolbar(wxT("Toolbar"));
	toolbar->Show(true);

	return true;
}