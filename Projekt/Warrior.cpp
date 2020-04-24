#include "Warrior.h"

Warrior::Warrior(string name, int maxHp, Weapon *weap, int armor) : Character(name, maxHp, weap)
{
	this->armor = armor;
	this->maxHP += this->armor;
}

// overriding
string Warrior::GetName()
{
	return "Name of your warrior is " + Character::GetName();
}

// polymorfismus
string Warrior::GetMaxHP()
{
	return Character::GetName() + "'s warrior hp is " + to_string(this->maxHP);
}

