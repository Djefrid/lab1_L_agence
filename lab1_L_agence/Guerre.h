#pragma once
#include "Vaiseau.h"

class Guerre: public Vaiseau
{
public:
	Guerre();
	Guerre(Faction* faction);
	Guerre(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	~Guerre();

	virtual std::string to_string();
};

