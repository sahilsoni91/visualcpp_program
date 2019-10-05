// sevenDoc.cpp : implementation of the CSevenDoc class
//

#include "stdafx.h"
#include "seven.h"

#include "sevenDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSevenDoc

IMPLEMENT_DYNCREATE(CSevenDoc, CDocument)

BEGIN_MESSAGE_MAP(CSevenDoc, CDocument)
	//{{AFX_MSG_MAP(CSevenDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSevenDoc construction/destruction

CSevenDoc::CSevenDoc()
{
	// TODO: add one-time construction code here
	StringData="";
}

CSevenDoc::~CSevenDoc()
{
}

BOOL CSevenDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSevenDoc serialization

void CSevenDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSevenDoc diagnostics

#ifdef _DEBUG
void CSevenDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSevenDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSevenDoc commands
