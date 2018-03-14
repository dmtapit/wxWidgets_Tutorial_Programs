#include "main.h"
#include "gridsizer.h"\

IMPLEMENT_APP(GridSizerApp)

bool GridSizerApp::OnInit()
{
	GridSizer *gs = new GridSizer(wxT("GridSizer"));
	gs->Show(true);

	return true;
}