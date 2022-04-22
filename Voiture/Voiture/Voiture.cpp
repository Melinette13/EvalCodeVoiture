// Voiture.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Personne.h"
#include "ListOfVroum.h"
#include "Color.h"
#include <iostream>
using namespace std;

int main()
{
    
   
    cout << "============Axel=============\n";
    Personne Axel = Personne("Axel", " un Homme ", 7251, 0);
    Axel.DisplaySumUp();

    cout << "============Xion=============\n";
    Personne Xion = Personne("Xion", "une Femme ", 5432, 1);
    Xion.DisplaySumUp();

    ListOfVroum Peugot208 = ListOfVroum("Peugeot208", "GH-455-FG", 1263, Color::Red);

    
}



