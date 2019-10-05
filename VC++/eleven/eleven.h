#if !defined(AFX_ELEVEN_H__6E25622C_F30C_459E_85F2_ABA02E9D96CB__INCLUDED_)
#define AFX_ELEVEN_H__6E25622C_F30C_459E_85F2_ABA02E9D96CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// eleven.h : main header file for ELEVEN.DLL

#if !defined( __AFXCTL_H__ )
	#error include 'afxctl.h' before including this file
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CElevenApp : See eleven.cpp for implementation.

class CElevenApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ELEVEN_H__6E25622C_F30C_459E_85F2_ABA02E9D96CB__INCLUDED)
