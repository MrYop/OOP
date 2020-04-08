#include "Client.h"
int Client::objectsCount = 0;

Client::Client(int c, string n)
{
	this->code = c;
	this->name = n;
	Client::objectsCount++;
}

Client::~Client()
{
	Client::objectsCount--;
}

int Client::GetObjectsCount()
{
	return Client::objectsCount;
}

int Client::GetCode()
{
	return Client::code;
}

string Client::GetName()
{
	return Client::name;
}