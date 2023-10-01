#include "FactoryVaisseau.h"
#include "Guerre.h"
#include "Livraison.h"
#include "Transport.h"
#include "Faction.h"
#include "ctime"
#include "Utilitaire.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;

enum class TypeVaisseau
{
	Guerre,
	Livraison,
	Transport
};

enum class TypeFaction
{
	rouge,
	bleu
};

Vaiseau* FactoryVaisseau::getRanddomVaisseau()
{
	Vaiseau* vaiseau(0);

	Faction* mafaction = getRandomFaction();

	TypeVaisseau typeV = (TypeVaisseau)Utilitaire::genererNb(0, 2);
	if (typeV == TypeVaisseau::Guerre)
		vaiseau = new Guerre(mafaction);
	else if(typeV == TypeVaisseau::Transport)
		vaiseau = new Transport(mafaction);
	else
		vaiseau = new Livraison(mafaction);

	return vaiseau;
}

Faction* FactoryVaisseau::getRandomFaction()
{
	Faction* faction(0);

	TypeFaction fact = (TypeFaction)Utilitaire::genererNb(0, 1);

	if (fact == TypeFaction::rouge)
	{
		faction = new Faction(40, 25, 2, 6);
		cout << "type Faction : Rouge" << endl;
	}
	else
	{
		faction = new Faction(20, 15, 3, 5);
		cout << "type Faction : Bleu" << endl;
	}

	return faction;
}
