// eighttView.cpp : implementation of the CEighttView class
//

#include "stdafx.h"
#include "eightt.h"

#include "eighttDoc.h"
#include "eighttView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEighttView

IMPLEMENT_DYNCREATE(CEighttView, CView)

BEGIN_MESSAGE_MAP(CEighttView, CView)
	//{{AFX_MSG_MAP(CEighttView)
	ON_WM_LBUTTONDOWN()
	ON_WM_CHAR()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEighttView construction/destruction

CEighttView::CEighttView()
{
	// TODO: add construction code here

}

CEighttView::~CEighttView()
{
}

BOOL CEighttView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEighttView drawing

void CEighttView::OnDraw(CDC* pDC)
{
	CEighttDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if(!CaretCreated)
	{
		TEXTMETRIC textmetric;
		pDC->GetTextMetrics(&textmetric);
		CreateSolidCaret(textmetric.tmAveCharWidth/8,textmetric.tmHeight);
		CaretPosition.x=CaretPosition.y=0;
		SetCaretPos(CaretPosition);
		ShowCaret();
		CaretCreated=true;
	}
	pDC->TextOut(x,y,pDoc->StringData);
	CSize size=pDC->GetTextExtent(pDoc->StringData);
	HideCaret();
	CaretPosition.x=x+size.cx;
	CaretPosition.y=y;
	SetCaretPos(CaretPosition);
	ShowCaret();
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CEighttView printing

BOOL CEighttView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CEighttView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CEighttView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CEighttView diagnostics

#ifdef _DEBUG
void CEighttView::AssertValid() const
{
	CView::AssertValid();
}

void CEighttView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEighttDoc* CEighttView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEighttDoc)));
	return (CEighttDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEighttView message handlers

void CEighttView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	x=point.x;
	y=point.y;
	CEighttDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->StringData.Empty();
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}

void CEighttView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	CEighttDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->StringData+=nChar;
	Invalidate();

	CView::OnChar(nChar, nRepCnt, nFlags);
}
