#pragma once
#include <string>
using namespace std;
class Weapon
{
private:
	int attackDamage;
	int lifespan;
	string name;
public:
	// overloading
	Weapon(string name, int damage);
	Weapon(string name, int damage, int lifespan);
	bool Upgrade(int newdamage);
	bool Upgrade();
	bool Upgrade(int newdamage, int repair);

	int GetDamage();
	int GetLifespan();
	string GetWeaponName();
};