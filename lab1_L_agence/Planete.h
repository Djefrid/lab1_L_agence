#pragma once
#include <string>
#include "mission.h"


class Planete
{
public:
    std::string NomPlanete;
    int Taille;
    int DistanceParRapA_Terre;
    std::string TypeAtmosphere;
    std::string CoordPlanete;
    bool Explorer;

    Planete(std::string nomPlanete, std::string coordPlanete, int taille, int distanceParRapA_Terre, std::string typeAtmosphere, bool explorer = false);
    Planete(std::string nomPlanete, std::string coordPlanete, bool explorer = false);

    ~Planete();

    bool VerifierPlanete(Mission mission);
    bool VerifierPlanete(bool explorer);

    std::string ToString() const;
};

