#include "Mission.h"
#include <iostream>
#include "Vaisseau.h"


void Mission::CompleterMission(Vaisseau vaisseau)
{
	if (vaisseau.getStatutVaisseau() == StatutVaisseau::orbite && StatutMissions != StatutMission::terminee)
	{
		StatutMissions = StatutMission::terminee;
		std::cout << "La mission est terminée" << std::endl;
	}
	else
	{
		std::cout << "La mission est : " << static_cast<int>(StatutMissions) << std::endl;
	}
}

Mission::Mission(std::string nomMission, std::string destination, std::string dateDepart, std::string dateD_arriver, StatutMission statutMission)
	: NomMission(nomMission), Destination(destination), DateDepart(dateDepart), DateD_arriver(dateD_arriver), StatutMissions(statutMission)
{
}

Mission::Mission(std::string destination, std::string dateDepart, std::string nomMission)
	: NomMission(nomMission), Destination(destination), DateDepart(dateDepart), DateD_arriver("Dans 3 jours"), StatutMissions(StatutMission::Planifiee)
{
}

Mission::~Mission()
{
}

std::string Mission::ToString()
{
	std::string info = "";
	info.append("\nNom : " + NomMission + "\nDestination : " + Destination + "\nStatut Missions : ");
	
	if (StatutMissions == StatutMission::en_cour)
		info.append("en cour, ");
	if (StatutMissions == StatutMission::Planifiee)
		info.append("Planifiée, ");
	if (StatutMissions == StatutMission::terminee)
		info.append("terminee, ");


	return  info;
}