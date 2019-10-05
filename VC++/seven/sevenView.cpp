// sevenView.cpp : implementation of the CSevenView class
//

#include "stdafx.h"
#include "seven.h"

#include "sevenDoc.h"
#include "sevenView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSevenView

IMPLEMENT_DYNCREATE(CSevenView, CView)

BEGIN_MESSAGE_MAP(CSevenView, CView)
	//{{AFX_MSG_MAP(CSevenView)
	ON_WM_CHAR()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSevenView construction/destruction

CSevenView::CSevenView()
{
	// TODO: add construction code here

}

CSevenView::~CSevenView()
{
}

BOOL CSevenView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSevenView drawing

void CSevenView::OnDraw(CDC* pDC)
{
	CSevenDoc* pDoc = GetDocument();
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
		pDC->TextOut(0,0,pDoc->StringData);
		CSize size=pDC->GetTextExtent(pDoc->StringData);
		HideCaret();
		CaretPosition.x=size.cx;
		SetCaretPos(CaretPosition);
		ShowCaret();
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSevenView printing

BOOL CSevenView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSevenView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSevenView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CSevenView diagnostics

#ifdef _DEBUG
void CSevenView::AssertValid() const
{
	CView::AssertValid();
}

void CSevenView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSevenDoc* CSevenView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSevenDoc)));
	return (CSevenDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSevenView message handlers

void CSevenView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	CSevenDoc *pDoc=GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->StringData+=nChar;
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);
}
