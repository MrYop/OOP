// DU1-BAR0638.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <string>
#include "Bank.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    Bank *banka = new Bank(5, 10);
    Client *klient1 = banka->CreateClient(1, "jmeno1");
    Client *klient2 = banka->CreateClient(2, "jmeno2");

    cout << klient1->GetName() << endl;
    cout << klient2->GetCode() << endl;
    getchar();

    banka->CreateAccount(1, klient1, klient2, 0.002);
    cout << banka->GetClient(1)->GetName() << endl;
    cout << banka->GetClient(2)->GetCode() << endl;

    /*klient1->~Client();
    klient2->~Client();
    banka->~Bank();*/
    return 0;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.