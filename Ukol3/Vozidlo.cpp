#include "Vozidlo.h"

Vozidlo::Vozidlo(int vin)
{
	this->VIN = vin;
}

int Vozidlo::GetVIN()
{
	return this->VIN;
}

Vozidlo::~Vozidlo()
{
}
