#include "main.h"
#include "Communicate.h"

IMPLEMENT_APP(WidgetCommunication)

bool WidgetCommunication::OnInit()
{
	Communicate *communicate = new Communicate(wxT("Widgets communicate"));
	communicate->Show(true);

	return true;
}