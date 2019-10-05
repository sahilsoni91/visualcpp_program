// sevenDoc.h : interface of the CSevenDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SEVENDOC_H__EEA5AB87_E165_41AD_957C_84F491A30E13__INCLUDED_)
#define AFX_SEVENDOC_H__EEA5AB87_E165_41AD_957C_84F491A30E13__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSevenDoc : public CDocument
{
protected: // create from serialization only
	CSevenDoc();
	DECLARE_DYNCREATE(CSevenDoc)
	CString StringData;
// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSevenDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSevenDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSevenDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SEVENDOC_H__EEA5AB87_E165_41AD_957C_84F491A30E13__INCLUDED_)
