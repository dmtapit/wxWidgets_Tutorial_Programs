#include "main.h"
#include "ident.h"

IMPLEMENT_APP(IdentApp)

bool IdentApp::OnInit()
{
	Ident *ident = new Ident(wxT("Identifiers"));
	ident->Show(true);

	return true;
}