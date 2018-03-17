#pragma once
#include <wx/wx.h>
#include <wx/slider.h>

class BitmapButton : public wxFrame
{
public:
	BitmapButton(const wxString& title);

	wxSlider *slider;
	wxBitmapButton *button;
	int pos;

	void OnScroll(wxScrollEvent& event);
};

const int ID_SLIDER = 100;