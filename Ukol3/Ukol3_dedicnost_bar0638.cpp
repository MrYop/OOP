// Ukol3_dedicnost_bar0638.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bank.h"
#include "OsobniAuto.h"
#include "NakladniAuto.h"

int main()
{
    //std::cout << "Hello World!\n";
    
    /*Account* a;
    PartnerAccount* pa;
    pa = new PartnerAccount(0, new Client(0, "Smith"), new Client(1, "Jones"));
    a = pa;

    cout << a->GetOwner()->GetName() << endl;
    //cout << a->GetPartner()->GetName() << endl;

    cout << pa->GetPartner()->GetName() << endl;*/

    Account* a;
    PartnerAccount* pa;

    Bank* b = new Bank(10, 10);
    Client* o = b->CreateClient(0, "Smith");
    Client* p = b->CreateClient(1, "Jones");
    a = b->CreateAccount(0, o);
    pa = b->CreateAccount(1, o, p);

    cout << a->GetOwner()->GetName() << endl;
    cout << pa->GetPartner()->GetName() << endl;

    cout << b->GetClient(1)->GetName() << endl;
    //cout << b->GetClient(1)->GetPartner() << endl;

    /*****/
    OsobniAuto* skoda = new OsobniAuto(123, 5, "Octavia");
    cout << skoda->GetModel() << endl;
    cout << skoda->GetVIN() << endl;
    Vozidlo* tatra = new NakladniAuto(456, 3, 20);
    cout << tatra->GetVIN() << endl;

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
