// nineDoc.cpp : implementation of the CNineDoc class
//

#include "stdafx.h"
#include "nine.h"

#include "nineDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNineDoc

IMPLEMENT_DYNCREATE(CNineDoc, CDocument)

BEGIN_MESSAGE_MAP(CNineDoc, CDocument)
	//{{AFX_MSG_MAP(CNineDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNineDoc construction/destruction

CNineDoc::CNineDoc()
{
	// TODO: add one-time construction code here
	StringData="";
}

CNineDoc::~CNineDoc()
{
}

BOOL CNineDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CNineDoc serialization

void CNineDoc::Serialize(CArchive& ar)
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
// CNineDoc diagnostics

#ifdef _DEBUG
void CNineDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CNineDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CNineDoc commands
