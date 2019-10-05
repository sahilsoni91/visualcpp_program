// fourView.cpp : implementation of the CFourView class
//

#include "stdafx.h"
#include "four.h"

#include "fourDoc.h"
#include "fourView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFourView

IMPLEMENT_DYNCREATE(CFourView, CView)

BEGIN_MESSAGE_MAP(CFourView, CView)
	//{{AFX_MSG_MAP(CFourView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFourView construction/destruction

CFourView::CFourView()
{
	// TODO: add construction code here

}

CFourView::~CFourView()
{
}

BOOL CFourView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CFourView drawing

void CFourView::OnDraw(CDC* pDC)
{
	CString a="Welcome To The World Of Visual C++";
	CFourDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->TextOut(0,0,a);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CFourView printing

BOOL CFourView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CFourView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CFourView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CFourView diagnostics

#ifdef _DEBUG
void CFourView::AssertValid() const
{
	CView::AssertValid();
}

void CFourView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFourDoc* CFourView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFourDoc)));
	return (CFourDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFourView message handlers
