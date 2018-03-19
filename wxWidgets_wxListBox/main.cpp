#include "main.h"
#include "Listbox.h"

IMPLEMENT_APP(ListboxApp)

bool ListboxApp::OnInit()
{
	Listbox *listbox = new Listbox(wxT("Listbox"));
	listbox->Show(true);

	return true;
}