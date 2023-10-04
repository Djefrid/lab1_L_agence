#pragma once
#include "Vaisseau.h"

class Guerre: public Vaisseau
{
public:
	Guerre();
	Guerre(Faction* faction);
	Guerre(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	Guerre(std::string nom, int capacite, StatutVaisseau statutVaisseaus);
	Guerre(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int VitesseAct, int VitesseMax, StatutVaisseau statutVaisseaus, vector<Mission> missions);
	~Guerre();

	virtual std::string to_string();
};

