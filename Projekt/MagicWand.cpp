#include "MagicWand.h"

MagicWand::MagicWand(string name, int damage, int extraMana) : Weapon(name, damage)
{
	this->extraMana = extraMana;
}

MagicWand::MagicWand(string name, int damage, int lifespan, int extraMana) : Weapon(name, damage, lifespan)
{
	this->extraMana = extraMana;
}
