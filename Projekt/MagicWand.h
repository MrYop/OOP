#pragma once
#include "Weapon.h"
class MagicWand : public Weapon
{
private:
	int extraMana;
public:
	// overloading
	MagicWand(string name, int damage, int extraMana);
	MagicWand(string name, int damage, int lifespan, int extraMana);
};

