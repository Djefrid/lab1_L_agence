#pragma once
#include "Vaisseau.h"
#include <vector>

using std::vector;

class Station
{
private:
	int _platinumDisponible;
	int _vieStation;

	vector<Vaisseau*> vecVaisseau;

public:
	Station();
	~Station();

	vector<Vaisseau*> getVaisseauDispo();
	void init();
	void ajouterVaisseau(Vaisseau* Vaisseau);
};

