#pragma once
#include <string>
#include "Weapon.h"
using namespace std;
class Character
{
private:
	static int charactersCount; // statická promìnná - data a metody deklarovaná jako „static“ patøí tøídì.
	Weapon* weap;
	string name;
	//int level;
protected:
	Character(string name, int maxHP); // nelze vytvoøit instanci této tøídy
	Character(string name, int maxHP, Weapon* weap);
	~Character();
	int maxHP; // použití ve Warrior.cpp
	int level;
public:
	static int GetCharactersCount();
	string GetName();
	virtual string GetMaxHP(); // polymorfismus
	string DealDamage(Character* enemy);
};