#define ITEM(sid,id,str) const int sid=id;
#define DISABLED(sid,id,str) const int sid=id;
#include "menu.h"
#undef ITEM
#undef DISABLED