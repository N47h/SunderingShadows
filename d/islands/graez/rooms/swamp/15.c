
#include <std.h>
#include "../../graez.h"

inherit STORAGE"swamp.c";



void create(){
   ::create();

set_exits(([

"northwest" : SWAM"13",
"south" : SWAM"16",


]));

}

