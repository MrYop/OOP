#pragma once
#include "Weapon.h"
class LongSword : public Weapon
{
private:
	int sharpness;
public:
	LongSword(string name, int damage, int sharpness);
	LongSword(string name, int damage, int lifespan, int sharpness);
	void IncreaseSharpness(double timeofsharpening);
	int GetSharpness();
};

