#include <std.h>
#include "../../serakii.h"

inherit STORAGE"white_hall.c";



void create(){
   ::create();

   set_long(::query_long()+"\n%^C247%^Stairs here lead to the second floor of the tower. There is also a door to the north.%^CRST%^\n");


set_exits(([
"down" : WHITE"15",
"north" : WHITE"room2",
"south" : WHITE"17",



]));

    set_door("wooden door",ROOMS"room2","north",0);
    set_door_description("wooden door","%^C094%^Formed from solid wood, this door looks very"+
" heavy. An %^C243%^iron ring%^C094%^ hands from it to allow it to be opened.");
    set_string("wooden door", "open", "%^C094%^You push against the heavy door and it opens slowly.%^CRST%^");
    set_string("wooden door", "close", "%^C094%^You close the heavy wooden door slowly%^RESET%^%^BOLD%^.");

}