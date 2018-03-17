#include "main.h"
#include "checkbox.h"

IMPLEMENT_APP(CheckBoxApp)

bool CheckBoxApp::OnInit()
{
	CheckBox *cb = new CheckBox(wxT("CheckBox"));
	cb->Show(true);

	return(true);
}