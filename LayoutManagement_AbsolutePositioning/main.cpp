#include "main.h"
#include "absolute.h"

IMPLEMENT_APP(AbsoluteApp)

bool AbsoluteApp::OnInit()
{
	Absolute *absolute = new Absolute(wxT("Absolute"));
	absolute->Show(true);

	return true;
}