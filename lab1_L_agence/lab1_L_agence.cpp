// lab1_L_agence.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Guerre.h"
#include "Livraison.h"
#include "Transport.h"
#include "Faction.h"

int main()
{
    std::cout << "Hello World!\n";  
    Livraison* monVaiseau2 = new Livraison(5000, 30, 25, 5, 30, "Satan 2", 3, 10);
    std::cout << monVaiseau2->to_string();
    
    Guerre* monVaiseau1 = new Guerre(100000, 400, 66, 46, 100, "Satan 2", 20, 50);
    std::cout << monVaiseau1->to_string();
    delete monVaiseau1;

    Transport* monVaiseau = new Transport(50000, 50, 35, 10, 80, "GMC", 6, 20);
    std::cout << monVaiseau->to_string();
    delete monVaiseau;
    
  
    delete monVaiseau2;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
