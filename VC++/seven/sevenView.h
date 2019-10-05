// sevenView.h : interface of the CSevenView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SEVENVIEW_H__29456B53_F59F_42BF_911D_F36FEC232EB5__INCLUDED_)
#define AFX_SEVENVIEW_H__29456B53_F59F_42BF_911D_F36FEC232EB5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSevenView : public CView
{
protected: // create from serialization only
	CSevenView();
	DECLARE_DYNCREATE(CSevenView)
	CPoint CaretPosition;
	boolean CaretCreated;
// Attributes
public:
	CSevenDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSevenView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSevenView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSevenView)
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in sevenView.cpp
inline CSevenDoc* CSevenView::GetDocument()
   { return (CSevenDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SEVENVIEW_H__29456B53_F59F_42BF_911D_F36FEC232EB5__INCLUDED_)
