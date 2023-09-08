#pragma once
#include "Vaiseau.h"
class Livraison: public Vaiseau
{
public:
	Livraison();
	Livraison(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	~Livraison();

	std::string to_string();
};

