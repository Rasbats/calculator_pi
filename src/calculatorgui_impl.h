/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  ROUTE Plugin
 * Author:   SaltyPaws
 *
 ***************************************************************************
 *   Copyright (C) 2012 by Brazil BrokeTail                                *
 *   $EMAIL$                                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 */

#ifndef _CALCULATORGUI_IMPL_H_
#define _CALCULATORGUI_IMPL_H_

#include "VariableFactory.h"
#include "muParser.h" //Muparser needs to be included before wxidgets, otherwhise a linker conflict will occur.
#include "muParserError.h"


//#include <locale.h> Dont touch locale, causes serious errors in OpenCPN.

#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

//#include<locale.h> //required for thousands separator funcion
#if defined (_WIN32) || defined (_WIN64) || defined (__WIN32__) || defined (__TOS_WIN__) || defined (__WINDOWS__) || defined (_WIN64)
    #include "calculatorgui.h"
#else
    #include "calculatorgui.h"
#endif

#include "calculator_pi.h"
#include "functions.h"
#include "units_conversion.h"

using namespace std;
using namespace mu;

class calculator_pi;
class Dlg;

class CfgDlg : public CfgDlgDef
{
public:
      CfgDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Calculator preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxRESIZE_BORDER );
};

class HlpDlg : public HlpDlgDef
{
public:
      HlpDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Help!!!!"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxRESIZE_BORDER );
};

class DegreeDlg : public MyDialog5
{
public:
	DegreeDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Degree Conversions"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxCAPTION | wxDEFAULT_DIALOG_STYLE | wxMAXIMIZE_BOX | wxRESIZE_BORDER);

	void OnConvertToDegree(wxCommandEvent& event);
	void OnNoteBookFit(wxBookCtrlEvent& event);
	void OnCloseDegreeDlg(wxCloseEvent& event);
	void OnClose(wxCommandEvent& event);
	Dlg *Plugin_Dialog;

private:

};

class FunDlg : public FunDlgDef
{
    public:
        FunDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Extra Functions"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxRESIZE_BORDER );
        CFormula testf;
        Units_Conversion Units_conv;
        void OnClose( wxCommandEvent& event );
        void OnToggle( wxCommandEvent& event );		
		void OnOutputParameterChange(wxCommandEvent& event);
        void OnExtraCalculate( wxCommandEvent& event );
        void OnItemSelect( wxCommandEvent& event );
        void OnItemSelect (void);
        void LoadFunctions(wxString Category, wxString );
        void LoadCategories(void);
        void PopulatePuldown(wxString& Input_Units, wxChoice* Pulldown, wxPanel *Panel);
        void OnCategorySelect( wxCommandEvent& event );
        wxString Unit_Conversion(wxString Input_Unit, wxString Output_Unit, wxString Var);
        Dlg *Plugin_Dialog;
    private:

};

class Dlg : public DlgDef
{
public:
	Dlg(wxWindow *parent, calculator_pi *ppi);
	~Dlg();

	    calculator_pi *pPlugIn;
		mu::Parser MuParser; //MuParser class.  Here all the functions and variables are stored.

        void OnCalculate( wxCommandEvent& event );
		void OnClear(wxCommandEvent& event);
        wxString OnCalculate( void );
        void OnHelp( wxCommandEvent& event );
        void OnHelp( void );
        #ifdef DEBUG
        void OnTest( wxMouseEvent& event );
        void OnTest(wxCommandEvent& event);
        void OnTest( wxListEvent& event );
        #endif // DEBUG	
		
		void OnCalculateDegrees(void);
		void OnClose(wxCloseEvent& event);
        void OnFunction( wxCommandEvent& event );
        void OnFunction ( void );
        void OnFunctionCalc ( void );
        void OnToggle( wxCommandEvent& event );
        void key_shortcut(wxKeyEvent& event);
        void OnKey (wxKeyEvent& event);
        void OnItem( wxListEvent& event );
        void OnHistoryPulldown ( wxCommandEvent& event );
        void down(void);
        void up (void);
        std::string WxString2StdString(wxString wxString_in);

        calculator_pi *plugin;

        void SetMaxResults          (int x){Max_Results = x;};
        void setm_bshowhelpB        (bool x){m_bshowhelpB = x; };       
        void setm_bCalculateB       (bool x){m_bCalculateB = x;};

		void setm_bshowhistory      (bool x){m_bshowhistory = x;};
		void setm_bshowhistoryB     (bool x){m_bshowhistoryB = x;};
		void setm_bshowhistoryP     (bool x){m_bshowhistoryP = x;};


        void setm_bshowfunction     (bool x){m_bshowFunction = x;};      
        //void setm_bcapturehidden    (bool x){m_bcapturehidden = x;};
        void setm_blogresults       (bool x){m_blogresults = x;};

        void setm_iCalc_Reporting   (int x){m_iCalc_Reporting = x;};
        
        void setm_bshowfunction_Open_CPN_BAR (bool x){m_bshowfunction_Open_CPN_BAR = x;};

        void set_Buttons (void);
        void set_History(void);

        wxString Report_Value(double in_Value, int in_mode);
        wxString double2wxT(double in_Value);
        wxString ThousandSeparator(wxString Number_in);
		
		FunDlg            *m_pFunctiondialog;
		DegreeDlg         *m_pDegreeDialog;

private:
        wxPoint xy;
        wxSize  wh;
        int i_counter;
        int item_counter;
        long itemIndex;
        long HistoryPulldownitemIndex;
        bool MemoryFull;
        int Max_Results;
        bool              m_bshowhelpB;
        bool              m_bshowhistoryB;
        bool              m_bCalculateB;
        bool              m_bshowFunction;
        bool              m_bshowhistory;
        //bool              m_bcapturehidden;
        bool              m_blogresults;

        int               m_iCalc_Reporting;
        bool              m_bshowhistoryP;
        bool              m_bshowfunction_Open_CPN_BAR;

        HlpDlg            *m_pHelpdialog;
		
        

};




#endif
