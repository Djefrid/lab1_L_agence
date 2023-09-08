#pragma once
#include <string>
class Faction
{
protected:
	int Attaque;
	int Defense;
	int Vie;
	int Capacite;
	std::string Nom;

public:
	Faction();
	Faction(int att,int def,int vie,int capa);
	~Faction();

	std::string getNom();

	virtual std::string to_string();
};

