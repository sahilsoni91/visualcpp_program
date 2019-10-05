// nineView.h : interface of the CNineView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_NINEVIEW_H__0E64AAD2_B269_4E24_9F05_D998FF7FB216__INCLUDED_)
#define AFX_NINEVIEW_H__0E64AAD2_B269_4E24_9F05_D998FF7FB216__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CNineView : public CView
{
protected: // create from serialization only
	CNineView();
	DECLARE_DYNCREATE(CNineView)

// Attributes
public:
	CNineDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNineView)
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
	virtual ~CNineView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CNineView)
	afx_msg void OnMymenuPrintwelcome();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in nineView.cpp
inline CNineDoc* CNineView::GetDocument()
   { return (CNineDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NINEVIEW_H__0E64AAD2_B269_4E24_9F05_D998FF7FB216__INCLUDED_)
