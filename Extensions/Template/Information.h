// rSDK demonstration release - www.aquadasoft.com
// Jamie McLaughlin and Jean Villy Edberg

// Send any queries or bug reports to support@aquadasoft.com

// --------------------
// Object information
// --------------------

// Basic object details
#define	ObjectName			"Empty object"
#define	ObjectAuthor		"Extension author"
#define	ObjectCopyright		"Copyright � 2007 Extension author"
#define	ObjectComment		"An empty extension"
#define	ObjectURL			"http://www.authorswebpage.com"
#define	ObjectHelp			"Help\\EmptyObject.chm"

// If you register your object with Clickteam, change this to the ID you were given
#define ObjectRegID			REGID_PRIVATE

// --------------------
// Version information
// --------------------

// PRODUCT_VERSION_TGF or PRODUCT_VERSION_DEVELOPER
#define ForVersion PRODUCT_VERSION_STANDARD

// Set this to the latest MMF build out when you build the object
#define	MinimumBuild 242

// --------------------
// Beta information
// --------------------

// #define BETA
// #define POPUP_ON_DROP
// #define POPUP_ON_EXE
// #define POPUP_ON_BUILD
// #define POPUP_MESSAGE "This is a beta extension- use with caution!"

// --------------------
// Handling priority
// --------------------
// If the extension will handle windows messages, specify the priority
// of the handling procedure, 0 = low and 255 = very high

#define	WINDOWPROC_PRIORITY 100

// --------------------
// Object identifier
// --------------------
// Change N,O,N,E to some unique 4 character string if you are subclassing a window

#define	IDENTIFIER MAKEID(N,O,N,E)
