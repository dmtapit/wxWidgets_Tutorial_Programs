#include "simple.h"

Simple::Simple(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
	Centre();  // This method centers the window on the screen, both horizontally and vertically
}