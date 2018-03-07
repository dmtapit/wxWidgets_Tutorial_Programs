#include "main.h"
#include "button.h"

IMPLEMENT_APP(SimpleButton)

bool SimpleButton::OnInit()
{
	Button *btnapp = new Button(wxT("Button"));
	btnapp->Show(true);

	return true;
}