
// Test001.h : file di intestazione principale per l'applicazione PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "includere 'stdafx.h' prima di includere questo file per PCH"
#endif

#include "resource.h"		// simboli principali


// CTest001App:
// Vedere Test001.cpp per l'implementazione di questa classe
//

class CTest001App : public CWinApp
{
public:
	CTest001App();

// Override
public:
	virtual BOOL InitInstance();

// Implementazione

	DECLARE_MESSAGE_MAP()
};

extern CTest001App theApp;