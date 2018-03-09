#include "main.h"
#include "menu.h"

IMPLEMENT_APP(SimpleMenuApp)

bool SimpleMenuApp::OnInit()
{
	SimpleMenu *menu = new SimpleMenu(wxT("Simple Menu"));
	menu->Show(true);

	return true;
}