// Include guard
#ifndef TEMPLATE_INC
#define TEMPLATE_INC

// Disable the horrible template warnings for VC6
#pragma warning(disable:4786)

// General oddness prevents this from being defined sometimes
#ifndef COXSDK
#define	COXSDK
#endif

// Include some of the header files which shouldn't be modified- this file should be used as a precompiled header
#include	<vector>
#include	<string>
#include	<sstream>
#include	<queue>
#include	<map>
#include	<fstream>
#include	"ccxhdr.h"
#include	"Surface.h"
using namespace std;

#endif // !TEMPLATE_INC