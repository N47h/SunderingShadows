
#include <std.h>
#include "../../serakii.h"

inherit STORAGE"fallow_field.c";



void create(){
   ::create();


set_exits(([

"northeast" : FALLOW"31",
"southwest" : FALLOW"39",



]));

}
