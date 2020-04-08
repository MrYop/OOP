#include "Bank.h"
Bank::Bank(int c, int a)
{
	this->clientsCount = c;
	this->accountsCount = a;
}

Bank::~Bank()
{
	delete& clientsCount;
	delete& accountsCount;
	delete[] clients;
	delete[] accounts;
}

Client* Bank::GetClient(int c)
{
	/*for (int i = 1; i <= this->clientsCount; i++)
	{
		//if (i == c) return *(*accounts)->GetOwner;
		//if(c == *(*clients)->GetCode)
		if (c == clients[i]->GetCode()) return &(*clients[i]);
	}
	return nullptr;*/

	if(&(*clients[c]) != nullptr)
		return &(*clients[c]);
}

Account* Bank::GetAccount(int n)
{
	/*for (int i = 1; i <= this->accountsCount; i++)
	{
		//if (i == n) return *(*clients)->GetName;
		//if (i == *(*accounts)->GetNumber) return;
		if (n == accounts[i]->GetNumber()) return &(*accounts[i]);
	}
	return nulptr;*/
	if (&(*accounts[n]) != nullptr)
		return &(*accounts[n]);
}

Client* Bank::CreateClient(int c, string n)
{
	return new Client(c, n);
}

Account* Bank::CreateAccount(int n, Client* c)
{
	return new Account(n, c);
}

Account* Bank::CreateAccount(int n, Client* c, double ir)
{
	return new Account(n, c, ir);
}

Account* Bank::CreateAccount(int n, Client* c, Client* p)
{
	return new Account(n, c, p);
}

Account* Bank::CreateAccount(int n, Client* c, Client* p, double ir)
{
	return new Account(n, c, p, ir);
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