#include "main.h"
#include "textdrop.h"

IMPLEMENT_APP(TextDropApp)

bool TextDropApp::OnInit()
{
	TextDrop *td = new TextDrop(wxT("TextDrop"));
	td->Show(true);

	return true;
}