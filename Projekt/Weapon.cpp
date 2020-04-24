#include "Weapon.h"
#include <stdlib.h>

// generate chance between 1 and 10:
int chance = rand() % 10 + 1;

Weapon::Weapon(string name, int damage)
{
	this->name = name;
	this->attackDamage = damage;
	this->lifespan = 100;
}

Weapon::Weapon(string name, int damage, int lifespan)
{
	this->name = name;
	this->attackDamage = damage;
	this->lifespan = lifespan;
}

bool Weapon::Upgrade(int newdamage)
{
	bool success = false;
	if (chance >= 8)
	{
		this->attackDamage = newdamage;
		success = true;
	}
	return success;
}

bool Weapon::Upgrade()
{
	bool success = false;
	if (chance >= 8)
	{
		this->lifespan = 100;
		success = true;
	}
	return success;
}

bool Weapon::Upgrade(int newdamage, int repair)
{
	bool success = false;
	if (chance >= 8)
	{
		this->attackDamage = newdamage;
		this->lifespan += repair;
		success = true;
	}
	return success;
}

int Weapon::GetDamage()
{
	return this->attackDamage;
}

int Weapon::GetLifespan()
{
	return this->lifespan;
}

string Weapon::GetWeaponName()
{
	return this->name;
}
