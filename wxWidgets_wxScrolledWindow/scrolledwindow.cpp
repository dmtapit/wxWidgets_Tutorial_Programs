#include "scrolledwindow.h"

ScrWindow::ScrWindow(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(300, 200))
{
	wxImage::AddHandler(new wxJPEGHandler);
	wxScrolledWindow *sw = new wxScrolledWindow(this);

	wxBitmap bmp(wxT("Eilean_donan_castle.jpg"), wxBITMAP_TYPE_JPEG);
	wxStaticBitmap *sb = new wxStaticBitmap(sw, -1, bmp);

	int width = bmp.GetWidth();
	int height = bmp.GetHeight();

	sw->SetScrollbars(10, 10, width / 10, height / 10);
	sw->Scroll(50, 10);

	Center();
}