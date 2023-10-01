#pragma once
#include "Vaiseau.h"

class Livraison: public Vaiseau
{
public:
	Livraison();
	Livraison(Faction* _faction);
	Livraison(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	~Livraison();

	virtual std::string to_string();
};

