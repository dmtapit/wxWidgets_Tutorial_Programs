#include "main.h"
#include "menu.h"

IMPLEMENT_APP(SubMenuApp)

bool SubMenuApp::OnInit()
{
	SubMenu *smenu = new SubMenu(wxT("Submenu"));
	smenu->Show(true);

	return true;
}