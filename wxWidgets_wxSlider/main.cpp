#include "main.h"
#include "Slider.h"

IMPLEMENT_APP(SliderApp)

bool SliderApp::OnInit()
{
	Slider *slider = new Slider(wxT("Slider"));
	slider->Show(true);

	return true;
}