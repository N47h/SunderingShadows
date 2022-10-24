#include <std.h>
#include "../tharis.h"

inherit ROOM;

void create(){
    ::create();
    set_indoors(1);
    set_light(2);
    set_terrain(STONE_BUILDING);
    set_travel(PAVED_ROAD);
    set_property("smithy",1); 
    set_name("Forge");
    set_short("%^RESET%^%^C088%^F%^C124%^o%^C160%^r%^C196%^g%^C088%^e%^CRST%^");
    set_long("%^RESET%^%^C241%^This enormous, two-story %^RESET%^%^C088%^f%^C124%^o%^C160%^r%^C196%^g%^RESET%^%^C088%^e %^RESET%^%^C241%^spreads out before you. There is a circular %^RESET%^%^C244%^main floor %^RESET%^%^C241%^meant for smaller-scale work and stairs descending to a much larger %^RESET%^%^C240%^lower level %^RESET%^%^C241%^where mass manufacturing occurs. Immense %^RESET%^%^C059%^d%^C060%^a%^C061%^r%^C059%^kst%^RESET%^%^C060%^e%^C061%^e%^RESET%^%^C059%^l f%^RESET%^%^C060%^u%^C061%^r%^C059%^n%^C060%^a%^C061%^c%^C060%^e%^RESET%^%^C059%^s %^RESET%^%^C241%^are evenly spaced around the upper levels with an intricate network of %^RESET%^%^C246%^s%^C247%^t%^C248%^o%^C247%^n%^RESET%^%^C246%^e t%^RESET%^%^C247%^r%^C248%^o%^C249%^u%^C248%^g%^C247%^h%^RESET%^%^C246%^s %^RESET%^%^C241%^funneling %^RESET%^%^C178%^m%^C220%^o%^C226%^l%^C227%^t%^C228%^e%^C229%^n m%^RESET%^%^C227%^e%^C226%^t%^C220%^a%^RESET%^%^C178%^l %^RESET%^%^C241%^to the lower floor. %^RESET%^%^C241%^Anvils and %^RESET%^%^C094%^workbenches %^RESET%^%^C241%^are stationed near each furnace with all the tools necessary for forging anything one has the skills to craft. Down below, rows of %^RESET%^%^C244%^shaped molds %^RESET%^%^C241%^are manned by dozens of %^RESET%^%^C102%^smiths %^RESET%^%^C241%^who work in an assembly line producing all manner of %^RESET%^%^C247%^w%^C248%^e%^C249%^a%^C250%^p%^C249%^o%^C248%^n%^RESET%^%^C246%^s%^RESET%^%^C241%^, %^RESET%^%^C178%^a%^C220%^r%^C226%^m%^C220%^o%^RESET%^%^C178%^r%^C241%^, and %^RESET%^%^C244%^other implements%^RESET%^%^C241%^. %^RESET%^%^C058%^Carts %^RESET%^%^C241%^of finished products are regularly wheeled out through large %^RESET%^%^C059%^d%^RESET%^%^C060%^o%^C061%^u%^C060%^b%^RESET%^%^C059%^le d%^RESET%^%^C060%^o%^C061%^o%^C060%^r%^RESET%^%^C059%^s %^RESET%^%^C241%^in the back while on the main level, smaller %^RESET%^%^C246%^a%^C247%^r%^C248%^c%^C249%^h%^C250%^w%^C248%^a%^C247%^y%^RESET%^%^C246%^s %^RESET%^%^C241%^lead to the weapon and armor shops. The air is tinged %^RESET%^%^C202%^o%^C208%^r%^C220%^a%^C214%^n%^C208%^g%^RESET%^%^C202%^e %^RESET%^%^C241%^by the %^RESET%^%^C214%^light %^RESET%^%^C241%^of the %^RESET%^%^C088%^f%^RESET%^%^C196%^i%^RESET%^%^C208%^r%^RESET%^%^C196%^e%^RESET%^%^C088%^s%^RESET%^%^C241%^, the %^RESET%^%^C088%^h%^C124%^e%^RESET%^%^C196%^a%^RESET%^%^C088%^t oppressive%^RESET%^%^C241%^.%^CRST%^");
    set_items(([
        ({"tools", "workbenches"}) : "%^RESET%^%^C241%^The %^RESET%^%^C094%^worktables %^RESET%^%^C241%^are crowded with all manner of tools, including small and large %^RESET%^%^C246%^h%^C247%^a%^C248%^m%^RESET%^%^C249%^m%^C248%^e%^C247%^r%^RESET%^%^C246%^s%^C241%^, %^RESET%^%^C088%^p%^C124%^i%^C160%^e%^RESET%^%^C196%^rc%^C160%^i%^C124%^n%^RESET%^%^C088%^g %^RESET%^%^C241%^tools, %^RESET%^%^C244%^clamps%^RESET%^%^C241%^, and %^RESET%^%^C102%^whetstones%^RESET%^%^C241%^, just to name a few.%^CRST%^",
        ({"fires", "furnaces"}): "%^RESET%^%^C241%^Large %^RESET%^%^C059%^d%^C060%^a%^C061%^r%^C059%^kst%^RESET%^%^C060%^e%^C061%^e%^RESET%^%^C059%^l f%^RESET%^%^C060%^u%^C061%^r%^C059%^n%^C060%^a%^C061%^c%^C060%^e%^RESET%^%^C059%^s %^RESET%^%^C241%^are fueled with %^RESET%^%^C094%^wood %^RESET%^%^C241%^and %^RESET%^%^C240%^coal%^RESET%^%^C241%^, %^RESET%^%^C144%^baffles %^RESET%^%^C241%^used to pump extra %^RESET%^%^C087%^air%^RESET%^%^C241%^ in at the base to increase the %^RESET%^%^C088%^h%^C124%^e%^C196%^a%^RESET%^%^C088%^t%^RESET%^%^C241%^ when needed.%^CRST%^",
        "anvils" : "%^RESET%^%^C241%^These %^RESET%^%^C059%^d%^C060%^a%^C061%^r%^RESET%^%^C060%^k%^RESET%^%^C059%^st%^RESET%^%^C061%^e%^C060%^e%^RESET%^%^C059%^l a%^RESET%^%^C060%^n%^C061%^v%^RESET%^%^C060%^i%^RESET%^%^C059%^ls %^RESET%^%^C241%^vary in shape and size. %^RESET%^%^C102%^Smithies %^RESET%^%^C241%^stand over them, pounding and shaping %^RESET%^%^C246%^m%^C247%^e%^C248%^t%^C247%^a%^C246%^l%^RESET%^%^C241%^.%^CRST%^",
    ]));
     set_exits(([
     "southwest" : ROOMS"tharis_armor",
      "northwest" : ROOMS"tharis_weapon"
   ]));
   
    set_smell("default","%^RESET%^%^C202%^The %^RESET%^%^C088%^o%^RESET%^%^C160%^p%^C196%^p%^C202%^r%^C208%^e%^C214%^s%^C208%^s%^C202%^i%^C196%^v%^C160%^e%^RESET%^%^C124%^ly hot air %^RESET%^%^C202%^is t%^RESET%^%^C208%^h%^C214%^i%^RESET%^%^C208%^c%^C202%^k with the s%^RESET%^%^C208%^c%^C214%^e%^C208%^n%^RESET%^%^C202%^t of %^RESET%^%^C220%^s%^RESET%^%^C221%^w%^C222%^e%^RESET%^%^C221%^a%^C220%^t, %^RESET%^%^C220%^o%^RESET%^%^C226%^i%^RESET%^%^C227%^l%^RESET%^%^C220%^s%^RESET%^%^C202%^. and %^RESET%^%^C220%^m%^RESET%^%^C226%^e%^C227%^t%^RESET%^%^C226%^a%^RESET%^%^C220%^l%^RESET%^%^C220%^.%^CRST%^");
    set_listen("default","%^RESET%^%^C088%^All a%^RESET%^%^C124%^r%^C160%^o%^C196%^u%^C124%^n%^RESET%^%^C088%^d you are the s%^RESET%^%^C124%^o%^C160%^u%^C196%^n%^RESET%^%^C124%^d%^RESET%^%^C088%^s of the f%^RESET%^%^C124%^o%^C196%^r%^C124%^g%^RESET%^%^C088%^e; s%^RESET%^%^C124%^m%^C160%^i%^C196%^t%^C208%^h%^RESET%^%^C196%^i%^C160%^%^e%^RESET%^%^C088%^s s%^RESET%^%^C124%^h%^C160%^o%^C208%^u%^C160%^t%^RESET%^%^C124%^i%^C160%^n%^RESET%^%^C088%^g and g%^RESET%^%^C124%^r%^C160%^u%^C208%^n%^RESET%^%^C202%^t%^C160%^i%^C124%^n%^RESET%^%^C088%^g, m%^RESET%^%^C124%^e%^C160%^t%^C124%^a%^RESET%^%^C088%^l c%^RESET%^%^C124%^l%^C160%^a%^C196%^n%^C208%^g%^C160%^i%^RESET%^%^C124%^n%^RESET%^%^C088%^g, and r%^RESET%^%^C124%^o%^C160%^a%^C196%^r%^C160%^i%^RESET%^%^C124%^n%^C088%^g f%^RESET%^%^C124%^u%^C160%^r%^C208%^n%^C202%^a%^C160%^c%^C124%^e%^RESET%^%^C088%^s.%^CRST%^%^CRST%^");
    
}