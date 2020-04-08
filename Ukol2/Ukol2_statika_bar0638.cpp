// Ukol2_statika_bar0638.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "StaticValue.h"
#include "Client.h"
#include "Account.h"

using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    cout << StaticValue::GetValue() << endl;
    StaticValue::IncValue();
    cout << StaticValue::GetValue() << endl;

    StaticValue* sv = new StaticValue();
    cout << sv->GetValue() << endl;

    //Client
    cout << "clients: " << Client::GetObjectsCount() << endl;
    Client* kl1 = new Client(1, "jmeno1");
    cout << "clients: " << Client::GetObjectsCount() << endl;
    cout << "clients: " << kl1->GetObjectsCount() << endl;
    kl1->~Client();
    cout << "clients: " << Client::GetObjectsCount() << endl;

    //Account
    cout << "accounts: " << Account::GetObjectsCounter() << endl;
    Account* uc1 = new Account(1, kl1);
    cout << "accounts: " << Account::GetObjectsCounter() << endl;
    cout << "accounts: " << uc1->GetObjectsCounter() << endl;

    cout << "interest rate: " << Account::GetInterestRate() << endl;
    cout << "interest rate: " << uc1->GetInterestRate() << endl;
    Account::SetInterestRate(0.002);
    //uc1->SetInterestRate(0.002);
    cout << "interest rate: " << Account::GetInterestRate() << endl;
    cout << "interest rate: " << uc1->GetInterestRate() << endl;

    uc1->~Account();
    cout << "accounts: " << Account::GetObjectsCounter() << endl;

    getchar();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
