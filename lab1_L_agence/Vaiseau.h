#pragma once
#include <string>

class Faction;

class Vaiseau
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
	Faction* _faction;

public:
	Vaiseau();
	Vaiseau(int valeurMarchande,int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	Vaiseau(Faction* faction);
	~Vaiseau();

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();
};
