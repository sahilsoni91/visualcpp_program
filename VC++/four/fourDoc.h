// fourDoc.h : interface of the CFourDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FOURDOC_H__D070B2C6_09F9_479B_B78B_EC5329A15374__INCLUDED_)
#define AFX_FOURDOC_H__D070B2C6_09F9_479B_B78B_EC5329A15374__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFourDoc : public CDocument
{
protected: // create from serialization only
	CFourDoc();
	DECLARE_DYNCREATE(CFourDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFourDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFourDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFourDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FOURDOC_H__D070B2C6_09F9_479B_B78B_EC5329A15374__INCLUDED_)
