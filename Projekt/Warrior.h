#pragma once
#include "Character.h"
class Warrior : public Character
{
private:
	int armor;
public:
	Warrior(string name, int maxHp, Weapon *weap, int armor);
	string GetName(); // overriding
	string GetMaxHP(); // polymorfismus
};
