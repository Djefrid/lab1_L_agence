#include "Vaisseau.h"
#include "Faction.h"
#include <iostream>
using namespace std;

Vaisseau::Vaisseau()
{
}

Vaisseau::Vaisseau(int valeurMarchande,int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp)
{
	ValeurMarchande = valeurMarchande;
	Attaque = attaque;
	Defense = defense;
	Vie = vie;
	Capacite = capacite;
	Nom = nom;
	Niveau = niveau;
	Exp = exp;
}

Vaisseau::Vaisseau(string nom, int capacite, StatutVaisseau statutVaisseaus)
{
	Capacite = capacite;
	StatutVaisseaus = statutVaisseaus;
	Nom = nom;
}

Vaisseau::Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int vitesseAct, int vitesseMax, StatutVaisseau statutVaisseaus, vector<Mission> missions)
{
	ValeurMarchande = valeurMarchande;
	Attaque = attaque;
	Defense = defense;
	Vie = vie;
	Capacite = capacite;
	Nom = nom;
	Niveau = niveau;
	Exp = exp;
	VitesseAct = vitesseAct;
	VitesseMax = vitesseMax;
	StatutVaisseaus = statutVaisseaus;
	Missions = missions;
}



Vaisseau::Vaisseau(Faction* faction)
{
	    
}


int Vaisseau::getAtt()
{
	return Attaque + _faction->Attaque;
}

int Vaisseau::getDef()
{
	return Defense + _faction->Defense;
}

int Vaisseau::getVie()
{
	return Vie + _faction->Vie;
}

StatutVaisseau Vaisseau::getStatutVaisseau()
{
	return StatutVaisseaus;
}

vector<Mission> Vaisseau::getMissions()
{
	return Missions;
}

void Vaisseau::Decollage(Mission mission)
{
	if (StatutVaisseaus == StatutVaisseau::orbite)
		std::cout << "Le vaisseau est déjà en orbite";
	else
	{
		StatutVaisseaus == StatutVaisseau::orbite;
		Mission nvMission = mission;
		Missions.push_back(nvMission);
	}
}

void Vaisseau::addMission(Mission mission)
{
	Missions.push_back(mission);
}

void Vaisseau::ChangerVitesse(int nouvelleVitesse)
{
	if (nouvelleVitesse > VitesseMax)
		std::cout << "La vitesse demandée dépasse la vitesse maximale du vaisseau";
	else
		VitesseAct = nouvelleVitesse;
}


Vaisseau::~Vaisseau()
{

}


std::string Vaisseau::to_string()
{
	std::string info = "";
	info.append("Nom : " + Nom + "\n");
	info.append("Valeur marchande : " + std::to_string(this->ValeurMarchande) + "\n");
	info.append("Attaque : " + std::to_string(this->Attaque) + "\n");
	info.append("Defense : " + std::to_string(this->Defense) + "\n");
	info.append("Vie : " + std::to_string(this->Vie) + "\n");
	info.append("Exp : " + std::to_string(this->Exp) + "\n");
	info.append("Vitesse actuelle : " + std::to_string(this->VitesseAct) + "\n");
	info.append("Vitesse Maximal : " + std::to_string(this->VitesseMax) + "\n");
	info.append("Statut : " + std::to_string(this->StatutVaisseaus) + "\n");

	if (Missions.empty())
	{
		info.append("Missions : ");
		for (int i = 0; i < Missions.size() ; i++)
		{
			info.append(Missions[i].ToString());
			if (i < Missions.size() - 1)
				info.append(", ");
		}
	}
	
	return info;
}