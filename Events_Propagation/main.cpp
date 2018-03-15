#include "main.h"
#include "propagate.h"

IMPLEMENT_APP(PropagateApp)

bool PropagateApp::OnInit()
{
	Propagate *prop = new Propagate(wxT("Propagate"));
	prop->Show(true);

	return true;
}