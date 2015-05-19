
// Test001Dlg.h : file di intestazione
//

#pragma once


// finestra di dialogo CTest001Dlg
class CTest001Dlg : public CDialogEx
{
// Costruzione
public:
	CTest001Dlg(CWnd* pParent = NULL);	// costruttore standard

// Dati della finestra di dialogo
	enum { IDD = IDD_TEST001_DIALOG };

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
};
