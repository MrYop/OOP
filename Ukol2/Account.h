#pragma once
#include "Client.h"

class Account
{
private:
    static int objectsCounter;
    int number = NULL;
    double balance;
    static double interestRate;

    Client* owner;
    Client* partner;
public:
    static int GetObjectsCounter();
    static double GetInterestRate();
    static void SetInterestRate(double ir);

    Account(int n, Client* c);
    Account(int n, Client* c, double ir);
    Account(int n, Client* c, Client* p);
    Account(int n, Client* c, Client* p, double ir);
    ~Account();
};