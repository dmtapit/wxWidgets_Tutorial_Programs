#include "main.h"
#include "bitmapbutton.h"

IMPLEMENT_APP(BitmapButtonApp)

bool BitmapButtonApp::OnInit()
{
	BitmapButton *bb = new BitmapButton(wxT("BitmapButton"));
	bb->Show(true);

	return true;
}