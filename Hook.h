// Hook.h : main header file for the HOOK DLL
//

#if !defined(AFX_HOOK_H__B37B7B3E_D842_4428_95C7_F94FA35F09AD__INCLUDED_)
#define AFX_HOOK_H__B37B7B3E_D842_4428_95C7_F94FA35F09AD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CHookApp
// See Hook.cpp for the implementation of this class
//

class CHookApp : public CWinApp
{
public:
	CHookApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHookApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CHookApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HOOK_H__B37B7B3E_D842_4428_95C7_F94FA35F09AD__INCLUDED_)
