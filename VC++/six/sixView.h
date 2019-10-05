// sixView.h : interface of the CSixView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SIXVIEW_H__BA20449E_AC61_4612_AEE1_A229644D7643__INCLUDED_)
#define AFX_SIXVIEW_H__BA20449E_AC61_4612_AEE1_A229644D7643__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSixView : public CView
{
protected: // create from serialization only
	CSixView();
	DECLARE_DYNCREATE(CSixView)

// Attributes
public:
	CSixDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSixView)
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
	virtual ~CSixView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSixView)
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in sixView.cpp
inline CSixDoc* CSixView::GetDocument()
   { return (CSixDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SIXVIEW_H__BA20449E_AC61_4612_AEE1_A229644D7643__INCLUDED_)
