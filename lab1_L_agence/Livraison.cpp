
#include "Livraison.h"

Livraison::Livraison(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp):Vaiseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
{

}

Livraison::Livraison() :Vaiseau(5000, 30, 25, 5, 30, "Satan 2", 3, 10)
{

}

Livraison::~Livraison()
{

}

std::string Livraison::to_string()
{
	std::string info = Vaiseau::to_string();
	info.append("--- je suis un vaiseau de livraison ---\n");
	return info;
}
