///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "calculatorgui.h"

///////////////////////////////////////////////////////////////////////////

DlgDef::DlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	m_Overview = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );

	m_result = new wxTextCtrl( m_Overview, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 420,40 ), wxTE_PROCESS_ENTER );
	m_result->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	m_result->SetMinSize( wxSize( 200,40 ) );
	m_result->SetMaxSize( wxSize( -1,40 ) );

	bSizer41->Add( m_result, 8, wxALL|wxEXPAND, 5 );

	Calculate = new wxButton( m_Overview, wxID_ANY, _("Calculate"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	Calculate->SetMinSize( wxSize( 80,30 ) );
	Calculate->SetMaxSize( wxSize( 80,40 ) );

	bSizer41->Add( Calculate, 0, wxALL|wxEXPAND, 5 );

	CCE = new wxButton(m_Overview, wxID_ANY, _T("C/CE"), wxDefaultPosition, wxSize(-1, -1), 0);
	CCE->SetMinSize(wxSize(80, 30));
	CCE->SetMaxSize(wxSize(80, 40));

	bSizer41->Add(CCE, 0, wxALL | wxEXPAND, 5);

	m_Function = new wxButton( m_Overview, wxID_ANY, _("Function"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer41->Add( m_Function, 0, wxALL|wxEXPAND, 5 );

	m_Help = new wxCheckBox( m_Overview, wxID_ANY, _("History"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer41->Add( m_Help, 0, wxALL|wxEXPAND, 5 );

	m_HelpButton = new wxButton( m_Overview, wxID_ANY, _("Help"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer41->Add( m_HelpButton, 0, wxALL|wxEXPAND, 5 );


	bSizer45->Add( bSizer41, 0, wxEXPAND, 5 );

	wxBoxSizer* HelpPanel;
	HelpPanel = new wxBoxSizer( wxVERTICAL );

	wxArrayString m_HistoryPulldownChoices;
	m_HistoryPulldown = new wxChoice( m_Overview, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_HistoryPulldownChoices, 0 );
	m_HistoryPulldown->SetSelection( 0 );
	m_HistoryPulldown->Hide();

	HelpPanel->Add( m_HistoryPulldown, 1, wxALL|wxEXPAND, 5 );

	m_listCtrl = new wxListCtrl( m_Overview, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_AUTOARRANGE|wxLC_LIST );
	m_listCtrl->Hide();

	HelpPanel->Add( m_listCtrl, 3, wxALL|wxEXPAND, 5 );


	bSizer45->Add( HelpPanel, 1, wxEXPAND, 5 );


	m_Overview->SetSizer( bSizer45 );
	m_Overview->Layout();
	bSizer45->Fit( m_Overview );
	bSizer7->Add( m_Overview, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer7 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DlgDef::OnClose ) );
	m_result->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_result->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );
	Calculate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );
	CCE->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DlgDef::OnClear), NULL, this);
	m_Function->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnFunction ), NULL, this );
	m_Help->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DlgDef::OnToggle ), NULL, this );
	m_HelpButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnHelp ), NULL, this );
	m_HistoryPulldown->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnHistoryPulldown ), NULL, this );
	m_listCtrl->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( DlgDef::OnItem ), NULL, this );
}

DlgDef::~DlgDef()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DlgDef::OnClose ) );
	m_result->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_result->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );
	Calculate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );
	CCE->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DlgDef::OnClear), NULL, this);
	m_Function->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnFunction ), NULL, this );
	m_Help->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DlgDef::OnToggle ), NULL, this );
	m_HelpButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnHelp ), NULL, this );
	m_HistoryPulldown->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnHistoryPulldown ), NULL, this );
	m_listCtrl->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( DlgDef::OnItem ), NULL, this );

}


CfgDlgDef::CfgDlgDef(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer(wxVERTICAL);

	wxStaticBoxSizer* sbSizer12;
	sbSizer12 = new wxStaticBoxSizer(new wxStaticBox(this, wxID_ANY, _("Display Accuracy")), wxVERTICAL);

	wxString m_Calc_ReportingChoices[] = { _("Three decimal places (Default)"),_("Precise"), _("Precise, thousands separator"), _("Succinct"), _("Succinct, thousands separator"), _("Scientific"), _("Humanised"), wxEmptyString };
	int m_Calc_ReportingNChoices = sizeof(m_Calc_ReportingChoices) / sizeof(wxString);
	m_Calc_Reporting = new wxChoice(sbSizer12->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Calc_ReportingNChoices, m_Calc_ReportingChoices, 0);
	m_Calc_Reporting->SetSelection(0);
	sbSizer12->Add(m_Calc_Reporting, 0, wxALL | wxEXPAND, 5);


	bSizer2->Add(sbSizer12, 0, wxEXPAND, 5);

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer(new wxStaticBox(this, wxID_ANY, _("Show/Hide Buttons")), wxVERTICAL);

	m_showhelpB = new wxCheckBox(sbSizer3->GetStaticBox(), wxID_ANY, _("Help Button"), wxDefaultPosition, wxDefaultSize, 0);
	m_showhelpB->SetValue(true);
	m_showhelpB->SetToolTip(_("Show/Hide help button (you can always type \"help\" from input window)."));

	sbSizer3->Add(m_showhelpB, 0, wxALL, 5);

	m_CalculateB = new wxCheckBox(sbSizer3->GetStaticBox(), wxID_ANY, _("Calculate Button"), wxDefaultPosition, wxDefaultSize, 0);
	m_CalculateB->SetValue(true);
	m_CalculateB->SetToolTip(_("Show/Hide Calculate button (you can always press enter at the end of input)."));

	sbSizer3->Add(m_CalculateB, 0, wxALL, 5);

	m_showfunction = new wxCheckBox(sbSizer3->GetStaticBox(), wxID_ANY, _("Function Button"), wxDefaultPosition, wxDefaultSize, 0);
	m_showfunction->SetValue(true);
	sbSizer3->Add(m_showfunction, 0, wxALL, 5);


	bSizer2->Add(sbSizer3, 1, wxEXPAND, 5);

	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer(new wxStaticBox(this, wxID_ANY, _("History Settings")), wxVERTICAL);

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer(0, 2, 0, 0);
	fgSizer3->SetFlexibleDirection(wxBOTH);
	fgSizer3->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_Font_Size_txt = new wxStaticText(sbSizer4->GetStaticBox(), wxID_ANY, _("Max Results"), wxDefaultPosition, wxDefaultSize, 0);
	m_Font_Size_txt->Wrap(-1);
	m_Font_Size_txt->SetToolTip(_("More results use up more memory. Memory is only allocated if required (e.g. if number is 30000, corresponding memory will only be used after this many calculations)."));

	fgSizer3->Add(m_Font_Size_txt, 0, wxALL, 5);

	m_MaxResults = new wxSpinCtrl(sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 30000, 30);
	m_MaxResults->SetToolTip(_("More results use more memory. Memory will be cleared if Max Results is reached. NB variables are kept"));

	fgSizer3->Add(m_MaxResults, 0, wxALL, 5);


	sbSizer4->Add(fgSizer3, 1, wxEXPAND, 5);

	m_staticText17 = new wxStaticText(sbSizer4->GetStaticBox(), wxID_ANY, _("Opacity"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText17->Wrap(-1);
	m_staticText17->Hide();

	sbSizer4->Add(m_staticText17, 0, wxALL, 5);

	m_sOpacity = new wxSlider(sbSizer4->GetStaticBox(), wxID_ANY, 50, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	m_sOpacity->Hide();

	sbSizer4->Add(m_sOpacity, 0, wxALL | wxEXPAND, 5);

	m_showhistory = new wxCheckBox(sbSizer4->GetStaticBox(), wxID_ANY, _("Show History Window"), wxDefaultPosition, wxDefaultSize, 0);
	m_showhistory->SetValue(true);
	m_showhistory->SetToolTip(_("Show/Hide history"));

	sbSizer4->Add(m_showhistory, 0, wxALL, 5);


	bSizer2->Add(sbSizer4, 0, wxALL | wxEXPAND, 5);

	wxStaticBoxSizer* sbSizer41;
	sbSizer41 = new wxStaticBoxSizer(new wxStaticBox(this, wxID_ANY, _("Other")), wxVERTICAL);

	m_logresults = new wxCheckBox(sbSizer41->GetStaticBox(), wxID_ANY, _("Log results to opencpn"), wxDefaultPosition, wxDefaultSize, 0);
	m_logresults->SetToolTip(_("Log calculator results in OpenCPN log file"));

	sbSizer41->Add(m_logresults, 0, wxALL, 5);


	bSizer2->Add(sbSizer41, 0, wxEXPAND, 5);


	bSizer1->Add(bSizer2, 1, wxEXPAND, 5);

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton(this, wxID_OK);
	m_sdbSizer1->AddButton(m_sdbSizer1OK);
	m_sdbSizer1Cancel = new wxButton(this, wxID_CANCEL);
	m_sdbSizer1->AddButton(m_sdbSizer1Cancel);
	m_sdbSizer1->Realize();

	bSizer1->Add(m_sdbSizer1, 0, wxALL | wxEXPAND, 5);


	this->SetSizer(bSizer1);
	this->Layout();
	bSizer1->Fit(this);

	this->Centre(wxBOTH);
}

CfgDlgDef::~CfgDlgDef()
{
}


HlpDlgDef::HlpDlgDef(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
		{
			this->SetSizeHints(wxSize(-1, -1), wxDefaultSize);

			wxBoxSizer* bSizer7;
			bSizer7 = new wxBoxSizer(wxVERTICAL);

			m_scrolledWindow2 = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL | wxVSCROLL);
			m_scrolledWindow2->SetScrollRate(5, 5);
			wxBoxSizer* bSizer10;
			bSizer10 = new wxBoxSizer(wxVERTICAL);

			m_textCtrl3 = new wxTextCtrl(m_scrolledWindow2, wxID_ANY, _("Calculator Plugin for OpenCPN by SaltyPaws aka Walbert Schulpen/Updated by Mike Rossiter(Rasbats)\n=======================================\n\nThis is a light weight yet powerful calculator plugin for OpenCPN. Would you like to know your hull speed? \n\nKey features are:\n* Storing results in variables\n* Shows historic calculations\n* Full complement of nautical functions\n* Screen footprint can be optimised & minimised as required\n\nAdding formulas is easy. If your favorite nautical equation is missing, please let me know your equation via flyspray, and I will add it.\n\nMany formulas are based on U.S. units. Formulas use a 'base' unit, for example US Gallons per Minute. Conversion factors are used to display the result in other units. Using other units the result may not be exactly as expected. For example \"Convert Flowrate\": 10 m3/s converts to 599999.999365987 liter per minute, not 600000 exactly, using the 'precise' accuracy.\n\nHelp\n=========\nType help in the calculator to get these instructions.\n\nExamples of expression that work in the calculator are: (comments are in brackets, some results depend on other example calculations):\n=========\nHull speed:\n\tLWL=48\t\t\t(water line lenght in feet)\n\tvhull=1.34*LWL^(1/2)\t(hull speed in knots)\n\nConversions:\n\tftm=0.3048\t\t(feet to meters)\n\tkm_to_nm=0.539957\t\t(Kilometers to nautical Mile)\n\tftm*LWL\t\t\t(waterline length in meters)\n\nDistance to horizon\n\tR=6378.1*1000\t\t(Radius of the earth in m)\n\tH=2.5\t\t\t(Height of the eye above sea-level in m)\n\td = R * acos(R/(R + h))\t(Distance to horizon in m)   \n\tans*km_to_nm\t\t(Distance to horizon in nm)\n\nDistance to lighthouse\n\tH1=200\t\t\t(height of lighthouse in m)\n\td1 = R*acos(R/(R + H1))\t(Distance to horizon in m)\n\tdistance=d1+d\t\t(visibility range of lighthouse in m)\n\nBuilt-in functions\n\nThe following table gives an overview of the functions supported by the default implementation. It lists the function names, the number of arguments and a brief description.\nName \tArgc. \tExplanation\nsin \t1 \tsine function\ncos \t1 \tcosine function\ntan \t1 \ttangens function\nasin \t1 \tarcus sine function\nacos \t1 \tarcus cosine function\natan \t1 \tarcus tangens function\nsinh \t1 \thyperbolic sine function\ncosh \t1 \thyperbolic cosine\ntanh \t1 \thyperbolic tangens function\nasinh \t1 \thyperbolic arcus sine function\nacosh \t1 \thyperbolic arcus tangens function\natanh \t1 \thyperbolic arcur tangens function\nlog2 \t1 \tlogarithm to the base 2\nlog10 \t1 \tlogarithm to the base 10\nlog \t1 \tlogarithm to the base 10\nln \t1 \tlogarithm to base e (2.71828...)\nexp \t1 \te raised to the power of x\nsqrt \t1 \tsquare root of a value\nsign \t1 \tsign function -1 if x<0; 1 if x>0\nrint \t1 \tround to nearest integer\nabs \t1 \tabsolute value\nmin \tvar. \tmin of all arguments\nmax \tvar. \tmax of all arguments\nsum \tvar. \tsum of all arguments\navg \tvar. \tmean value of all arguments\n\n\nBuilt-in binary operators\n\nThe following table lists the default binary operators supported by the parser.\nOperator \t\tMeaning \t\t\t\tPriority\n= \t\tassignment \t\t\t-1\n&& \t\tlogical and \t\t\t1\n|| \t\tlogical or\t \t\t\t2\n<= \t\tless or equal \t\t\t4\n>= \t\tgreater or equal \t\t\t4\n!= \t\tnot equal \t\t\t\t4\n== \t\tequal \t\t\t\t4\n> \t\tgreater than \t\t\t4\n< \t\tless than \t\t\t\t4\n+ \t\taddition \t\t\t\t5\n- \t\tsubtraction \t\t\t5\n* \t\tmultiplication \t\t\t6\n/ \t\tdivision \t\t\t\t6\n^ \t\traise x to the power of y \t\t7\n*The assignment operator is special since it changes one of its arguments and can only by applied to variables.\nOther operators\n\nmuParser has built in support for the if then else operator. It uses lazy evaluation in order to make sure only the necessary branch of the expression is evaluated.\nOperator \tMeaning \tRemarks\n?: \tif then else operator \tC++ style syntax\n \nVariables:\n\tpi, e\n\tans is the result of the previous calulation\n\tdtr is the conversion factor from degrees to radians\t\t\n\tyou can define your own variables (e.g. myvariable=10/8*cos(dtr*90) or yourvariable=ans)\n\tclear removes results in the history, but leaves your defined variables in tact\n\nUser Interface - type these commands in the command window:\n\thistory - Toggle the history panel\n\tshowhelp - Show/Hide the Help button\n\tshowcalculate - Show/Hide the Calculate button\n\tshowhistory - Show/Hide the history toggle\n\thelp - show the help menu\n\nSettings/Plugins/Preferences:\n\tShow/Hide Function, Calculate and Help buttons\n\tHistory Settings: max Results -this is the number of results that will be stored in the history pulldown. The history pulldown will contain five times this value\n\tLog to opencpn: Enable/Disable logging of results to opencpn logfile.\n\nCalculate Button:\n\tEnter the expression in the input box: e.g. 4+2. Do NOT use the = sign. \"Enter\" or press \"Calculate\".\n\tIf you are using \"History\" the results will appear there. If not the result will appear in the input box.\n\tIf you make a mistake, press \"C/CE\" to clear the input box.  "), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);
			m_textCtrl3->SetMinSize(wxSize(600, 400));

			bSizer10->Add(m_textCtrl3, 100, wxALL | wxEXPAND, 5);

			m_sdbSizer2 = new wxStdDialogButtonSizer();
			m_sdbSizer2OK = new wxButton(m_scrolledWindow2, wxID_OK);
			m_sdbSizer2->AddButton(m_sdbSizer2OK);
			m_sdbSizer2->Realize();

			bSizer10->Add(m_sdbSizer2, 0, wxALIGN_CENTER_HORIZONTAL, 5);


			m_scrolledWindow2->SetSizer(bSizer10);
			m_scrolledWindow2->Layout();
			bSizer10->Fit(m_scrolledWindow2);
			bSizer7->Add(m_scrolledWindow2, 1, wxALL | wxBOTTOM | wxEXPAND | wxTOP, 5);


			this->SetSizer(bSizer7);
			this->Layout();
			bSizer7->Fit(this);

			this->Centre(wxBOTH);

			// Connect Events
			m_sdbSizer2OK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(HlpDlgDef::OnClose), NULL, this);
		}

		HlpDlgDef::~HlpDlgDef()
		{
			// Disconnect Events
			m_sdbSizer2OK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(HlpDlgDef::OnClose), NULL, this);

		}



MyDialog5::MyDialog5( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	m_panel14 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxVERTICAL );

	m_wxNotebook234 = new wxNotebook( m_panel14, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	//
	// start m_panelDegrees
	//

	m_panelDegrees = new wxPanel( m_wxNotebook234, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer402;
	bSizer402 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer7;
	std::string DEGREE = "\u00b0";
	wxString deg(DEGREE);
	wxString degline = _T("DD.dddddd") + deg + _T(" (no limit to decimals)");

	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( m_panelDegrees, wxID_ANY, degline), wxVERTICAL );

	wxBoxSizer* bSizer1321;
	bSizer1321 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer1431;
	bSizer1431 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3231 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _T("Latitude  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3231->Wrap( -1 );
	bSizer1431->Add( m_staticText3231, 1, wxALL|wxEXPAND, 5 );

	m_Lat1 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1431->Add( m_Lat1, 3, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_staticText3331 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, deg, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3331->Wrap( -1 );
	bSizer1431->Add( m_staticText3331, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );


	bSizer1321->Add( bSizer1431, 0, 0, 5 );

	wxBoxSizer* bSizer14311;
	bSizer14311 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32311 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _T("Longitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32311->Wrap( -1 );
	bSizer14311->Add( m_staticText32311, 1, wxALL|wxEXPAND, 5 );

	m_Lon1 = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14311->Add( m_Lon1, 3, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_staticText33311 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _T("\u00b0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33311->Wrap( -1 );
	bSizer14311->Add( m_staticText33311, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );
	//
	// end m_panelDegrees
	//

	bSizer1321->Add( bSizer14311, 0, 0, 5 );


	sbSizer7->Add( bSizer1321, 0, wxEXPAND, 5 );


	bSizer402->Add( sbSizer7, 0, wxEXPAND, 5 );


	m_panelDegrees->SetSizer( bSizer402 );
	m_panelDegrees->Layout();
	bSizer402->Fit( m_panelDegrees );
	m_wxNotebook234->AddPage( m_panelDegrees, _T("Degrees"), false );
	//
	// start m_panelDegreesMinutes
	//
	m_panelDegreesMinutes = new wxPanel( m_wxNotebook234, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4011;
	bSizer4011 = new wxBoxSizer( wxVERTICAL );

	degline = _T("DD") + deg + _T(" MM' (no limit to digits)");

	wxStaticBoxSizer* sbSizer721;
	sbSizer721 = new wxStaticBoxSizer( new wxStaticBox( m_panelDegreesMinutes, wxID_ANY, degline), wxVERTICAL );

	wxBoxSizer* bSizer132121;
	bSizer132121 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer143131;
	bSizer143131 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText323131 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, _T("Lat "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323131->Wrap( -1 );
	bSizer143131->Add( m_staticText323131, 0, wxALL, 5 );

	m_Lat1_d1 = new wxTextCtrl( sbSizer721->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer143131->Add( m_Lat1_d1, 0, wxALL, 5 );

	m_staticText333131 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, deg, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText333131->Wrap( -1 );
	bSizer143131->Add( m_staticText333131, 0, wxALL, 5 );

	m_Lat1_m1 = new wxTextCtrl( sbSizer721->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer143131->Add( m_Lat1_m1, 0, wxALL, 5 );

	m_staticText11431 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, _T("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11431->Wrap( -1 );
	bSizer143131->Add( m_staticText11431, 0, wxALL, 5 );

	wxString m_Lat1_NS1Choices[] = { _("N"), _("S") };
	int m_Lat1_NS1NChoices = sizeof( m_Lat1_NS1Choices ) / sizeof( wxString );
	m_Lat1_NS1 = new wxChoice( sbSizer721->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lat1_NS1NChoices, m_Lat1_NS1Choices, 0 );
	m_Lat1_NS1->SetSelection( 0 );
	bSizer143131->Add( m_Lat1_NS1, 0, wxALL, 5 );


	bSizer132121->Add( bSizer143131, 0, 0, 5 );

	wxBoxSizer* bSizer1431121;
	bSizer1431121 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3231121 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, _T("Lon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3231121->Wrap( -1 );
	bSizer1431121->Add( m_staticText3231121, 0, wxALL, 5 );

	m_Lon1_d1 = new wxTextCtrl( sbSizer721->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer1431121->Add( m_Lon1_d1, 0, wxALL, 5 );

	m_staticText3331121 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, deg, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3331121->Wrap( -1 );
	bSizer1431121->Add( m_staticText3331121, 0, wxALL, 5 );

	m_Lon1_m1 = new wxTextCtrl( sbSizer721->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer1431121->Add( m_Lon1_m1, 0, wxALL, 5 );

	m_staticText114121 = new wxStaticText( sbSizer721->GetStaticBox(), wxID_ANY, _T("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText114121->Wrap( -1 );
	bSizer1431121->Add( m_staticText114121, 0, wxALL, 5 );

	wxString m_Lon1_EW1Choices[] = { _("E"), _("W") };
	int m_Lon1_EW1NChoices = sizeof( m_Lon1_EW1Choices ) / sizeof( wxString );
	m_Lon1_EW1 = new wxChoice( sbSizer721->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lon1_EW1NChoices, m_Lon1_EW1Choices, 0 );
	m_Lon1_EW1->SetSelection( 0 );
	bSizer1431121->Add( m_Lon1_EW1, 0, wxALL, 5 );
	//
	// end m_panelDegreesMinutes
	//
	bSizer132121->Add( bSizer1431121, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	sbSizer721->Add( bSizer132121, 0, 0, 5 );


	bSizer4011->Add( sbSizer721, 0, 0, 5 );


	m_panelDegreesMinutes->SetSizer( bSizer4011 );
	m_panelDegreesMinutes->Layout();
	bSizer4011->Fit( m_panelDegreesMinutes );

	m_wxNotebook234->AddPage( m_panelDegreesMinutes, _T("Degree, Minutes"), false );
	//
	// start m_panelDegreesMinutesSeconds
	//
	m_panelDegreesMinutesSeconds = new wxPanel( m_wxNotebook234, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer401;
	bSizer401 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer72;
	degline = _T("DD") + deg + _T(" MM' SS.s\" (no limit to digits)");

	sbSizer72 = new wxStaticBoxSizer( new wxStaticBox( m_panelDegreesMinutesSeconds, wxID_ANY, degline ), wxVERTICAL );

	wxBoxSizer* bSizer13212;
	bSizer13212 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14313;
	bSizer14313 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32313 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _T("Lat "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32313->Wrap( -1 );
	bSizer14313->Add( m_staticText32313, 0, wxALL, 5 );

	m_Lat1_d = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer14313->Add( m_Lat1_d, 0, wxALL, 5 );

	m_staticText33313 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, deg, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText33313->Wrap( -1 );
	bSizer14313->Add( m_staticText33313, 0, wxALL, 5 );

	m_Lat1_m = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer14313->Add( m_Lat1_m, 0, wxALL, 5 );

	m_staticText1143 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _T("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1143->Wrap( -1 );
	bSizer14313->Add( m_staticText1143, 0, wxALL, 5 );

	m_Lat1_s = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer14313->Add( m_Lat1_s, 0, wxALL, 5 );

	m_staticText1153 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _T("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1153->Wrap( -1 );
	bSizer14313->Add( m_staticText1153, 0, wxALL, 5 );

	wxString m_Lat1_NSChoices[] = { _("N"), _("S") };
	int m_Lat1_NSNChoices = sizeof( m_Lat1_NSChoices ) / sizeof( wxString );
	m_Lat1_NS = new wxChoice( sbSizer72->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lat1_NSNChoices, m_Lat1_NSChoices, 0 );
	m_Lat1_NS->SetSelection( 0 );
	bSizer14313->Add( m_Lat1_NS, 0, wxALL, 5 );


	bSizer13212->Add( bSizer14313, 0, 0, 5 );

	wxBoxSizer* bSizer143112;
	bSizer143112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText323112 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _T("Lon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323112->Wrap( -1 );
	bSizer143112->Add( m_staticText323112, 0, wxALL, 5 );

	m_Lon1_d = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer143112->Add( m_Lon1_d, 0, wxALL, 5 );

	m_staticText333112 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, deg, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText333112->Wrap( -1 );
	bSizer143112->Add( m_staticText333112, 0, wxALL, 5 );

	m_Lon1_m = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer143112->Add( m_Lon1_m, 0, wxALL, 5 );

	m_staticText11412 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _T("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11412->Wrap( -1 );
	bSizer143112->Add( m_staticText11412, 0, wxALL, 5 );

	m_Lon1_s = new wxTextCtrl( sbSizer72->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer143112->Add( m_Lon1_s, 0, wxALL, 5 );

	m_staticText11512 = new wxStaticText( sbSizer72->GetStaticBox(), wxID_ANY, _T("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11512->Wrap( -1 );
	bSizer143112->Add( m_staticText11512, 0, wxALL, 5 );

	wxString m_Lon1_EWChoices[] = { _("E"), _("W") };
	int m_Lon1_EWNChoices = sizeof( m_Lon1_EWChoices ) / sizeof( wxString );
	m_Lon1_EW = new wxChoice( sbSizer72->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lon1_EWNChoices, m_Lon1_EWChoices, 0 );
	m_Lon1_EW->SetSelection( 0 );
	bSizer143112->Add( m_Lon1_EW, 0, wxALL, 5 );

	//
	// end m_panelDegreesMinutesSeconds
	//
	bSizer13212->Add( bSizer143112, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	sbSizer72->Add( bSizer13212, 0, 0, 5 );


	bSizer401->Add( sbSizer72, 0, 0, 5 );


	m_panelDegreesMinutesSeconds->SetSizer( bSizer401 );
	m_panelDegreesMinutesSeconds->Layout();
	bSizer401->Fit( m_panelDegreesMinutesSeconds );

	degline = deg + _T(" ' \"");
	m_wxNotebook234->AddPage( m_panelDegreesMinutesSeconds, degline);
	
	bSizer35->Add(m_wxNotebook234, 0, wxALL | wxEXPAND, 5);

	wxBoxSizer* bSizer4811;
	bSizer4811 = new wxBoxSizer( wxHORIZONTAL );

	m_button811 = new wxButton( m_panel14, wxID_ANY, _("Convert"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4811->Add( m_button811, 0, wxALL, 5 );

	m_buttonClose = new wxButton(m_panel14, wxID_ANY, _("Close"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer4811->Add(m_buttonClose, 0, wxALL, 5);

	bSizer35->Add( bSizer4811, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	

	m_panel14->SetSizer( bSizer35 );
	m_panel14->Layout();
	bSizer35->Fit( m_panel14 );
	bSizer40->Add( m_panel14, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer40 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MyDialog5::OnCloseDegreeDlg));
	m_wxNotebook234->Connect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( MyDialog5::OnNoteBookFit ), NULL, this );
	m_button811->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialog5::OnConvertToDegree ), NULL, this );
	m_buttonClose->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyDialog5::OnClose), NULL, this);

}

MyDialog5::~MyDialog5()
{
	// Disconnect Events
	this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MyDialog5::OnCloseDegreeDlg));
	m_wxNotebook234->Disconnect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( MyDialog5::OnNoteBookFit ), NULL, this );
	m_button811->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialog5::OnConvertToDegree ), NULL, this );
	m_buttonClose->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyDialog5::OnClose), NULL, this);


}

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "calculatorgui.h"

///////////////////////////////////////////////////////////////////////////

#include "calculatorgui.h"

///////////////////////////////////////////////////////////////////////////

FunDlgDef::FunDlgDef(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxSize(-1, -1), wxSize(-1, -1));

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer(wxVERTICAL);

	m_scrolledWindow1 = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL | wxVSCROLL);
	m_scrolledWindow1->SetScrollRate(5, 5);
	m_scrolledWindow1->SetMinSize(wxSize(500, 600));
	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer(wxVERTICAL);

	wxStaticBoxSizer* sbSizer11;
	sbSizer11 = new wxStaticBoxSizer(new wxStaticBox(m_scrolledWindow1, wxID_ANY, _("Select Function Category")), wxHORIZONTAL);

	wxString m_Function_CategoriesChoices[] = { _("All") };
	int m_Function_CategoriesNChoices = sizeof(m_Function_CategoriesChoices) / sizeof(wxString);
	m_Function_Categories = new wxChoice(sbSizer11->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Function_CategoriesNChoices, m_Function_CategoriesChoices, 0);
	m_Function_Categories->SetSelection(0);
	sbSizer11->Add(m_Function_Categories, 1, wxALL, 5);


	bSizer26->Add(sbSizer11, 0, wxEXPAND, 5);

	wxStaticBoxSizer* sbSizer12;
	sbSizer12 = new wxStaticBoxSizer(new wxStaticBox(m_scrolledWindow1, wxID_ANY, _("Select Function")), wxHORIZONTAL);

	wxString m_Function_DropdownChoices[] = { _("All") };
	int m_Function_DropdownNChoices = sizeof(m_Function_DropdownChoices) / sizeof(wxString);
	m_Function_Dropdown = new wxChoice(sbSizer12->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Function_DropdownNChoices, m_Function_DropdownChoices, 0);
	m_Function_Dropdown->SetSelection(1);
	sbSizer12->Add(m_Function_Dropdown, 1, wxALL, 5);


	bSizer26->Add(sbSizer12, 0, wxEXPAND, 5);

	wxStaticBoxSizer* sbSizer14;
	sbSizer14 = new wxStaticBoxSizer(new wxStaticBox(m_scrolledWindow1, wxID_ANY, _("Function And Description")), wxVERTICAL);

	m_textExtraDescription = new wxTextCtrl(sbSizer14->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);
	m_textExtraDescription->Hide();

	sbSizer14->Add(m_textExtraDescription, 0, wxALL | wxEXPAND, 5);

	m_panel101 = new wxPanel(sbSizer14->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer113;
	bSizer113 = new wxBoxSizer(wxVERTICAL);

	m_Function = new wxStaticText(m_panel101, wxID_ANY, _("ere"), wxDefaultPosition, wxDefaultSize, 0);
	m_Function->Wrap(400);
	bSizer113->Add(m_Function, 0, wxALL, 5);

	m_Description = new wxStaticText(m_panel101, wxID_ANY, _("Description"), wxDefaultPosition, wxDefaultSize, 0);
	m_Description->Wrap(400);
	bSizer113->Add(m_Description, 0, wxALL, 5);


	m_panel101->SetSizer(bSizer113);
	m_panel101->Layout();
	bSizer113->Fit(m_panel101);
	sbSizer14->Add(m_panel101, 0, wxALL, 5);


	bSizer26->Add(sbSizer14, 0, wxEXPAND, 5);

	wxStaticBoxSizer* sbSizer13;
	sbSizer13 = new wxStaticBoxSizer(new wxStaticBox(m_scrolledWindow1, wxID_ANY, _("Input Parameters")), wxVERTICAL);

	m_panel = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer = new wxBoxSizer(wxHORIZONTAL);

	Value = new wxTextCtrl(m_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer->Add(Value, 0, wxALL, 5);

	Parameter = new wxStaticText(m_panel, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter->Wrap(-1);
	bSizer->Add(Parameter, 0, wxALL, 5);

	wxArrayString UnitsChoices;
	Units = new wxChoice(m_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, UnitsChoices, 0);
	Units->SetSelection(0);
	bSizer->Add(Units, 0, wxALL, 5);


	m_panel->SetSizer(bSizer);
	m_panel->Layout();
	bSizer->Fit(m_panel);
	sbSizer13->Add(m_panel, 0, wxALL, 5);

	m_panel1 = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer1 = new wxBoxSizer(wxHORIZONTAL);

	Value1 = new wxTextCtrl(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer1->Add(Value1, 0, wxALL, 5);

	Parameter1 = new wxStaticText(m_panel1, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter1->Wrap(-1);
	bSizer1->Add(Parameter1, 0, wxALL, 5);

	wxArrayString Units1Choices;
	Units1 = new wxChoice(m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, Units1Choices, 0);
	Units1->SetSelection(0);
	bSizer1->Add(Units1, 0, wxALL, 5);


	m_panel1->SetSizer(bSizer1);
	m_panel1->Layout();
	bSizer1->Fit(m_panel1);
	sbSizer13->Add(m_panel1, 1, wxEXPAND | wxALL, 5);

	m_panel2 = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer2 = new wxBoxSizer(wxHORIZONTAL);

	Value2 = new wxTextCtrl(m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer2->Add(Value2, 0, wxALL, 5);

	Parameter2 = new wxStaticText(m_panel2, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter2->Wrap(-1);
	bSizer2->Add(Parameter2, 0, wxALL, 5);

	wxArrayString Units2Choices;
	Units2 = new wxChoice(m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, Units2Choices, 0);
	Units2->SetSelection(0);
	bSizer2->Add(Units2, 0, wxALL, 5);


	m_panel2->SetSizer(bSizer2);
	m_panel2->Layout();
	bSizer2->Fit(m_panel2);
	sbSizer13->Add(m_panel2, 1, wxEXPAND | wxALL, 5);

	m_panel3 = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer3 = new wxBoxSizer(wxHORIZONTAL);

	Value3 = new wxTextCtrl(m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer3->Add(Value3, 0, wxALL, 5);

	Parameter3 = new wxStaticText(m_panel3, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter3->Wrap(-1);
	bSizer3->Add(Parameter3, 0, wxALL, 5);

	wxArrayString Units3Choices;
	Units3 = new wxChoice(m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, Units3Choices, 0);
	Units3->SetSelection(0);
	bSizer3->Add(Units3, 0, wxALL, 5);


	m_panel3->SetSizer(bSizer3);
	m_panel3->Layout();
	bSizer3->Fit(m_panel3);
	sbSizer13->Add(m_panel3, 1, wxEXPAND | wxALL, 5);

	m_panel4 = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer4 = new wxBoxSizer(wxHORIZONTAL);

	Value4 = new wxTextCtrl(m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer4->Add(Value4, 0, wxALL, 5);

	Parameter4 = new wxStaticText(m_panel4, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter4->Wrap(-1);
	bSizer4->Add(Parameter4, 0, wxALL, 5);

	wxArrayString Units4Choices;
	Units4 = new wxChoice(m_panel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, Units4Choices, 0);
	Units4->SetSelection(0);
	bSizer4->Add(Units4, 0, wxALL, 5);


	m_panel4->SetSizer(bSizer4);
	m_panel4->Layout();
	bSizer4->Fit(m_panel4);
	sbSizer13->Add(m_panel4, 1, wxEXPAND | wxALL, 5);

	m_panel5 = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer5 = new wxBoxSizer(wxHORIZONTAL);

	Value5 = new wxTextCtrl(m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer5->Add(Value5, 0, wxALL, 5);

	Parameter5 = new wxStaticText(m_panel5, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter5->Wrap(-1);
	bSizer5->Add(Parameter5, 0, wxALL, 5);

	wxArrayString Units5Choices;
	Units5 = new wxChoice(m_panel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, Units5Choices, 0);
	Units5->SetSelection(0);
	bSizer5->Add(Units5, 0, wxALL, 5);


	m_panel5->SetSizer(bSizer5);
	m_panel5->Layout();
	bSizer5->Fit(m_panel5);
	sbSizer13->Add(m_panel5, 1, wxEXPAND | wxALL, 5);

	m_panel6 = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer6 = new wxBoxSizer(wxHORIZONTAL);

	Value6 = new wxTextCtrl(m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer6->Add(Value6, 0, wxALL, 5);

	Parameter6 = new wxStaticText(m_panel6, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter6->Wrap(-1);
	bSizer6->Add(Parameter6, 0, wxALL, 5);

	wxArrayString Units6Choices;
	Units6 = new wxChoice(m_panel6, wxID_ANY, wxDefaultPosition, wxDefaultSize, Units6Choices, 0);
	Units6->SetSelection(0);
	bSizer6->Add(Units6, 0, wxALL, 5);


	m_panel6->SetSizer(bSizer6);
	m_panel6->Layout();
	bSizer6->Fit(m_panel6);
	sbSizer13->Add(m_panel6, 1, wxEXPAND | wxALL, 5);

	m_panel7 = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer8 = new wxBoxSizer(wxHORIZONTAL);

	Value7 = new wxTextCtrl(m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer8->Add(Value7, 0, wxALL, 5);

	Parameter7 = new wxStaticText(m_panel7, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter7->Wrap(-1);
	bSizer8->Add(Parameter7, 0, wxALL, 5);

	wxArrayString Units7Choices;
	Units7 = new wxChoice(m_panel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, Units7Choices, 0);
	Units7->SetSelection(0);
	bSizer8->Add(Units7, 0, wxALL, 5);


	m_panel7->SetSizer(bSizer8);
	m_panel7->Layout();
	bSizer8->Fit(m_panel7);
	sbSizer13->Add(m_panel7, 1, wxEXPAND | wxALL, 5);

	m_panel8 = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer9 = new wxBoxSizer(wxHORIZONTAL);

	Value8 = new wxTextCtrl(m_panel8, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer9->Add(Value8, 0, wxALL, 5);

	Parameter8 = new wxStaticText(m_panel8, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter8->Wrap(-1);
	bSizer9->Add(Parameter8, 0, wxALL, 5);

	wxArrayString Units8Choices;
	Units8 = new wxChoice(m_panel8, wxID_ANY, wxDefaultPosition, wxDefaultSize, Units8Choices, 0);
	Units8->SetSelection(0);
	bSizer9->Add(Units8, 0, wxALL, 5);


	m_panel8->SetSizer(bSizer9);
	m_panel8->Layout();
	bSizer9->Fit(m_panel8);
	sbSizer13->Add(m_panel8, 1, wxEXPAND | wxALL, 5);

	m_panel9 = new wxPanel(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer10 = new wxBoxSizer(wxHORIZONTAL);

	Value9 = new wxTextCtrl(m_panel9, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer10->Add(Value9, 0, wxALL, 5);

	Parameter9 = new wxStaticText(m_panel9, wxID_ANY, _("Parameter"), wxDefaultPosition, wxDefaultSize, 0);
	Parameter9->Wrap(-1);
	bSizer10->Add(Parameter9, 0, wxALL, 5);

	wxArrayString Units9Choices;
	Units9 = new wxChoice(m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, Units9Choices, 0);
	Units9->SetSelection(0);
	bSizer10->Add(Units9, 0, wxALL, 5);


	m_panel9->SetSizer(bSizer10);
	m_panel9->Layout();
	bSizer10->Fit(m_panel9);
	sbSizer13->Add(m_panel9, 1, wxEXPAND | wxALL, 5);


	bSizer26->Add(sbSizer13, 1, wxEXPAND, 5);

	wxStaticBoxSizer* sbSizer15;
	sbSizer15 = new wxStaticBoxSizer(new wxStaticBox(m_scrolledWindow1, wxID_ANY, _("Function Result Select Units")), wxVERTICAL);

	m_panel100 = new wxPanel(sbSizer15->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer(wxHORIZONTAL);

	m_Function_Result = new wxTextCtrl(m_panel100, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	m_Function_Result->SetBackgroundColour(wxColour(240, 240, 240));

	bSizer64->Add(m_Function_Result, 1, wxALL | wxEXPAND, 5);

	m_Output_Parameter = new wxStaticText(m_panel100, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_Output_Parameter->Wrap(-1);
	bSizer64->Add(m_Output_Parameter, 0, wxALL, 5);

	wxArrayString m_Output_Parameter_UnitCChoices;
	m_Output_Parameter_UnitC = new wxChoice(m_panel100, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Output_Parameter_UnitCChoices, 0);
	m_Output_Parameter_UnitC->SetSelection(0);
	bSizer64->Add(m_Output_Parameter_UnitC, 0, wxALL, 5);


	m_panel100->SetSizer(bSizer64);
	m_panel100->Layout();
	bSizer64->Fit(m_panel100);
	sbSizer15->Add(m_panel100, 0, wxALL | wxEXPAND, 5);


	bSizer26->Add(sbSizer15, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer(wxHORIZONTAL);

	m_button7 = new wxButton(m_scrolledWindow1, wxID_ANY, _("Calculate"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer39->Add(m_button7, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_button10 = new wxButton(m_scrolledWindow1, wxID_ANY, _("Close"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer39->Add(m_button10, 0, wxALL, 5);

	m_checkBox8 = new wxCheckBox(m_scrolledWindow1, wxID_ANY, _("Description"), wxDefaultPosition, wxDefaultSize, 0);
	m_checkBox8->SetValue(true);
	bSizer39->Add(m_checkBox8, 0, wxALL, 5);


	bSizer26->Add(bSizer39, 0, wxEXPAND, 5);


	m_scrolledWindow1->SetSizer(bSizer26);
	m_scrolledWindow1->Layout();
	bSizer26->Fit(m_scrolledWindow1);
	bSizer7->Add(m_scrolledWindow1, 1,  wxALL | wxBOTTOM | wxEXPAND | wxTOP, 5);


	this->SetSizer(bSizer7);
	this->Layout();
	bSizer7->Fit(this);

	this->Centre(wxBOTH);

	// Connect Events	
	m_Function_Categories->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(FunDlgDef::OnCategorySelect), NULL, this);
	m_Function_Dropdown->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(FunDlgDef::OnItemSelect), NULL, this);
	m_Output_Parameter_UnitC->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(FunDlgDef::OnOutputParameterChange), NULL, this);
	m_button7->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FunDlgDef::OnExtraCalculate), NULL, this);
	m_button10->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FunDlgDef::OnClose), NULL, this);
	m_checkBox8->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FunDlgDef::OnToggle), NULL, this);
}

FunDlgDef::~FunDlgDef()
{
	// Disconnect Events
	m_Function_Categories->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(FunDlgDef::OnCategorySelect), NULL, this);
	m_Function_Dropdown->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(FunDlgDef::OnItemSelect), NULL, this);
	m_Output_Parameter_UnitC->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(FunDlgDef::OnOutputParameterChange), NULL, this);
	m_button7->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FunDlgDef::OnExtraCalculate), NULL, this);
	m_button10->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FunDlgDef::OnClose), NULL, this);
	m_checkBox8->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FunDlgDef::OnToggle), NULL, this);

}
