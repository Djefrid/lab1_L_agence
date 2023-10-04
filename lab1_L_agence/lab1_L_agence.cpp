#include <iostream>

#include "Guerre.h"
#include "Livraison.h"
#include "Transport.h"
#include "Faction.h"
#include <ctime>
#include "FactoryVaisseau.h"
#include "Station.h"
#include "L_agence.h"

#include <string>
using std::cout;
using std::endl;


int main()
{
    srand(time(NULL));
    cout << "Hello World!\n";  
    Livraison* monVaiseau2 = new Livraison(5000, 30, 25, 5, 30, "Satan 2", 3, 10);
    cout << monVaiseau2->to_string();
    
    Guerre* monVaiseau1 = new Guerre(100000, 400, 66, 46, 100, "Satan 2", 20, 50);
    cout << monVaiseau1->to_string();
    delete monVaiseau1;

    Transport* monVaiseau = new Transport(50000, 50, 35, 10, 80, "GMC", 6, 20);
    cout << monVaiseau->to_string();
    delete monVaiseau;
    
  
    delete monVaiseau2;

    cout << endl << "********************************************************" << endl;
    cout << "***** production d'un vaisseau *****" << endl;
    Vaisseau* monVaisseau4 = FactoryVaisseau::getRanddomVaisseau();
    cout << monVaisseau4->to_string();

    delete monVaisseau4;

    cout << endl << "********************************************************" << endl;
    cout << "***** production d'un vaisseau par la station *****" << endl;
    Station mastation;
    mastation.init();
    
    for (auto item : mastation.getVaisseauDispo())
       cout << item->to_string();
    
    L_agence monAgence;
    cout << "**************** Afficher Mission ******************" << endl;
    monAgence.AfficherMission();
    cout << "****************** AfficherPlanete ****************" << endl;
    monAgence.AfficherPlanete();
    cout << "******************* AfficherVaisseau ***************" << endl;
    monAgence.AfficherVaisseau();

    cout << "***************** lancement de vaiseau *****************" << endl;
    Transport monVaiseaux = Transport(50000, 50, 35, 10, 80, "GMC", 6, 20);
    Mission maMission = Mission("jupiter", "05-11-2023", "m1");
    monVaiseaux.addMission(maMission);
    monAgence.Lancement(monVaiseaux);
    
    
    
    
    
    
    
    
    
}   