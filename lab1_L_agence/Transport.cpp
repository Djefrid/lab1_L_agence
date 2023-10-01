#pragma once
#include "Transport.h"

Transport::Transport(int valeurMarchande,int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp) :Vaiseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
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

Transport::Transport() :Vaiseau(50000, 50, 35, 10, 80, "GMC", 6, 20)
{

}

Transport::~Transport()
{

}

std::string Transport::to_string()
{
	std::string info = Vaiseau::to_string();
	info.append("--- je suis un vaiseau de transport ---\n");
	return info;
}
