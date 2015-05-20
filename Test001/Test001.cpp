
// Test001.cpp : definisce i comportamenti delle classi per l'applicazione.
//
// prova
#include "stdafx.h"
#include "Test001.h"
#include "Test001Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTest001App

BEGIN_MESSAGE_MAP(CTest001App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// costruzione di CTest001App

CTest001App::CTest001App()
{
	// TODO: inserire qui il codice di costruzione.
	// Inserire l'inizializzazione significativa in InitInstance.
}


// L'unico e solo oggetto CTest001App

CTest001App theApp;


// Inizializzazione di CTest001App

BOOL CTest001App::InitInstance()
{
	CWinApp::InitInstance();


	// Creare il gestore della shell se la finestra di dialogo contiene
	// controlli della visualizzazione elenco o struttura ad albero della shell.
	CShellManager *pShellManager = new CShellManager;

	// Attiva gestore visualizzazione "Windows nativo" per abilitare i temi nei controlli MFC
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// Inizializzazione standard
	// Se non si utilizzano queste funzionalità e si desidera ridurre la dimensione
	// dell'eseguibile finale, è necessario rimuovere dal seguente codice
	// le specifiche routine di inizializzazione che non sono necessarie.
	// Modificare la chiave del Registro di sistema in cui sono memorizzate le impostazioni
	// TODO: è necessario modificare questa stringa in modo appropriato,
	// inserendo ad esempio il nome della società o dell'organizzazione.
	SetRegistryKey(_T("Applicazioni locali generate tramite la Creazione guidata applicazioni"));

	CTest001Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: inserire qui il codice per gestire la chiusura della finestra di dialogo 
		//  tramite il pulsante OK.
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: inserire qui il codice per gestire la chiusura della finestra di dialogo 
		//  tramite il pulsante Annulla.
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "Avviso: creazione della finestra di dialogo non riuscita. L'applicazione verrà terminata in modo imprevisto.\n");
		TRACE(traceAppMsg, 0, "Avviso: se si utilizzano i controlli MFC nella finestra di dialogo, non è possibile utilizzare #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS.\n");
	}

	// Eliminare il gestore della shell creato in precedenza.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// Poiché la finestra di dialogo è stata chiusa, restituisce FALSE in modo che l'applicazione
	//  venga terminata, anziché avviare il message pump dell'applicazione.
	return FALSE;
}

