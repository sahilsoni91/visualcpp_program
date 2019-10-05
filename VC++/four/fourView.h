// fourView.h : interface of the CFourView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FOURVIEW_H__CD0743BC_168D_4E7A_A9BB_47DE0F2CDD8A__INCLUDED_)
#define AFX_FOURVIEW_H__CD0743BC_168D_4E7A_A9BB_47DE0F2CDD8A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFourView : public CView
{
protected: // create from serialization only
	CFourView();
	DECLARE_DYNCREATE(CFourView)

// Attributes
public:
	CFourDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFourView)
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
	virtual ~CFourView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFourView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in fourView.cpp
inline CFourDoc* CFourView::GetDocument()
   { return (CFourDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FOURVIEW_H__CD0743BC_168D_4E7A_A9BB_47DE0F2CDD8A__INCLUDED_)
