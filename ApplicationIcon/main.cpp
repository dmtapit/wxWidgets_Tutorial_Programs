#include "main.h"
#include "icon.h"

IMPLEMENT_APP(ApplicationIcon)

bool ApplicationIcon::OnInit()
{
	Icon *icon = new Icon(wxT("Icon"));
	icon->Show(true);

	return true;
}