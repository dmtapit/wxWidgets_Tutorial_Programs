#include "button.h"

Button::Button(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(270, 150))
{
	// First we create a wxPanel widget.  It will be placed inside a wxFrame widget
	wxPanel *panel = new wxPanel(this, wxID_ANY);

	// Then we create a wxButton widget.  It is placed on the panel.  We use the predefined wxID_EXIT id
	// for the button.  It will cause to display a small exit icon on the button.  The label of the button
	// is "Quit".  The button is positioned manually at x=20, y=20 coordinates.  The beginning of the
	// coordinate system is at the upper left hand corner.
	wxButton *button = new wxButton(panel, wxID_EXIT, wxT("Quit"), wxPoint(20, 20));


	//  If we click on the button, a wxEVT_COMMAND_BUTTON_CLICKED event is generated.  We connect the event
	// to the OnQuit() method of the Button class.  So when we click the button, the OnQuit() method is called.
	Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Button::OnQuit));

	// We set the keyboard focus to the button.  So if we press the ENTER key, the button is being clicked.
	button->SetFocus();
	Centre();
}

void Button::OnQuit(wxCommandEvent & WXUNUSED(event))
{
	// Inside the OnQuit() method, we call the Close() method.  This will terminate our application.
	Close(true);
}