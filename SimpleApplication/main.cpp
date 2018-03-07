#include "main.h"
#include "simple.h"

/* 
	wxIMPLEMENT_APP(appClass) allows wxWidgets to dynamically create an instance of the application object at the
	appropriate point in wxWidgets initialization.

	The code that implements the application is hidden behind this macro.
*/
IMPLEMENT_APP(SimpleApplication)

bool SimpleApplication::OnInit()
{
	Simple *simple = new Simple(wxT("Simple"));
	simple->Show(true);

	return true;
}