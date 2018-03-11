#include "main.h"
#include "toolbars.h"

IMPLEMENT_APP(ToolbarsApp)

bool ToolbarsApp::OnInit()
{
	Toolbar *toolbar = new Toolbar(wxT("Toolbar"));
	toolbar->Show(true);

	return true;
}