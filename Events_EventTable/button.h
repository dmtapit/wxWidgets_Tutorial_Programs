#pragma once
#include <wx/wx.h>

class MyButton : public wxFrame
{
public:
	MyButton(const wxString& title);

	void OnQuit(wxCommandEvent& event);

private:
	DECLARE_EVENT_TABLE()

};