#include "main.h"
#include "statictext.h"

IMPLEMENT_APP(StaticTextApp)

bool StaticTextApp::OnInit()
{
	StaticText *st = new StaticText(wxT("StaticText"));
	st->Show(true);

	return true;
}