// sixDoc.cpp : implementation of the CSixDoc class
//

#include "stdafx.h"
#include "six.h"

#include "sixDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSixDoc

IMPLEMENT_DYNCREATE(CSixDoc, CDocument)

BEGIN_MESSAGE_MAP(CSixDoc, CDocument)
	//{{AFX_MSG_MAP(CSixDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSixDoc construction/destruction

CSixDoc::CSixDoc()
{
	// TODO: add one-time construction code here
	StringData="";
}

CSixDoc::~CSixDoc()
{
}

BOOL CSixDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSixDoc serialization

void CSixDoc::Serialize(CArchive& ar)
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
// CSixDoc diagnostics

#ifdef _DEBUG
void CSixDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSixDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSixDoc commands
