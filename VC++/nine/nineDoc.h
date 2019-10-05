// nineDoc.h : interface of the CNineDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_NINEDOC_H__7D0C4F43_D143_4BD4_9BEC_DEAA8ED69334__INCLUDED_)
#define AFX_NINEDOC_H__7D0C4F43_D143_4BD4_9BEC_DEAA8ED69334__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CNineDoc : public CDocument
{
protected: // create from serialization only
	CNineDoc();
	DECLARE_DYNCREATE(CNineDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNineDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CNineDoc();
	CString StringData;
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CNineDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NINEDOC_H__7D0C4F43_D143_4BD4_9BEC_DEAA8ED69334__INCLUDED_)
