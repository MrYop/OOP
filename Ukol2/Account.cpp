#include "Account.h"
int Account::objectsCounter = 0;
double Account::interestRate = 0.001;

int Account::GetObjectsCounter()
{
	return Account::objectsCounter;
}

double Account::GetInterestRate()
{
	return Account::interestRate;
}

void Account::SetInterestRate(double ir)
{
	Account::interestRate = ir;
}

Account::Account(int n, Client* c)
{
	this->balance = 0;
	this->interestRate = 0.001;
	this->number = n;
	owner = c;
	partner = NULL;
	Account::objectsCounter++;
}

Account::Account(int n, Client* c, double ir)
{
	this->balance = 0;
	this->number = n;
	owner = c;
	this->interestRate = ir;
	partner = NULL;
	Account::objectsCounter++;
}

Account::Account(int n, Client* c, Client* p)
{
	this->balance = 0;
	this->interestRate = 0.001;
	this->number = n;
	owner = c;
	partner = p;
	Account::objectsCounter++;
}

Account::Account(int n, Client* c, Client* p, double ir)
{
	this->balance = 0;
	this->number = n;
	owner = c;
	partner = p;
	this->interestRate = ir;
	Account::objectsCounter++;
}

Account::~Account()
{
	Account::objectsCounter--;
}