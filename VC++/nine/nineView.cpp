// nineView.cpp : implementation of the CNineView class
//

#include "stdafx.h"
#include "nine.h"

#include "nineDoc.h"
#include "nineView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNineView

IMPLEMENT_DYNCREATE(CNineView, CView)

BEGIN_MESSAGE_MAP(CNineView, CView)
	//{{AFX_MSG_MAP(CNineView)
	ON_COMMAND(ID_MYMENU_PRINTWELCOME, OnMymenuPrintwelcome)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNineView construction/destruction

CNineView::CNineView()
{
	// TODO: add construction code here

}

CNineView::~CNineView()
{
}

BOOL CNineView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CNineView drawing

void CNineView::OnDraw(CDC* pDC)
{
	CNineDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->TextOut(0,0,pDoc->StringData);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CNineView printing

BOOL CNineView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CNineView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CNineView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CNineView diagnostics

#ifdef _DEBUG
void CNineView::AssertValid() const
{
	CView::AssertValid();
}

void CNineView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CNineDoc* CNineView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CNineDoc)));
	return (CNineDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CNineView message handlers

void CNineView::OnMymenuPrintwelcome() 
{
	// TODO: Add your command handler code here
	CNineDoc* pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->StringData="Welcome To My Menu!!!";
	Invalidate();
}
