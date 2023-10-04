#pragma once
#include "Guerre.h"
Guerre::Guerre(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp) :Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
{

}

Guerre::Guerre(std::string nom, int capacite, StatutVaisseau statutVaisseaus) :Vaisseau( nom, capacite, statutVaisseaus)
{
}

Guerre::Guerre(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int VitesseAct, int VitesseMax, StatutVaisseau statutVaisseaus, vector<Mission> missions) 
	: Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau,exp, VitesseAct, VitesseMax, statutVaisseaus,  missions)
{
}

Guerre::Guerre() :Vaisseau(100000, 400, 66, 46, 100, "Satan 2", 20, 50)
{

}

Guerre::Guerre(Faction* faction):Vaisseau()
{
	_faction = faction;
	Nom = "**** vaisseau de Guerre";
	Attaque = 65;
	Defense = 20;
	Vie = 15;
	Capacite = 90;
	Niveau = 6;
	Exp = 2;
	ValeurMarchande = 10;
}

Guerre::~Guerre()
{

}

std::string Guerre::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("--- je suis un vaiseau de guerre ---\n");
	return info;
}
