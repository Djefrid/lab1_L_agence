#pragma once
#include "Vaiseau.h"
#include <vector>

using std::vector;

class Station
{
private:
	int _platinumDisponible;
	int _vieStation;

	vector<Vaiseau*> vecVaisseau;

public:
	Station();
	~Station();

	vector<Vaiseau*> getVaisseauDispo();
	void init();
	void ajouterVaisseau(Vaiseau* Vaisseau);
};

