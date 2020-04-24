#pragma once
#include "Character.h"

class Mage : public Character
{
private:
	int maxMana;
public:
	Mage(string name, int maxHP, Weapon *weap, int maxMana);
};