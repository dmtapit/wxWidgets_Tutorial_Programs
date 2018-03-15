#include "veto.h"

Veto::Veto(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 130))
{
	Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(Veto::OnClose));
	Centre();
}

void Veto::OnClose(wxCloseEvent& event)
{
	wxMessageDialog *dial = new wxMessageDialog(NULL,
		wxT("Are you sure to quit?"), wxT("Question"),
		wxYES_NO | wxNO_DEFAULT | wxICON_QUESTION);

	int ret = dial->ShowModal();
	dial->Destroy();

	if (ret == wxID_YES) {
		Destroy();
	} else {
		event.Veto();
	}
}