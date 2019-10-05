// seven.h : main header file for the SEVEN application
//

#if !defined(AFX_SEVEN_H__CCF5A168_15BC_4C50_A1F2_394B4D8E9938__INCLUDED_)
#define AFX_SEVEN_H__CCF5A168_15BC_4C50_A1F2_394B4D8E9938__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSevenApp:
// See seven.cpp for the implementation of this class
//

class CSevenApp : public CWinApp
{
public:
	CSevenApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSevenApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSevenApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SEVEN_H__CCF5A168_15BC_4C50_A1F2_394B4D8E9938__INCLUDED_)
