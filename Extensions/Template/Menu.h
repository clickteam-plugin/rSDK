// rSDK demonstration release - www.aquadasoft.com
// Jamie McLaughlin and Jean Villy Edberg

// Send any queries or bug reports to support@aquadasoft.com

// --------------------------------
// Condition menu
// --------------------------------

#ifdef CONDITION_MENU

	ITEM(0, "Evaluated condition")
	SEPARATOR
	ITEM(1, "Triggered condition")

#endif

// --------------------------------
// Action menu
// --------------------------------

#ifdef ACTION_MENU

	SUB_START("This is a submenu")
		ITEM(0,"Trigger condition")
	SUB_END
	SEPARATOR
	ITEM(1,"Dummy action")

#endif


// --------------------------------
// Expression menu
// --------------------------------

#ifdef EXPRESSION_MENU

	ITEM(0,"Sum of")
	SEPARATOR
	ITEM(1,"Product of")

#endif