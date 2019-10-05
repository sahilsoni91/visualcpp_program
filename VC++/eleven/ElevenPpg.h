#if !defined(AFX_ELEVENPPG_H__CFF186E8_94F4_4B17_9051_AA98F99A1EF5__INCLUDED_)
#define AFX_ELEVENPPG_H__CFF186E8_94F4_4B17_9051_AA98F99A1EF5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ElevenPpg.h : Declaration of the CElevenPropPage property page class.

////////////////////////////////////////////////////////////////////////////
// CElevenPropPage : See ElevenPpg.cpp.cpp for implementation.

class CElevenPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CElevenPropPage)
	DECLARE_OLECREATE_EX(CElevenPropPage)

// Constructor
public:
	CElevenPropPage();

// Dialog Data
	//{{AFX_DATA(CElevenPropPage)
	enum { IDD = IDD_PROPPAGE_ELEVEN };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	//{{AFX_MSG(CElevenPropPage)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ELEVENPPG_H__CFF186E8_94F4_4B17_9051_AA98F99A1EF5__INCLUDED)
