// fiveDoc.cpp : implementation of the CFiveDoc class
//

#include "stdafx.h"
#include "five.h"

#include "fiveDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFiveDoc

IMPLEMENT_DYNCREATE(CFiveDoc, CDocument)

BEGIN_MESSAGE_MAP(CFiveDoc, CDocument)
	//{{AFX_MSG_MAP(CFiveDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFiveDoc construction/destruction

CFiveDoc::CFiveDoc()
{
	// TODO: add one-time construction code here
	StringData="";
}

CFiveDoc::~CFiveDoc()
{
}

BOOL CFiveDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CFiveDoc serialization

void CFiveDoc::Serialize(CArchive& ar)
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
// CFiveDoc diagnostics

#ifdef _DEBUG
void CFiveDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFiveDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFiveDoc commands
