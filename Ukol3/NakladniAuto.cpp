#include "NakladniAuto.h"

NakladniAuto::~NakladniAuto()
{
}

NakladniAuto::NakladniAuto(int vin, int napravy, int tonaz) : Vozidlo(vin)
{
	this->pocetnaprav = napravy;
	this->tonaz = tonaz;
}

int NakladniAuto::GetPocetNaprav()
{
	return pocetnaprav;
}

int NakladniAuto::GetTonaz()
{
	return tonaz;
}
