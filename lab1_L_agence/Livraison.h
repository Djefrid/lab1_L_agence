#pragma once
#include "Vaisseau.h"

class Livraison: public Vaisseau
{
public:
	Livraison();
	Livraison(Faction* _faction);
	Livraison(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	Livraison(std::string nom, int capacite, StatutVaisseau statutVaisseaus);
	Livraison(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int VitesseAct, int VitesseMax, StatutVaisseau statutVaisseaus, vector<Mission> missions);
	~Livraison();

	virtual std::string to_string();
};

