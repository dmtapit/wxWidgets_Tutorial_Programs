#include "main.h"
#include "togglebutton.h"

IMPLEMENT_APP(ToggleButtonApp)

bool ToggleButtonApp::OnInit()
{
	ToggleButton *button = new ToggleButton(wxT("ToggleButton"));

	button->Centre();
	button->Show(true);

	return true;
}