#include "OsobniAuto.h"

OsobniAuto::~OsobniAuto()
{
}

OsobniAuto::OsobniAuto(int vin, int dvere, string model) : Vozidlo(vin)
{
	this->pocetdveri = dvere;
	this->model = model;
}

int OsobniAuto::GetPocetDveri()
{
	return this->pocetdveri;
}

string OsobniAuto::GetModel()
{
	return this->model;
}

int OsobniAuto::GetVIN()
{
	return VIN*1000;
}
