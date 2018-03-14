#include "main.h"
#include "flexgridsizer.h"

IMPLEMENT_APP(FlexGridSizerApp)

bool FlexGridSizerApp::OnInit()
{
	FlexGridSizer *fgs = new FlexGridSizer(wxT("FlexGridSizer"));
	fgs->Show(true);

	return true;
}