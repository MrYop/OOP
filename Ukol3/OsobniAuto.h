#pragma once
#include "Vozidlo.h"
#include "string"
using namespace std;
class OsobniAuto : public Vozidlo
{
private:
	string model;
	int pocetdveri;
public:
	~OsobniAuto();
	OsobniAuto(int vin, int dvere, string model);
	int GetPocetDveri();
	string GetModel();
	int GetVIN();
};

