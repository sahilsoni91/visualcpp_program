// ten.h : main header file for the TEN application
//

#if !defined(AFX_TEN_H__635A8416_C045_4BD1_A46C_4FF3D6C36947__INCLUDED_)
#define AFX_TEN_H__635A8416_C045_4BD1_A46C_4FF3D6C36947__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTenApp:
// See ten.cpp for the implementation of this class
//

class CTenApp : public CWinApp
{
public:
	CTenApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTenApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTenApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEN_H__635A8416_C045_4BD1_A46C_4FF3D6C36947__INCLUDED_)
