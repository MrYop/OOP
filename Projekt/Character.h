#pragma once
#include <string>
#include "Weapon.h"
using namespace std;
class Character
{
private:
	static int charactersCount; // statick� prom�nn� - data a metody deklarovan� jako �static� pat�� t��d�.
	Weapon* weap;
	string name;
	//int level;
protected:
	Character(string name, int maxHP); // nelze vytvo�it instanci t�to t��dy
	Character(string name, int maxHP, Weapon* weap);
	~Character();
	int maxHP; // pou�it� ve Warrior.cpp
	int level;
public:
	static int GetCharactersCount();
	string GetName();
	virtual string GetMaxHP(); // polymorfismus
	string DealDamage(Character* enemy);
};