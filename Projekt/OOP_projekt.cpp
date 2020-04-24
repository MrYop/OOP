// OOP_projekt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Warrior.h"
#include "Mage.h"
#include "LongSword.h"
#include "MagicWand.h"
#include <time.h>

/* Character - předek, static počet vytvořených potomků (warriorů a magů) a get metodu, pomocí konstruktoru a destruktoru = statické proměnné (patří třídě)
           - konstruktor a destruktor private nebo protected, počet potomků = 0 v implementaci */

/* Vznik potomka
1. Volání konstruktoru objektu.
2. Volání konstruktoru předka.
3. Vykonání konstruktoru předka.
4. Vykonání konstruktoru objektu. */

/* Dědičnost - Znovu-použitelnost a Rozšiřitelnost x Skladání - vztah má
Dědičností docílíme toho, že nová třída je rozšířením nebo speciálním případem existující třídy (nebo více tříd).
• Jedná se o vztah „JE“ */

/* Polymorfismus je schopnost objektu vystupovat v různých rolích (formách)… 
…a podle toho se chovat.*/

/* Overriding - Překrytím rozumíme situaci, kdy metoda potomka má stejnou deklaraci, jako metoda předka (stejnou signaturu).
Potomek dědí i metodu předka. Má tedy dvě metody se stejnou deklarací. Typickým příkladem použití překrytí je opravdová změna chování potomka. */

/* Overloading - Přetížením rozumíme situaci, kdy daná metoda má stejné jméno, ale má:
• jiné parametry,
• jiné typy parametrů,
• Jiný typ návratové hodnoty. (ne v C++)
• Přetížení není změna chování, a to i přesto, že metoda má stejné jméno. Typickým příkladem použití přetížení jsou konstruktory. */

/* Statické proměnné - Třída jako objekt 
Objektově orientovaný přístup obecně vychází z předpokladu, že „všechno je objekt“. Objekty mají svůj stav a chování. 
• Stav je reprezentován daty.
• Chování je reprezentováno metodami.
• Musí být splněno zapouzdření a skrývání informace.
• Třídě se musí dát zaslat zpráva (zavolat její metodu). */

/* Objektová kompozice je v informatice způsob, jak v objektově orientovaném programování kombinovat jednoduché objekty 
nebo typy dat do složitějších. */

using namespace std;

int main()
{
	// initialize random seedu
	srand(time(NULL));

	cout << "***** Dark Souls 5 *****" << endl;
	LongSword* sword = new LongSword("long sword", 100, 100);
	MagicWand* wand = new MagicWand("magic wand", 300, 50, 300);
	// overloading = přetížení -> rozšíření metody, různé parametry, různý počet parametrů
	sword->Upgrade(150);
	wand->Upgrade();

	// statické proměnné
	//Character *chara = new Character("chara", 1);
	cout << "Number of players: " << Character::GetCharactersCount() << endl;
	Warrior* player1 = new Warrior("player1", 1000, sword, 500);
	Mage* player2 = new Mage("player2", 500, wand, 200);
	cout << "Number of players: " << Character::GetCharactersCount() << endl;

	// overriding = překrytí -> změna chování, Warrior má vlastní implementaci metody GetName
	cout << player1->GetName() << endl;
	//cout << Character::GetName() << endl;

	// polymorfismus
	Character* character1 = player1; // polymorfní přiřazení - zdroj přiřazení je jiného typu než cíl přiřazení
	cout << player1->DealDamage(player2) << endl;
	cout << character1->DealDamage(player2) << endl;
	cout << player2->DealDamage(player1) << endl;

	character1 = nullptr;
	delete player1;
	delete player2;
	cout << "\nNumber of players: " << Character::GetCharactersCount() << endl;
	delete sword;
	delete wand;
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
