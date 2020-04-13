#include "Bank.h"

Bank::Bank(int c, int a)
{
	this->clientsCount = c;
	this->accountsCount = a;
	this->clients = new Client*[c];
	this->accounts = new Account*[a];
}

Bank::~Bank()
{
	delete& clientsCount;
	delete& accountsCount;
	delete[] this->clients;
	delete[] this->accounts;
	this->clients = nullptr;
	this->accounts = nullptr;
}

Client* Bank::GetClient(int c)
{
	return &(*this->clients[c]);
}

Account* Bank::GetAccount(int n)
{
	return &(*this->accounts[n]);
}

Client* Bank::CreateClient(int c, string n)
{
	//return new Client(c, n);
	return this->clients[c] = new Client(c, n);
}

Account* Bank::CreateAccount(int n, Client* c)
{
	return this->accounts[n] = new Account(n, c);
}

Account* Bank::CreateAccount(int n, Client* c, double ir)
{
	return this->accounts[n] = new Account(n, c, ir);
}

PartnerAccount* Bank::CreateAccount(int n, Client* c, Client* p)
{
	//return this->accounts[n] = new PartnerAccount(n, c, p);
	return new PartnerAccount(n, c, p);
}

PartnerAccount* Bank::CreateAccount(int n, Client* c, Client* p, double ir)
{
	//return this->accounts[n] = new PartnerAccount(n, c, p, ir);
	return new PartnerAccount(n, c, p, ir);
}

void Bank::AddInterest()
{
	for (int i = 1; i <= this->accountsCount; i++)
	{
		//if (i == &(*accounts)->GetNumber) (*accounts)->AddInterest();
		//if(accounts[i]->GetNumber() != NULL)
		if (&accounts[i] != nullptr)
			accounts[i]->AddInterest();
	}
}