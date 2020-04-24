#include "Mage.h"

Mage::Mage(string name, int maxHP, Weapon *weap, int maxMana) : Character(name, maxHP, weap)
{
	this->maxMana = maxMana;
}
