#include <std.h>
#include "../../serakii.h"

inherit STORAGE"construction.c";

void create(){
   ::create();
   set_exits(([

          "north" : TOWN"fabric_vendor",
          
   ]));

}