#include "L_agence.h"
#include <iostream>
#include "MonException.h"
#include <exception>
using namespace std;


L_agence::L_agence()
{
    Vaisseaus.push_back(Transport("v1", 8888954, StatutVaisseau::terre));
    Vaisseaus.push_back(Livraison("v2", 46874, StatutVaisseau::terre));
    Vaisseaus.push_back(Guerre("v3", 5765652, StatutVaisseau::terre));

    Missions.push_back(Mission("jupiter", "05-11-2023", "m1"));
    Missions.push_back(Mission("mars", "05-10-2023", "m2"));
    Missions.push_back(Mission("saturne", "05-06-2023", "m3"));
    Missions.push_back(Mission("saturne", "05-06-2023", "m4"));

    Planetes.push_back(Planete("jupiter", "jupiter"));
    Planetes.push_back(Planete("mars", "mars"));
    Planetes.push_back(Planete("saturne", "saturne", true));
    Planetes.push_back(Planete("neptune", "neptune"));
}

L_agence::~L_agence()
{
}

void L_agence::AddVaisseau(Vaisseau vaisseau)
{
    Vaisseaus.push_back(vaisseau);
}

void L_agence::AddMission(Mission mission)
{
    Missions.push_back(mission);
}

void L_agence::AddPlanete(Planete planete)
{
    Planetes.push_back(planete);
}

void L_agence::AfficherVaisseau()
{
    for (auto vaisseau : Vaisseaus)
        std::cout << vaisseau.to_string() << std::endl;
}

void L_agence::AfficherMission()
{
    for ( auto mission : Missions)
        std::cout << mission.ToString() << std::endl;
}

void L_agence::AfficherPlanete()
{
    for (auto it = Planetes.begin(); it != Planetes.end(); it++)
        std::cout << (*it).ToString()<< std::endl;
}

void L_agence::PlanifierMission(Vaisseau vaisseau, Mission mission)
{
    vaisseau.Decollage(mission);
}


void L_agence::Lancement(Vaisseau vaisseau, Planete planete)
{
    try
    {
        if (vaisseau.getMissions().empty())
            throw MonException("Le vaisseau ne peut pas être lancé car il n'a aucune mission planifiée.");
        else if (planete.Explorer)
            throw MonException("Le vaisseau ne peut pas être lancé car la planète a déjà été explorée.");
        else
        {
            planete.Explorer = true;
            std::cout << "Le vaisseau a été lancé avec succès" << std::endl;
        }
    }
    catch (MonException monEx)
    {
        std::cout << monEx.what() << std::endl;
    }
}

void L_agence::Lancement(Vaisseau vaisseau)
{
    try
    {
        if (vaisseau.getMissions().empty())
            throw MonException("Le vaisseau ne peut pas être lancé car il n'a aucune mission planifiée.");
        else
            std::cout << "Le vaisseau a été lancé avec succès" << std::endl;
    }
    catch (const MonException& monEx)
    {
        std::cout << monEx.what() << std::endl; // Utilisez `what()` pour accéder au message d'exception.
    }
}



void L_agence::VerifierPlanete(Planete planete)
{
    if (planete.VerifierPlanete(planete.Explorer))
        std::cout << "La planète a déjà été explorée" << std::endl;
    else
        std::cout << "La planète n'a pas encore été explorée" << std::endl;
}
