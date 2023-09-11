#pragma once
#include "Guerre.h"
Guerre::Guerre(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp) :Vaiseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
{

}

Guerre::Guerre() :Vaiseau(100000, 400, 66, 46, 100, "Satan 2", 20, 50)
{

}

Guerre::~Guerre()
{

}

std::string Guerre::to_string()
{
	std::string info = Vaiseau::to_string();
	info.append("--- je suis un vaiseau de guerre ---\n");
	return info;
}
