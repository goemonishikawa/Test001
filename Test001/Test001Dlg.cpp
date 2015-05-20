
// Test001Dlg.cpp : file di implementazione
//

#include "stdafx.h"
#include "Test001.h"
#include "Test001Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// finestra di dialogo CTest001Dlg



CTest001Dlg::CTest001Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTest001Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	n1 = 3;
	n2 = 2;
	n3 = 1;
}

void CTest001Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT1, n1);
	DDX_Text(pDX, IDC_EDIT2, n2);
	DDX_Text(pDX, IDC_EDIT3, n3);
}

BEGIN_MESSAGE_MAP(CTest001Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT2, &CTest001Dlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT1, &CTest001Dlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, &CTest001Dlg::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &CTest001Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// gestori di messaggi di CTest001Dlg

BOOL CTest001Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Impostare l'icona per questa finestra di dialogo.  Il framework non esegue questa operazione automaticamente
	//  se la finestra principale dell'applicazione non � una finestra di dialogo.
	SetIcon(m_hIcon, TRUE);			// Impostare icona grande.
	SetIcon(m_hIcon, FALSE);		// Impostare icona piccola.

	// TODO: aggiungere qui inizializzazione aggiuntiva.
	


	return TRUE;  // restituisce TRUE a meno che non venga impostato lo stato attivo su un controllo.
}

// Se si aggiunge alla finestra di dialogo un pulsante di riduzione a icona, per trascinare l'icona sar� necessario
//  il codice sottostante.  Per le applicazioni MFC che utilizzano il modello documento/visualizzazione,
//  questa operazione viene eseguita automaticamente dal framework.

void CTest001Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // contesto di dispositivo per il disegno

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Centrare l'icona nel rettangolo client.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Disegnare l'icona
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Il sistema chiama questa funzione per ottenere la visualizzazione del cursore durante il trascinamento
//  della finestra ridotta a icona.
HCURSOR CTest001Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTest001Dlg::OnEnChangeEdit2()
{
	// TODO:  Se si tratta di un controllo RICHEDIT, il controllo non
	// invier� questa notifica a meno che non si esegua l'override della funzione CDialogEx::OnInitDialog()
	// e venga eseguita la chiamata a CRichEditCtrl().SetEventMask()
	// con il flag ENM_CHANGE introdotto dall'operatore OR nella maschera.

	// TODO:  Aggiungere qui il codice per la gestione della notifica del controllo.
	UpdateData(TRUE);
}


void CTest001Dlg::OnEnChangeEdit1()
{
	// TODO:  Se si tratta di un controllo RICHEDIT, il controllo non
	// invier� questa notifica a meno che non si esegua l'override della funzione CDialogEx::OnInitDialog()
	// e venga eseguita la chiamata a CRichEditCtrl().SetEventMask()
	// con il flag ENM_CHANGE introdotto dall'operatore OR nella maschera.

	// TODO:  Aggiungere qui il codice per la gestione della notifica del controllo.
	UpdateData(TRUE);
	//IDC_EDIT1
	//n3 = n1 + n2;
}


void CTest001Dlg::OnEnChangeEdit3()
{
	// TODO:  Se si tratta di un controllo RICHEDIT, il controllo non
	// invier� questa notifica a meno che non si esegua l'override della funzione CDialogEx::OnInitDialog()
	// e venga eseguita la chiamata a CRichEditCtrl().SetEventMask()
	// con il flag ENM_CHANGE introdotto dall'operatore OR nella maschera.

	// TODO:  Aggiungere qui il codice per la gestione della notifica del controllo.
	UpdateData(TRUE);
	
}


void CTest001Dlg::OnBnClickedButton1()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
	

	n3 = n1 + n2;
	UpdateData(FALSE);
}
