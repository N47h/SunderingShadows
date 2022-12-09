#include <std.h>
#include <magic.h>
inherit SPELL;

string ashort;
int cond_test=0;
int lastattack;

void effect(int direction)
{
    if(direction>0)
    {
        caster->set_property("flying",1);
        caster->set_property("angelic_aspect",1);
    }
    else
    {
        caster->set_property("flying", -1);
        caster->remove_property("angelic_aspect");

    }

    caster->add_ac_bonus(2*direction);
    caster->set_property("endurance",(clevel/10)*direction);
    caster->set_resistance("cold",10*direction);
    caster->set_resistance("acid",10*direction);

    return;
}

void create(){
    ::create();
    set_spell_name("angelic aspect");
    set_spell_level(([ "cleric" : 5, "paladin" : 3, "mage" : 5, "magus" : 5 ]));
    set_spell_sphere("alteration");
    set_bonus_type("deflection");
    set_syntax("cast CLASS angelic aspect");
    set_damage_desc("levitating, AC2, 10 DR to Acid and Cold");
    set_description("You take on an aspect of an angelic being, including some of its physical characteristics.");
    set_verbal_comp();
    set_somatic_comp();
    set_helpful_spell(1);
}

int preSpell()
{
    /*
    if(caster->query_property("angelic_aspect"))
    {
        tell_object(caster,"%^BOLD%^%^WHITE%^You're already infused with this aspect.%^RESET%^");
        return 0;
    }
    */
    return 1;
}

string query_cast_string()
{
    return "%^BOLD%^%^WHITE%^"+caster->QCN+" raises above the ground as "+caster->QS+" chants the spell.";
}

void spell_effect()
{

    int align = caster->query_true_align();

    ashort = "%^RESET%^%^ORANGE%^ (%^WHITE%^%^BOLD%^tr%^ORANGE%^a%^WHITE%^iled by fe%^RESET%^%^ORANGE%^a%^BOLD%^th%^RESET%^e%^ORANGE%^r%^BOLD%^%^WHITE%^ed w%^RESET%^i%^ORANGE%^n%^BOLD%^%^WHITE%^g%^ORANGE%^s%^RESET%^%^ORANGE%^)";

    if( align == 2 || align == 5 || align == 8)
        ashort = " %^RESET%^(%^CYAN%^tr%^BOLD%^ai%^RESET%^%^CYAN%^l%^BOLD%^e%^RESET%^%^CYAN%^d b%^BOLD%^y e%^RESET%^%^CYAN%^th%^BOLD%^e%^RESET%^%^CYAN%^r%^BOLD%^ea%^RESET%^%^CYAN%^l w%^BOLD%^i%^RESET%^%^CYAN%^ngs%^WHITE%^)";
    else if(!(align%3))
        ashort = "%^RESET%^%^BOLD%^%^MAGENTA%^ (%^BOLD%^%^BLACK%^t%^RESET%^%^MAGENTA%^ra%^BOLD%^%^BLACK%^i%^RESET%^%^MAGENTA%^le%^BOLD%^%^BLACK%^d by %^RESET%^%^MAGENTA%^bl%^BOLD%^%^BLACK%^ack %^RESET%^%^MAGENTA%^w%^BOLD%^%^BLACK%^in%^RESET%^%^MAGENTA%^g%^BOLD%^%^BLACK%^s%^RESET%^%^BOLD%^%^MAGENTA%^)%^RESET%^";

    tell_room(ENV(caster),"%^BOLD%^%^WHITE%^As "+caster->QCN+" finishes the chant, feathery "+(!(caster->query_true_align()%3)?"%^BLACK%^black%^WHITE%^":"white")+" wings sprout from "+caster->QP+" shoulders!%^RESET%^");

    effect(1);
    spell_successful();
    caster->set_property("added short",({ashort}));
    caster->set_property("spelled", ({TO}) );
    addSpellToCaster();
    spell_duration = (1 + clevel / 5) * 60;
    set_end_time();
    call_out("dest_effect", spell_duration);
}

void dest_effect()
{
    if(objectp(caster))
    {
        caster->remove_property_value("added short",({ashort}));
        tell_object(caster,"%^BOLD%^%^WHITE%^You feel your mortality return as your angelic aspect fades.");
        tell_room(ENV(caster),"%^BOLD%^%^WHITE%^The ethereal wings that trailed "+caster->QCN+" fade.%^RESET%^");
        effect(-1);
    }
    ::dest_effect();
    if(objectp(TO))
        TO->remove();
}
