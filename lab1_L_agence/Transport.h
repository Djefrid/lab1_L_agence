#pragma once
#include "Vaisseau.h"

class Transport : public Vaisseau
{
public:
	Transport();
	Transport(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	Transport(Faction* faction);
	Transport(std::string nom, int capacite, StatutVaisseau statutVaisseaus);
	Transport(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int VitesseAct, int VitesseMax, StatutVaisseau statutVaisseaus, vector<Mission> missions);
	~Transport();

	virtual std::string to_string();
};

