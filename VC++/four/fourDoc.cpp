// fourDoc.cpp : implementation of the CFourDoc class
//

#include "stdafx.h"
#include "four.h"

#include "fourDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFourDoc

IMPLEMENT_DYNCREATE(CFourDoc, CDocument)

BEGIN_MESSAGE_MAP(CFourDoc, CDocument)
	//{{AFX_MSG_MAP(CFourDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFourDoc construction/destruction

CFourDoc::CFourDoc()
{
	// TODO: add one-time construction code here

}

CFourDoc::~CFourDoc()
{
}

BOOL CFourDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CFourDoc serialization

void CFourDoc::Serialize(CArchive& ar)
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
// CFourDoc diagnostics

#ifdef _DEBUG
void CFourDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFourDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFourDoc commands
