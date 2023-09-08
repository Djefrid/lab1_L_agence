#include "Faction.h"
Faction::Faction(int att, int def, int vie, int capa)
{
	att = Attaque;
	def = Defense;
	vie = Vie;
	capa = Capacite;
}

Faction::~Faction()
{

}

std::string Faction::getNom()
{
	return Nom;
}

std::string Faction::to_string()
{
	std::string info;
	info.append("Nom : " + Nom + "\n");
	info.append("Attaque : " + std::to_string(this->Attaque) + "\n");
	info.append("Defense : " + std::to_string(this->Defense) + "\n");
	info.append("Vie : " + std::to_string(this->Vie) + "\n");

	return info;
}