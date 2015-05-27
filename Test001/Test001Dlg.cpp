
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
	StatoThreadA = _T("null");
	StatoThreadB = _T("null");
	StatoA = _T("null");
	StatoB = _T("null");
	StatoThreadC = _T("null");
	_param = new THREADSTRUCT;
	_param->_this = this;
	p = 100;
}

void CTest001Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT1, n1);
	DDX_Text(pDX, IDC_EDIT2, n2);
	DDX_Text(pDX, IDC_EDIT3, n3);
	DDX_Text(pDX, IDC_EDIT4, StatoThreadA);
	DDX_Text(pDX, IDC_EDIT5, StatoThreadB);
	DDX_Text(pDX, IDC_EDIT6, StatoThreadC);
	DDX_Text(pDX, IDC_EDIT7, StatoA);
	DDX_Text(pDX, IDC_EDIT8, StatoB);
	DDX_Control(pDX, IDC_PROGRESS1, m_ProgressA);
	DDX_Control(pDX, IDC_PROGRESS2, m_ProgressB);
	DDX_Control(pDX, IDC_PROGRESS3, m_ProgressC);

}

BEGIN_MESSAGE_MAP(CTest001Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT2, &CTest001Dlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT1, &CTest001Dlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, &CTest001Dlg::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &CTest001Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CTest001Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CTest001Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CTest001Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CTest001Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CTest001Dlg::OnBnClickedButton6)
	ON_EN_CHANGE(IDC_EDIT6, &CTest001Dlg::OnEnChangeEdit6)
	ON_BN_CLICKED(IDC_BUTTON7, &CTest001Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CTest001Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CTest001Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CTest001Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CTest001Dlg::OnBnClickedButton11)
END_MESSAGE_MAP()

// gestori di messaggi di CTest001Dlg

BOOL CTest001Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Impostare l'icona per questa finestra di dialogo.  Il framework non esegue questa operazione automaticamente
	//  se la finestra principale dell'applicazione non è una finestra di dialogo.
	SetIcon(m_hIcon, TRUE);			// Impostare icona grande.
	SetIcon(m_hIcon, FALSE);		// Impostare icona piccola.

	// TODO: aggiungere qui inizializzazione aggiuntiva.
	m_ProgressC.SetRange(1, 200);
	m_ProgressC.SetPos(p);

	return TRUE;  // restituisce TRUE a meno che non venga impostato lo stato attivo su un controllo.
}

// Se si aggiunge alla finestra di dialogo un pulsante di riduzione a icona, per trascinare l'icona sarà necessario
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
	// invierà questa notifica a meno che non si esegua l'override della funzione CDialogEx::OnInitDialog()
	// e venga eseguita la chiamata a CRichEditCtrl().SetEventMask()
	// con il flag ENM_CHANGE introdotto dall'operatore OR nella maschera.

	// TODO:  Aggiungere qui il codice per la gestione della notifica del controllo.
	UpdateData(TRUE);
}


void CTest001Dlg::OnEnChangeEdit1()
{
	// TODO:  Se si tratta di un controllo RICHEDIT, il controllo non
	// invierà questa notifica a meno che non si esegua l'override della funzione CDialogEx::OnInitDialog()
	// e venga eseguita la chiamata a CRichEditCtrl().SetEventMask()
	// con il flag ENM_CHANGE introdotto dall'operatore OR nella maschera.

	// TODO:  Aggiungere qui il codice per la gestione della notifica del controllo.
	UpdateData(TRUE);
}


void CTest001Dlg::OnEnChangeEdit3()
{
	// TODO:  Se si tratta di un controllo RICHEDIT, il controllo non
	// invierà questa notifica a meno che non si esegua l'override della funzione CDialogEx::OnInitDialog()
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


void CTest001Dlg::OnBnClickedButton2()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.

	//call the thread on a button action or menu

	pThreadA = AfxBeginThread(StartThreadA, _param);
	StatoThreadA = _T("ThreadA creato"); UpdateData(FALSE);

}


void CTest001Dlg::OnBnClickedButton3()
{

	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
}


void CTest001Dlg::OnBnClickedButton4()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.

	pThreadA->ResumeThread();
	StatoThreadA = _T("ThreadA ripristinato"); UpdateData(FALSE);
}


void CTest001Dlg::OnBnClickedButton5()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.

	pThreadA->SuspendThread();
	StatoThreadA = _T("ThreadA sospeso"); UpdateData(FALSE);
}


void CTest001Dlg::OnBnClickedButton6()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
	StatoThreadC = StatoThreadB; UpdateData(FALSE);
}






void CTest001Dlg::OnEnChangeEdit6()
{
	// TODO:  Se si tratta di un controllo RICHEDIT, il controllo non
	// invierà questa notifica a meno che non si esegua l'override della funzione CDialogEx::OnInitDialog()
	// e venga eseguita la chiamata a CRichEditCtrl().SetEventMask()
	// con il flag ENM_CHANGE introdotto dall'operatore OR nella maschera.

	// TODO:  Aggiungere qui il codice per la gestione della notifica del controllo.
	UpdateData(FALSE);
}


UINT CTest001Dlg::StartThreadA(LPVOID param)
{
	THREADSTRUCT*    ts = (THREADSTRUCT*)param;

	UINT nIterations = 100;
	ts->_this->m_ProgressA.SetRange(1, 100);

	for (UINT i = 1; i <= nIterations; i++)
	{
		//Sleep(200);
		CString aa;
		aa.Format(_T("%d"), i);
		ts->_this->StatoThreadA = aa;
		ts->_this->m_ProgressA.SetPos(i);

		g_cs.Lock();

		Sleep(250);
		ts->_this->p = ts->_this->p + 1;

		g_cs.Unlock();

		ts->_this->m_ProgressC.SetPos(ts->_this->p);
		ts->_this->StatoThreadC.Format(_T("%d"), ts->_this->p);


		ts->_this->UpdateData(FALSE);

	}
	return 1;
}

UINT CTest001Dlg::StartThreadB(LPVOID param)
{
	THREADSTRUCT*    ts = (THREADSTRUCT*)param;

	UINT nIterations = 100;
	ts->_this->m_ProgressB.SetRange(1, 100);

	for (UINT i = 1; i <= nIterations; i++)
	{
		//Sleep(100);
		CString aa;
		aa.Format(_T("%d"), i);
		ts->_this->StatoThreadB = aa;
		ts->_this->m_ProgressB.SetPos(i);

		g_cs.Lock();

		Sleep(500);
		ts->_this->p = ts->_this->p - 1;

		g_cs.Unlock();

		ts->_this->m_ProgressC.SetPos(ts->_this->p);
		ts->_this->StatoThreadC.Format(_T("%d"), ts->_this->p);
		ts->_this->UpdateData(FALSE);
	}
	return 1;
}

CTest001Dlg::~CTest001Dlg()
{
	if (_param != NULL) delete _param;
}

void CTest001Dlg::OnBnClickedButton7()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
	pThreadB = AfxBeginThread(StartThreadB, _param);
	StatoThreadB = _T("ThreadB creato"); UpdateData(FALSE);

}


void CTest001Dlg::OnBnClickedButton8()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
}


void CTest001Dlg::OnBnClickedButton9()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
}


void CTest001Dlg::OnBnClickedButton10()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
}


void CTest001Dlg::OnBnClickedButton11()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
}
