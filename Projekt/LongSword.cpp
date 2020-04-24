#include "LongSword.h"

LongSword::LongSword(string name, int damage, int sharpness) : Weapon(name, damage)
{
	this->sharpness = sharpness;
}

LongSword::LongSword(string name, int damage, int lifespan, int sharpness) : Weapon(name, damage, lifespan)
{
	this->sharpness = sharpness;
}

void LongSword::IncreaseSharpness(double timeofsharpening)
{
	if (timeofsharpening > 1)
	{
		sharpness = 100;
	}
	else sharpness = 80;
}

int LongSword::GetSharpness()
{
	return this->sharpness;
}
