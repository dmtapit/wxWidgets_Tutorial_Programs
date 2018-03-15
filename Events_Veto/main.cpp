#include "main.h"
#include "veto.h"

IMPLEMENT_APP(VetoApp)

bool VetoApp::OnInit()
{
	Veto *veto = new Veto(wxT("Veto"));
	veto->Show(true);

	return true;
}