// fiveDoc.h : interface of the CFiveDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FIVEDOC_H__7B5043AD_4D1B_438E_86B6_0154FF5A4174__INCLUDED_)
#define AFX_FIVEDOC_H__7B5043AD_4D1B_438E_86B6_0154FF5A4174__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFiveDoc : public CDocument
{
protected: // create from serialization only
	CFiveDoc();
	DECLARE_DYNCREATE(CFiveDoc)
	CString StringData;
// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFiveDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFiveDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFiveDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIVEDOC_H__7B5043AD_4D1B_438E_86B6_0154FF5A4174__INCLUDED_)
