#include "Character.h"

int Character::charactersCount = 0;

Character::Character(string name, int maxHP)
{
	this->name = name;
	this->maxHP = maxHP;
	this->level = 1;
	Character::charactersCount += 1;
}

Character::Character(string name, int maxHP, Weapon* weap)
{
	this->name = name;
	this->maxHP = maxHP;
	this->level = 1;
	this->weap = weap;
	Character::charactersCount += 1;
}

Character::~Character()
{
	Character::charactersCount -= 1;
}

int Character::GetCharactersCount()
{
	return Character::charactersCount;
}

string Character::GetName()
{
	return this->name;
}

string Character::GetMaxHP()
{
	return this->name + "'s hp is " + to_string(this->maxHP);
}

string Character::DealDamage(Character* enemy)
{
	enemy->maxHP -= weap->GetDamage();
	return "*Deal damage* " + enemy->GetMaxHP(); // polymorfismus
}

