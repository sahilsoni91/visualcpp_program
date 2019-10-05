// sixView.cpp : implementation of the CSixView class
//

#include "stdafx.h"
#include "six.h"

#include "sixDoc.h"
#include "sixView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSixView

IMPLEMENT_DYNCREATE(CSixView, CView)

BEGIN_MESSAGE_MAP(CSixView, CView)
	//{{AFX_MSG_MAP(CSixView)
	ON_WM_CHAR()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSixView construction/destruction

CSixView::CSixView()
{
	// TODO: add construction code here

}

CSixView::~CSixView()
{
}

BOOL CSixView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSixView drawing

void CSixView::OnDraw(CDC* pDC)
{
	CSixDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CRect rect;
	GetWindowRect(&rect);
	int x=rect.Width()/2;
	int y=rect.Height()/2;
	CSize size=pDC->GetTextExtent(pDoc->StringData);
	x-=size.cx/2;
	y-=size.cy/2;
	pDC->TextOut(x,y,pDoc->StringData);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSixView printing

BOOL CSixView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSixView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSixView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSixView diagnostics

#ifdef _DEBUG
void CSixView::AssertValid() const
{
	CView::AssertValid();
}

void CSixView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSixDoc* CSixView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSixDoc)));
	return (CSixDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSixView message handlers

void CSixView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	CSixDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->StringData+=nChar;
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}
