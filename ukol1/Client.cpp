#include "Client.h"
Client::Client(int c, string n)
{
	this->code = c;
	this->name = n;
}

Client::~Client()
{
	delete& name;
	delete& code;
}

int Client::GetCode()
{
	return this->code;
}

string Client::GetName()
{
	return this->name;
}