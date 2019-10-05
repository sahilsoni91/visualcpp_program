// eighttDoc.cpp : implementation of the CEighttDoc class
//

#include "stdafx.h"
#include "eightt.h"

#include "eighttDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEighttDoc

IMPLEMENT_DYNCREATE(CEighttDoc, CDocument)

BEGIN_MESSAGE_MAP(CEighttDoc, CDocument)
	//{{AFX_MSG_MAP(CEighttDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEighttDoc construction/destruction

CEighttDoc::CEighttDoc()
{
	// TODO: add one-time construction code here
StringData="";
}

CEighttDoc::~CEighttDoc()
{
}

BOOL CEighttDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEighttDoc serialization

void CEighttDoc::Serialize(CArchive& ar)
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
// CEighttDoc diagnostics

#ifdef _DEBUG
void CEighttDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEighttDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEighttDoc commands
