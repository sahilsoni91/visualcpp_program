// fiveView.cpp : implementation of the CFiveView class
//

#include "stdafx.h"
#include "five.h"

#include "fiveDoc.h"
#include "fiveView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFiveView

IMPLEMENT_DYNCREATE(CFiveView, CView)

BEGIN_MESSAGE_MAP(CFiveView, CView)
	//{{AFX_MSG_MAP(CFiveView)
	ON_WM_CHAR()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFiveView construction/destruction

CFiveView::CFiveView()
{
	// TODO: add construction code here

}

CFiveView::~CFiveView()
{
}

BOOL CFiveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CFiveView drawing

void CFiveView::OnDraw(CDC* pDC)
{
	CFiveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->TextOut(0,0,pDoc->StringData);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CFiveView printing

BOOL CFiveView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CFiveView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CFiveView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CFiveView diagnostics

#ifdef _DEBUG
void CFiveView::AssertValid() const
{
	CView::AssertValid();
}

void CFiveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFiveDoc* CFiveView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFiveDoc)));
	return (CFiveDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFiveView message handlers

void CFiveView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	CFiveDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->StringData+=nChar;
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}
