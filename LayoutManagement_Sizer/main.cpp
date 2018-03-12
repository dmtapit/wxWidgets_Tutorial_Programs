#include "main.h"
#include "sizer.h"

IMPLEMENT_APP(SizerApp)

bool SizerApp::OnInit()
{
	Sizer *sizer = new Sizer(wxT("Sizer"));
	sizer->Show(true);

	return true;
}