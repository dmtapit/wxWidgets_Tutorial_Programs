#include "main.h"
#include "Notebook.h"

IMPLEMENT_APP(NotebookApp)

bool NotebookApp::OnInit()
{
	Notebook *notebook = new Notebook(wxT("Notebook"));
	notebook->Show(true);

	return(true);
}