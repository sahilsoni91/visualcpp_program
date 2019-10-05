// eighttView.h : interface of the CEighttView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EIGHTTVIEW_H__14DA30EF_1520_4BCB_8200_80E3374B6EA3__INCLUDED_)
#define AFX_EIGHTTVIEW_H__14DA30EF_1520_4BCB_8200_80E3374B6EA3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEighttView : public CView
{
protected: // create from serialization only
	CEighttView();
	DECLARE_DYNCREATE(CEighttView)
	CPoint CaretPosition;
	boolean CaretCreated;
	int x,y;
// Attributes
public:
	CEighttDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEighttView)
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
	virtual ~CEighttView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEighttView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in eighttView.cpp
inline CEighttDoc* CEighttView::GetDocument()
   { return (CEighttDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EIGHTTVIEW_H__14DA30EF_1520_4BCB_8200_80E3374B6EA3__INCLUDED_)
