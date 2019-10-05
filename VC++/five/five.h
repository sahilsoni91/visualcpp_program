// five.h : main header file for the FIVE application
//

#if !defined(AFX_FIVE_H__C85EC598_FEF3_441D_A8FA_80C026B07FA5__INCLUDED_)
#define AFX_FIVE_H__C85EC598_FEF3_441D_A8FA_80C026B07FA5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFiveApp:
// See five.cpp for the implementation of this class
//

class CFiveApp : public CWinApp
{
public:
	CFiveApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFiveApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CFiveApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIVE_H__C85EC598_FEF3_441D_A8FA_80C026B07FA5__INCLUDED_)
