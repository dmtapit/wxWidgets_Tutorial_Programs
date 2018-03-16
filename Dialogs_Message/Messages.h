#pragma once
#include <wx/wx.h>

class Messages : public wxFrame
{
public:
	Messages(const wxString& title);

	void ShowMessage1(wxCommandEvent& event);
	void ShowMessage2(wxCommandEvent& event);
	void ShowMessage3(wxCommandEvent& event);
	void ShowMessage4(wxCommandEvent& event);
};

const int ID_INFO = 1;
const int ID_ERROR = 2;
const int ID_QUESTION = 3;
const int ID_ALERT = 4;