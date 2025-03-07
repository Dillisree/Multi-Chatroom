
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <string.h>
#include <string>

using namespace std;

// CServerApp:
// See Server.cpp for the implementation of this class
//

class CServerApp : public CWinApp
{
public:
	CServerApp();

// Overrides
public:
	virtual BOOL InitInstance();

	static void OnServerAction(std::string sValue);

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CServerApp theApp;