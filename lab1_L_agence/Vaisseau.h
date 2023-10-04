#pragma once
#include "Mission.h"
#include <string>
#include <vector>

using std::vector;

enum StatutVaisseau
{
	orbite,
	terre
};

class Faction;

class Vaisseau
{
protected:
	int Attaque;
	int Defense;
	int Vie;
	int Capacite;
	std::string Nom;
	int Niveau;
	int Exp;
	int ValeurMarchande;
	int VitesseAct;
	int VitesseMax;
	Faction* _faction;
	StatutVaisseau StatutVaisseaus;
	vector<Mission> Missions;

public:
	Vaisseau();
	Vaisseau(int valeurMarchande,int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	Vaisseau(std::string nom, int capacite, StatutVaisseau statutVaisseaus);
	Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int VitesseAct,int VitesseMax, StatutVaisseau statutVaisseaus, vector<Mission> missions);
	Vaisseau(Faction* faction);
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();
	StatutVaisseau getStatutVaisseau();
	vector<Mission> getMissions();
	void Decollage(Mission mission);
	void addMission(Mission mission);
	void ChangerVitesse(int nouvelleVitesse);


	virtual std::string to_string();
};
