// ElevenPpg.cpp : Implementation of the CElevenPropPage property page class.

#include "stdafx.h"
#include "eleven.h"
#include "ElevenPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CElevenPropPage, COlePropertyPage)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CElevenPropPage, COlePropertyPage)
	//{{AFX_MSG_MAP(CElevenPropPage)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CElevenPropPage, "ELEVEN.ElevenPropPage.1",
	0xa5ef6886, 0x2c8c, 0x4597, 0xbd, 0xbd, 0x22, 0xfa, 0x61, 0x65, 0x41, 0x38)


/////////////////////////////////////////////////////////////////////////////
// CElevenPropPage::CElevenPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CElevenPropPage

BOOL CElevenPropPage::CElevenPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_ELEVEN_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CElevenPropPage::CElevenPropPage - Constructor

CElevenPropPage::CElevenPropPage() :
	COlePropertyPage(IDD, IDS_ELEVEN_PPG_CAPTION)
{
	//{{AFX_DATA_INIT(CElevenPropPage)
	// NOTE: ClassWizard will add member initialization here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_INIT
}


/////////////////////////////////////////////////////////////////////////////
// CElevenPropPage::DoDataExchange - Moves data between page and properties

void CElevenPropPage::DoDataExchange(CDataExchange* pDX)
{
	//{{AFX_DATA_MAP(CElevenPropPage)
	// NOTE: ClassWizard will add DDP, DDX, and DDV calls here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_MAP
	DDP_PostProcessing(pDX);
}


/////////////////////////////////////////////////////////////////////////////
// CElevenPropPage message handlers
