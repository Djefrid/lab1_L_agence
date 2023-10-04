#pragma once
#include "Vaisseau.h"
class FactoryVaisseau
{
public:
	static Vaisseau* getRanddomVaisseau();

private:
	static Faction* getRandomFaction();

};

