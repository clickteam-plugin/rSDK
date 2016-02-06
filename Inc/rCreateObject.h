// The code in this file is executed in CreateObject

// Drop popup if needed
#ifdef BETA
	#ifdef POPUP_ON_DROP
		MessageBox(0,POPUP_MESSAGE,ObjectName,MB_OK|MB_ICONINFORMATION);
	#endif
#endif