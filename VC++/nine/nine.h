// nine.h : main header file for the NINE application
//

#if !defined(AFX_NINE_H__EDECC3F1_596E_43BE_A978_C1CF756C09EF__INCLUDED_)
#define AFX_NINE_H__EDECC3F1_596E_43BE_A978_C1CF756C09EF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CNineApp:
// See nine.cpp for the implementation of this class
//

class CNineApp : public CWinApp
{
public:
	CNineApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNineApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CNineApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NINE_H__EDECC3F1_596E_43BE_A978_C1CF756C09EF__INCLUDED_)
