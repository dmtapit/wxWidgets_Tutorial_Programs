#include "main.h"
#include "border.h"

IMPLEMENT_APP(BorderApp)

bool BorderApp::OnInit()
{
	Border *border = new Border(wxT("Border"));
	border->Show(true);

	return true;
}