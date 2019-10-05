// fiveView.h : interface of the CFiveView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FIVEVIEW_H__3315F5AE_654E_46FE_8301_E7BA66665B87__INCLUDED_)
#define AFX_FIVEVIEW_H__3315F5AE_654E_46FE_8301_E7BA66665B87__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFiveView : public CView
{
protected: // create from serialization only
	CFiveView();
	DECLARE_DYNCREATE(CFiveView)

// Attributes
public:
	CFiveDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFiveView)
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
	virtual ~CFiveView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFiveView)
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in fiveView.cpp
inline CFiveDoc* CFiveView::GetDocument()
   { return (CFiveDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIVEVIEW_H__3315F5AE_654E_46FE_8301_E7BA66665B87__INCLUDED_)
