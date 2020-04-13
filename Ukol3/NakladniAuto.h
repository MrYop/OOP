#pragma once
#include "Vozidlo.h"
class NakladniAuto : public Vozidlo
{
private:
	int pocetnaprav;
	int tonaz;
public:
	~NakladniAuto();
	NakladniAuto(int vin, int napravy, int tonaz);
	int GetPocetNaprav();
	int GetTonaz();
};

