#include "main.h"
#include "customdialog.h"

IMPLEMENT_APP(CustomDialogApp)

bool CustomDialogApp::OnInit()
{
	CustomDialog *custom = new CustomDialog(wxT("Custom Dialog"));
	custom->Show(true);

	return true;
}