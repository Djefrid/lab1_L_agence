#include "Station.h"
#include "FactoryVaisseau.h"

Station::Station()
{
}

Station::~Station()
{
}



vector<Vaiseau*> Station::getVaisseauDispo()
{
	return vecVaisseau;
}

void Station::init()
{
	for (int i = 0; i < 3; i++)
		vecVaisseau.push_back(FactoryVaisseau::getRanddomVaisseau());
}

void Station::ajouterVaisseau(Vaiseau* Vaisseau)
{
	vecVaisseau.push_back(Vaisseau);
}
