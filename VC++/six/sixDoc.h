// sixDoc.h : interface of the CSixDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SIXDOC_H__5C9A92E2_F5CC_440C_BB51_FF2056C7828B__INCLUDED_)
#define AFX_SIXDOC_H__5C9A92E2_F5CC_440C_BB51_FF2056C7828B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSixDoc : public CDocument
{
protected: // create from serialization only
	CSixDoc();
	DECLARE_DYNCREATE(CSixDoc);
	CString StringData;

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSixDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSixDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSixDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SIXDOC_H__5C9A92E2_F5CC_440C_BB51_FF2056C7828B__INCLUDED_)
