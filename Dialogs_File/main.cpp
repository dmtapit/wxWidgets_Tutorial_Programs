#include "main.h"
#include "openfile.h"

IMPLEMENT_APP(OpenFileApp)

bool OpenFileApp::OnInit()
{
	Openfile *open = new Openfile(wxT("Openfile"));
	open->Show(true);

	return true;
}