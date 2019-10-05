// four.h : main header file for the FOUR application
//

#if !defined(AFX_FOUR_H__1EEC7BF8_80C7_4E3A_A1DD_8EDEBBE60E29__INCLUDED_)
#define AFX_FOUR_H__1EEC7BF8_80C7_4E3A_A1DD_8EDEBBE60E29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFourApp:
// See four.cpp for the implementation of this class
//

class CFourApp : public CWinApp
{
public:
	CFourApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFourApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CFourApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FOUR_H__1EEC7BF8_80C7_4E3A_A1DD_8EDEBBE60E29__INCLUDED_)
