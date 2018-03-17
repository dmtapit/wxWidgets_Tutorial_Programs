#include "main.h"
#include "fontdialog.h"

IMPLEMENT_APP(FontDialogApp)

bool FontDialogApp::OnInit()
{
	ChangeFont *change = new ChangeFont(wxT("Change font"));
	change->Show(true);

	return true;
}