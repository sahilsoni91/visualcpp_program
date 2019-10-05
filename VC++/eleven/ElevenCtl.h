#if !defined(AFX_ELEVENCTL_H__CBFB8DEE_0ADB_418B_93B0_4CFAB003D218__INCLUDED_)
#define AFX_ELEVENCTL_H__CBFB8DEE_0ADB_418B_93B0_4CFAB003D218__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ElevenCtl.h : Declaration of the CElevenCtrl ActiveX Control class.

/////////////////////////////////////////////////////////////////////////////
// CElevenCtrl : See ElevenCtl.cpp for implementation.

class CElevenCtrl : public COleControl
{
	DECLARE_DYNCREATE(CElevenCtrl)

// Constructor
public:
	CElevenCtrl();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CElevenCtrl)
	public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	//}}AFX_VIRTUAL

// Implementation
protected:
	~CElevenCtrl();
	CRect box1;
	CRect box2;
	CRect box3;
	CRect box4;
	boolean fill1;
	boolean fill2;
	boolean fill3;
	boolean fill4;
	DECLARE_OLECREATE_EX(CElevenCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CElevenCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CElevenCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CElevenCtrl)		// Type name and misc status

// Message maps
	//{{AFX_MSG(CElevenCtrl)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	//{{AFX_DISPATCH(CElevenCtrl)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	//{{AFX_EVENT(CElevenCtrl)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_EVENT
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	//{{AFX_DISP_ID(CElevenCtrl)
		// NOTE: ClassWizard will add and remove enumeration elements here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DISP_ID
	};
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ELEVENCTL_H__CBFB8DEE_0ADB_418B_93B0_4CFAB003D218__INCLUDED)
