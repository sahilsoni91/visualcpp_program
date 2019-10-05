// tenDlg.h : header file
//

#if !defined(AFX_TENDLG_H__681D28F7_0C9D_4622_AEFA_4E129EE7F2E5__INCLUDED_)
#define AFX_TENDLG_H__681D28F7_0C9D_4622_AEFA_4E129EE7F2E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTenDlg dialog

class CTenDlg : public CDialog
{
// Construction
public:
	CTenDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTenDlg)
	enum { IDD = IDD_TEN_DIALOG };
	BOOL	m_check1;
	BOOL	m_check2;
	BOOL	m_check3;
	BOOL	m_check4;
	CString	m_text;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTenDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTenDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnRadio3();
	afx_msg void OnRadio4();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TENDLG_H__681D28F7_0C9D_4622_AEFA_4E129EE7F2E5__INCLUDED_)
