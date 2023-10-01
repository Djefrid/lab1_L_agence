#pragma once
#include "Vaiseau.h"
class FactoryVaisseau
{
public:
	static Vaiseau* getRanddomVaisseau();

private:
	static Faction* getRandomFaction();

};

