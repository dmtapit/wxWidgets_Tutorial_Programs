#include "main.h"
#include "align.h"

IMPLEMENT_APP(AlignApp)

bool AlignApp::OnInit()
{
	Align *align = new Align(wxT("Align"));
	align->Show(true);

	return true;
}