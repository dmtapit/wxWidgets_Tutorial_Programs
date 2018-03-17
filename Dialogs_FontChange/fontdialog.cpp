#include <wx/fontdlg.h>
#include "fontdialog.h"

ChangeFont::ChangeFont(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(300, 200))
{
	wxPanel *panel = new wxPanel(this, -1);

	wxMenuBar *menubar = new wxMenuBar;
	wxMenu *file = new wxMenu;
	file->Append(ID_FONTDIALOG, wxT("&Change font"));
	menubar->Append(file, wxT("&File"));
	SetMenuBar(menubar);

	Connect(ID_FONTDIALOG, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(ChangeFont::OnOpen));

	st = new wxStaticText(panel, wxID_ANY, wxT("The Agoge"), wxPoint(20, 20));

	Center();
}

void ChangeFont::OnOpen(wxCommandEvent& WXUNUSED(event))
{
	wxFontDialog *fontDialog = new wxFontDialog(this);

	if (fontDialog->ShowModal() == wxID_OK) {
		st->SetFont(fontDialog->GetFontData().GetChosenFont());
	}
}