#pragma once
#include "Transport.h"

Transport::Transport(int valeurMarchande,int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp) :Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
{
	
}

Transport::Transport(Faction* faction)
{
	_faction = faction;
	Nom = "**** vaisseau de transport ****";
	Attaque = 50;
	Defense = 20;
	Vie = 5;
	Capacite = 50;
	Niveau = 2;
	Exp = 1;
	ValeurMarchande = 5;
}

Transport::Transport(std::string nom, int capacite, StatutVaisseau statutVaisseaus) : Vaisseau(nom,  capacite, statutVaisseaus)
{

}

Transport::Transport(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int VitesseAct, int VitesseMax, StatutVaisseau statutVaisseaus, vector<Mission> missions) 
	: Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp, VitesseAct, VitesseMax, statutVaisseaus, missions)
{
}

Transport::Transport() :Vaisseau(50000, 50, 35, 10, 80, "GMC", 6, 20)
{

}

Transport::~Transport()
{

}

std::string Transport::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("--- je suis un vaiseau de transport ---\n");
	return info;
}
