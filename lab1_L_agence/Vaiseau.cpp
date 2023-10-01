#include "Vaiseau.h"
#include "Faction.h"

Vaiseau::Vaiseau()
{
}

Vaiseau::Vaiseau(int valeurMarchande,int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp)
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

Vaiseau::Vaiseau(Faction* faction)
{
	    
}


int Vaiseau::getAtt()
{
	return Attaque + _faction->Attaque;
}

int Vaiseau::getDef()
{
	return Defense + _faction->Defense;
}

int Vaiseau::getVie()
{
	return Vie + _faction->Vie;
}

Vaiseau::~Vaiseau()
{

}


std::string Vaiseau::to_string()
{
	std::string info = "";
	info.append("Nom : " + Nom + "\n");
	info.append("Valeur marchande : " + std::to_string(this->ValeurMarchande) + "\n");
	info.append("Attaque : " + std::to_string(this->Attaque) + "\n");
	info.append("Defense : " + std::to_string(this->Defense) + "\n");
	info.append("Vie : " + std::to_string(this->Vie) + "\n");
	info.append("Exp : " + std::to_string(this->Exp) + "\n");
	
	return info;
}