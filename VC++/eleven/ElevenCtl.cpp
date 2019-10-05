// ElevenCtl.cpp : Implementation of the CElevenCtrl ActiveX Control class.

#include "stdafx.h"
#include "eleven.h"
#include "ElevenCtl.h"
#include "ElevenPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CElevenCtrl, COleControl)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CElevenCtrl, COleControl)
	//{{AFX_MSG_MAP(CElevenCtrl)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Dispatch map

BEGIN_DISPATCH_MAP(CElevenCtrl, COleControl)
	//{{AFX_DISPATCH_MAP(CElevenCtrl)
	// NOTE - ClassWizard will add and remove dispatch map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DISPATCH_MAP
	DISP_FUNCTION_ID(CElevenCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()


/////////////////////////////////////////////////////////////////////////////
// Event map

BEGIN_EVENT_MAP(CElevenCtrl, COleControl)
	//{{AFX_EVENT_MAP(CElevenCtrl)
	// NOTE - ClassWizard will add and remove event map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_EVENT_MAP
END_EVENT_MAP()


/////////////////////////////////////////////////////////////////////////////
// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CElevenCtrl, 1)
	PROPPAGEID(CElevenPropPage::guid)
END_PROPPAGEIDS(CElevenCtrl)


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CElevenCtrl, "ELEVEN.ElevenCtrl.1",
	0x1120f28d, 0x5bd7, 0x4834, 0x85, 0x55, 0xec, 0x77, 0x7c, 0x89, 0x80, 0x5e)


/////////////////////////////////////////////////////////////////////////////
// Type library ID and version

IMPLEMENT_OLETYPELIB(CElevenCtrl, _tlid, _wVerMajor, _wVerMinor)


/////////////////////////////////////////////////////////////////////////////
// Interface IDs

const IID BASED_CODE IID_DEleven =
		{ 0xfdc30ade, 0xbeaf, 0x4039, { 0x9d, 0xd9, 0x88, 0x6e, 0xf3, 0x7, 0xe5, 0xc1 } };
const IID BASED_CODE IID_DElevenEvents =
		{ 0x388f8d80, 0x5e41, 0x4cf2, { 0x9d, 0xcb, 0x29, 0x15, 0x64, 0x5a, 0x38, 0x60 } };


/////////////////////////////////////////////////////////////////////////////
// Control type information

static const DWORD BASED_CODE _dwElevenOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CElevenCtrl, IDS_ELEVEN, _dwElevenOleMisc)


/////////////////////////////////////////////////////////////////////////////
// CElevenCtrl::CElevenCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CElevenCtrl

BOOL CElevenCtrl::CElevenCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_ELEVEN,
			IDB_ELEVEN,
			afxRegApartmentThreading,
			_dwElevenOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


/////////////////////////////////////////////////////////////////////////////
// CElevenCtrl::CElevenCtrl - Constructor

CElevenCtrl::CElevenCtrl()
{
	InitializeIIDs(&IID_DEleven, &IID_DElevenEvents);
	fill1=fill2=fill3=fill4=false;
	// TODO: Initialize your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CElevenCtrl::~CElevenCtrl - Destructor

CElevenCtrl::~CElevenCtrl()
{
	// TODO: Cleanup your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CElevenCtrl::OnDraw - Drawing function

void CElevenCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	box1=CRect(rcBounds.left,rcBounds.top,rcBounds.right/2,rcBounds.bottom/2);
	box2=CRect(rcBounds.left,rcBounds.bottom/2,rcBounds.right/2,rcBounds.bottom);
	box3=CRect(rcBounds.right/2,rcBounds.top,rcBounds.right,rcBounds.bottom/2);
	box4=CRect(rcBounds.right/2,rcBounds.bottom/2,rcBounds.right,rcBounds.bottom);
	pdc->Rectangle(&box1);
	pdc->Rectangle(&box2);
	pdc->Rectangle(&box3);
	pdc->Rectangle(&box4);
	if(fill1)pdc->FillSolidRect(&box1,RGB(0,0,0));
	if(fill2)pdc->FillSolidRect(&box2,RGB(0,0,0));
	if(fill3)pdc->FillSolidRect(&box3,RGB(0,0,0));
	if(fill4)pdc->FillSolidRect(&box4,RGB(0,0,0));
}


/////////////////////////////////////////////////////////////////////////////
// CElevenCtrl::DoPropExchange - Persistence support

void CElevenCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.

}


/////////////////////////////////////////////////////////////////////////////
// CElevenCtrl::OnResetState - Reset control to default state

void CElevenCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


/////////////////////////////////////////////////////////////////////////////
// CElevenCtrl::AboutBox - Display an "About" box to the user

void CElevenCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_ELEVEN);
	dlgAbout.DoModal();
}


/////////////////////////////////////////////////////////////////////////////
// CElevenCtrl message handlers

void CElevenCtrl::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	fill1=box1.PtInRect(point);
	fill2=box2.PtInRect(point);
	fill3=box3.PtInRect(point);
	fill4=box4.PtInRect(point);
	Invalidate();
	COleControl::OnLButtonDown(nFlags, point);
}
