
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

//DWORD WINAPI ThreadProc(LPVOID);

//static UINT StartThread(LPVOID param);
//structure for passing to the controlling function



CTest001Dlg::CTest001Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTest001Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	n1 = 3;
	n2 = 2;
	n3 = 1;
	StatoThreadA = _T("null");
	StatoThreadB = _T("null");
	StatoThreadC = _T("null");
	
	//progress->SetRange(1, 100);
	//progress->SetPos(1);
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
	DDX_Control(pDX, IDC_PROGRESS1, m_Progress);

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
	//progress = new CProgressCtrl();
	//progress.SetRange(0, 200);
	

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
	//IDC_EDIT1
	//n3 = n1 + n2;
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
{/*
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
	StatoThreadA = _T("creazione ThreadA"); UpdateData(FALSE);
	aThread[0] = CreateThread(
		NULL,       // default security attributes
		0,          // default stack size
		(LPTHREAD_START_ROUTINE)ThreadProc,
		NULL,       // no thread function arguments
		0,          // default creation flags
		&ThreadID); // receive thread identifier
	//StatoThreadA = _T("ThreadA creato"); UpdateData(TRUE);
	/*if (aThread[0] == NULL)
	{
		StatoThreadA = _T("Errore ThreadA"); UpdateData(FALSE);
		//printf("CreateThread error: %d\n", GetLastError());
		//return;
	}
	else { StatoThreadA = _T("ThreadA creato"); UpdateData(FALSE); }
	
	StatoThreadA = _T("attendere, chiusura ThreadA in corso"); UpdateData(FALSE);
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
	WaitForMultipleObjects(1, aThread, TRUE, INFINITE);
	bool a;
	a=CloseHandle(aThread[0]);
	if (aThread[0] == NULL)
	{
		StatoThreadA = _T("ThreadA chiuso"); UpdateData(FALSE);
		//printf("CreateThread error: %d\n", GetLastError());
		//return;
	}
	else {
		StatoThreadA = _T("Errore ThreadA"); UpdateData(FALSE);
	}
	*/

	/*aThread = new CWinThread();
	aThread->m_bAutoDelete = FALSE;
	aThread->CreateThread(CREATE_SUSPENDED);*/

	
	/*threadInfo = 1000;
	pThread = AfxBeginThread(ThreadFunc);
	pThread->m_bAutoDelete = FALSE;
	pThread->CreateThread(CREATE_SUSPENDED); 
	*/
	
	//call the thread on a button action or menu
	_param = new THREADSTRUCT;
	_param->_this = this;
	pThread=AfxBeginThread(StartThread, _param);
	StatoThreadA = _T("ThreadA creato"); UpdateData(FALSE);
	
	
	//::WaitForSingleObject(pThread, INFINITE);
	//pThread = 
	//UINT exitcode=0;
	//AfxEndThread(exitcode,1);
	//StatoThreadA = _T("ThreadA chiuso"); UpdateData(FALSE);
	
}


void CTest001Dlg::OnBnClickedButton3()
{

	/*StatoThreadA = _T("attendere, chiusura ThreadA in corso"); UpdateData(FALSE);
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
	WaitForMultipleObjects(1, aThread, TRUE, INFINITE);
	bool a;
	a=CloseHandle(aThread[0]);
		if (aThread[0] == NULL)
		{
			StatoThreadA = _T("ThreadA chiuso"); UpdateData(FALSE);
				//printf("CreateThread error: %d\n", GetLastError());
				//return;
		}
		else { StatoThreadA = _T("Errore ThreadA"); UpdateData(FALSE);
		}*/
	//delete pThread;
	//pThread = NULL;
	StatoThreadA = _T("ThreadA chiuso"); UpdateData(FALSE);
}

/*
DWORD WINAPI ThreadProc(LPVOID lpParam)
{
	//while (TRUE)
	//{
		//StatoThreadB = _T("Elaborazione iniziata"); UpdateData(FALSE);
		Sleep(5000);
		//StatoThreadB = _T("Elaborazione finita"); UpdateData(FALSE);
	//}
	return 0;
}*/

void CTest001Dlg::OnBnClickedButton4()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.

	pThread->ResumeThread();
	StatoThreadA = _T("ThreadA ripristinato"); UpdateData(FALSE);
}


void CTest001Dlg::OnBnClickedButton5()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.

	pThread->SuspendThread();
	StatoThreadA = _T("ThreadA sospeso"); UpdateData(FALSE);
}


void CTest001Dlg::OnBnClickedButton6()
{
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.

	//aThread->
	//StatoThreadA = _T("ThreadA sospeso"); UpdateData(FALSE);
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


UINT CTest001Dlg::StartThread(LPVOID param)
{
	THREADSTRUCT*    ts = (THREADSTRUCT*)param;

	//here is the time-consuming process 
	//which interacts with your dialog
	//AfxMessageBox("Thread is started!");

	//see the access mode to your dialog controls
	/*ts->_this->m_ctrl_progress.SetRange(0, 1000);
	while (ts->_this->m_ctrl_progress.GetPos() < 1000)
	{
		Sleep(500);
		ts->_this->m_ctrl_progress.StepIt();
	}*/
	UINT nIterations = 100; //(UINT)pParam;
	//ts->_this->OnNMCustomdrawProgress1.SetScrollRange(1,0, nIterations,1);
	ts->_this->m_Progress.SetRange(1, 100);

	for (UINT i = 1; i <= nIterations; i++)
	{
		Sleep(50);
		CString aa;
		aa.Format(_T("%d"), i);
		ts->_this->StatoThreadB = aa;
		//ts->_this->StatoThreadB.
		ts->_this->m_Progress.SetPos(i);
		ts->_this->UpdateData(FALSE);
		//
		//progress.SetPos(1);
		//ts->_this->OnNMCustomdrawProgress1.Stepit();
		//ts->_this->UpdateWindow();// 
		//ts->_this->UpdateData(FALSE);
		//ts->_this->OnBnClickedButton4();
	}
	//ts->_this->OnBnClickedButton3();
	//you can also call AfxEndThread() here
	return 1;
}


/*
UINT ThreadFunc(LPVOID param)
{
	UINT nIterations = 100; //(UINT)pParam;
	for (UINT i = 0; i < nIterations; i++)
	{
		//int x = i;
		CString aa;
		aa.Format(_T("%d"), i);


		//CString aa;
		//aa.
		//aa.Format("%d", 7);
		//theApp.dlg.StatoThreadB = aa;
		//theApp.dlg.UpdateData(FALSE);
		Sleep(50);
		//theApp.dlg->StatoThreadA= _T("ThreadA chiuso");
		//m_pMainWnd

		//StatoThreadA = _T("ThreadA chiuso"); 

	};

	Sleep(50);
	return 0;
}
*/

/*void CTest001Dlg::OnNMCustomdrawProgress1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: aggiungere qui il codice per la gestione della notifica del controllo.
	*pResult = 0;
}*/
CTest001Dlg::~CTest001Dlg()
{
	if (_param != NULL) delete _param;
	//if (pThread != NULL)delete pThread;
}