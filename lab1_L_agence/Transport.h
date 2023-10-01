#pragma once
#include "Vaiseau.h"

class Transport : public Vaiseau
{
public:
	Transport();
	Transport(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	Transport(Faction* faction);
	~Transport();

	virtual std::string to_string();
};

