
#include "Livraison.h"

Livraison::Livraison(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp):Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
{

}

Livraison::Livraison(std::string nom, int capacite, StatutVaisseau statutVaisseaus) :Vaisseau(nom, capacite, statutVaisseaus)
{
}

Livraison::Livraison(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int VitesseAct, int VitesseMax, StatutVaisseau statutVaisseaus, vector<Mission> missions) 
	: Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp, VitesseAct, VitesseMax, statutVaisseaus, missions)
{
}

Livraison::Livraison() :Vaisseau(5000, 30, 25, 5, 30, "Satan 2", 3, 10)
{

}

Livraison::Livraison(Faction* faction)
{
	_faction = faction;
	Nom = "**** vaisseau de livraison ****";
	Attaque = 30;
	Defense = 10;
	Vie = 5;
	Capacite = 40;
	Niveau = 1;
	Exp = 2;
	ValeurMarchande = 3;
}

Livraison::~Livraison()
{

}

std::string Livraison::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("--- je suis un vaiseau de livraison ---\n");
	return info;
}
