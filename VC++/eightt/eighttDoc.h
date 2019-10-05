// eighttDoc.h : interface of the CEighttDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EIGHTTDOC_H__DDB7507B_228D_4C04_9762_9A1D231D8AE4__INCLUDED_)
#define AFX_EIGHTTDOC_H__DDB7507B_228D_4C04_9762_9A1D231D8AE4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEighttDoc : public CDocument
{
protected: // create from serialization only
	CEighttDoc();
	DECLARE_DYNCREATE(CEighttDoc)
CString StringData;
// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEighttDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEighttDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEighttDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EIGHTTDOC_H__DDB7507B_228D_4C04_9762_9A1D231D8AE4__INCLUDED_)
