
// Test001Dlg.h : file di intestazione
//

#pragma once
//#include <afxmt.h> 
//static 
static CCriticalSection g_cs;
//static int p;
// finestra di dialogo CTest001Dlg
class CTest001Dlg : public CDialogEx
{
	// Costruzione
public:
	typedef struct THREADSTRUCT
	{
		CTest001Dlg*    _this;
		//you can add here other parameters you might be interested on
	} THREADSTRUCT;

	THREADSTRUCT *_param;

	CTest001Dlg(CWnd* pParent = NULL);	// costruttore standard
	
	static UINT StartThreadA(LPVOID param);
	static UINT StartThreadB(LPVOID param);
	//static CCriticalSection g_cs;
	int p;


	// Dati della finestra di dialogo
	enum { IDD = IDD_TEST001_DIALOG };
	int n1;
	int n2;
	int n3;
	CString	StatoThreadA;
	CString	StatoThreadB;
	CString	StatoThreadC;
	CString	StatoA;
	CString	StatoB;
	bool ThreadA;
	bool ThreadB;

	CProgressCtrl m_ProgressA;
	CProgressCtrl m_ProgressB;
	CProgressCtrl m_ProgressC;

	CWinThread* pThreadA;
	CWinThread* pThreadB;
	DWORD threadInfo;

	~CTest001Dlg();
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// supporto DDX/DDV

														// Implementazione
protected:
	HICON m_hIcon;

	// Funzioni generate per la mappa dei messaggi
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
};
