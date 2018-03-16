#include "main.h"
#include "Messages.h"

IMPLEMENT_APP(MessagesApp)

bool MessagesApp::OnInit()
{
	Messages *msgs = new Messages(wxT("Messages"));
	msgs->Show(true);

	return true;
}