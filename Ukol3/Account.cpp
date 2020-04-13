#include "Account.h"
Account::Account(int n, Client* o)
{
	this->balance = 0;
	this->interestRate = 0;
	this->number = n;
	this->owner = o;
	//partner = NULL;
}

Account::Account(int n, Client* o, double ir)
{
	this->balance = 0;
	this->number = n;
	this->owner = o;
	this->interestRate = ir;
	//partner = NULL;
}

//Account::Account(int n, Client* c, Client* p)
//{
//	this->balance = 0;
//	this->interestRate = 0.001;
//	this->number = n;
//	owner = c;
//	partner = p;
//}
//
//Account::Account(int n, Client* c, Client* p, double ir)
//{
//	this->balance = 0;
//	this->number = n;
//	owner = c;
//	partner = p;
//	this->interestRate = ir;
//}

Account::~Account()
{
	delete& number;
	delete& balance;
	delete& interestRate;
	delete owner;
	//delete partner;
}

int Account::GetNumber()
{
	return this->number;
}

double Account::GetBalance()
{
	return this->balance;
}

double Account::GetInterestRate()
{
	return this->interestRate;
}

Client* Account::GetOwner()
{
	return owner;
}

//Client* Account::GetPartner()
//{
//	return partner;
//}

bool Account::CanWithdraw(double a)
{
	if (a > this->balance) return false;
	return true;
}

void Account::Deposit(double a)
{
	this->balance += a;
}

bool Account::Withdraw(double a)
{
	if (a > this->balance) return false;
	this->balance -= a;
	return true;
}

void Account::AddInterest()
{
	this->balance += balance * interestRate;
}