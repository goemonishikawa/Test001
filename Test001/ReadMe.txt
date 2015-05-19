================================================================================
    LIBRERIA MFC: cenni preliminari sul progetto Test001
===============================================================================

La Creazione guidata applicazione ha creato questa applicazione Test001. Tale applicazione illustra le nozioni fondamentali sull'utilizzo delle classi MFC (Microsoft Foundation Class) e costituisce un punto di partenza per la scrittura dell'applicazione.

Questo file contiene un riepilogo del contenuto di ciascun file che fa parte
dell'applicazione Test001.

Test001.vcxproj
    File di progetto principale per i progetti VC++ generati tramite una Creazione guidata applicazione. Contiene informazioni sulla versione di Visual C++ che ha generato il file e informazioni sulle piattaforme, le configurazioni e le caratteristiche del progetto selezionate con la Creazione guidata applicazione.

Test001.vcxproj.filters
    File dei filtri per i progetti VC++ generati tramite una Creazione guidata applicazione. Contiene informazioni sull'associazione tra i file del progetto e i filtri. Tale associazione viene utilizzata nell'IDE per la visualizzazione di raggruppamenti di file con estensioni simili in un nodo specifico, ad esempio: i file con estensione cpp sono associati al filtro "File di origine".

Test001.h
    File di intestazione principale per l'applicazione.
    Include altre intestazioni specifiche del progetto, ad esempio resource.h, e dichiara la classe di applicazione CTest001App.

Test001.cpp
    File di origine principale dell'applicazione contenente la classe di applicazione CTest001App.

Test001.rc
    Elenco di tutte le risorse Microsoft Windows utilizzate dal programma. Include le icone, le bitmap e i cursori memorizzati nella sottodirectory RES. Questo file può essere modificato direttamente in Microsoft Visual C++. Le risorse del progetto sono in 1040.

res\Test001.ico
    File di icona utilizzato come icona dell'applicazione. Tale icona è inclusa dal file di risorse principale Test001.rc.

res\Test001.rc2
    File contenente le risorse che non vengono modificate da Microsoft Visual C++. Inserire in questo file tutte le risorse non modificabili dall'editor di risorse.


/////////////////////////////////////////////////////////////////////////////

La Creazione guidata applicazione crea una classe di finestra di dialogo:

Test001Dlg.h, Test001Dlg.cpp - la finestra di dialogo
    Questi file contengono la classe CTest001Dlg. Questa classe definisce il comportamento della finestra di dialogo principale dell'applicazione. Il modello della finestra di dialogo è in Test001.rc che può essere modificato in Microsoft Visual C++.

/////////////////////////////////////////////////////////////////////////////

Altri file standard:

StdAfx.h, StdAfx.cpp
    Tali file vengono utilizzati per generare il file di intestazione precompilato Test001.pch e il file dei tipi precompilato StdAfx.obj.

Resource.h
    File di intestazione standard che definisce i nuovi ID risorse. Tale file viene letto e aggiornato da Microsoft Visual C++.

/////////////////////////////////////////////////////////////////////////////

Altre note:

La Creazione guidata applicazione utilizza "TODO:" per indicare le parti del codice sorgente da aggiungere o personalizzare.

Se l'applicazione utilizza MFC in una DLL condivisa, sarà necessario ridistribuire le DLL MFC. Se l'applicazione è un una lingua diversa da quella stabilita dalle impostazioni locali del sistema operativo, sarà inoltre necessario ridistribuire le corrispondenti risorse localizzate mfc110XXX.DLL.
Per ulteriori informazioni su entrambi gli argomenti, vedere la sezione relativa alla ridistribuzione delle applicazioni Visual C++ nella documentazione MSDN.

/////////////////////////////////////////////////////////////////////////////
