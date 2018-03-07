#include "icon.h"

Icon::Icon(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
	// Displaying an application icon is a matter of one code line.
	// XPM (X PixMap) is an ASCII image format.
	SetIcon(wxIcon(wxT("web.xpm")));
	Centre();
}