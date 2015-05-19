
// stdafx.h : file di inclusione per file di inclusione del sistema standard
// o file di inclusione specifici del progetto utilizzati di frequente,
// ma modificati di rado.

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Escludere dalle intestazioni Windows gli elementi utilizzati di rado.
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // alcuni costruttori CString saranno espliciti.

// disattiva l'operazione delle classi MFC che consiste nel nascondere alcuni comuni messaggi di avviso che vengono spesso ignorati.
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // componenti MFC di base e standard
#include <afxext.h>         // estensioni MFC





#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // Supporto MFC per controlli comuni di Internet Explorer 4
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // Supporto MFC per controlli comuni di Windows
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // Supporto MFC per barre di controllo e barre multifunzione











