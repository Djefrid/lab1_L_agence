#include "Planete.h"
using namespace std;
#include <cstdbool>  


Planete::Planete( std::string nomPlanete, std::string coordPlanete, int taille, int distanceParRapA_Terre, std::string typeAtmosphere, bool explorer)
    : NomPlanete(nomPlanete), Taille(taille), DistanceParRapA_Terre(distanceParRapA_Terre), TypeAtmosphere(typeAtmosphere), CoordPlanete(coordPlanete), Explorer(explorer)
{
}

Planete::Planete(std::string nomPlanete, std::string coordPlanete, bool explorer)
    : NomPlanete(nomPlanete), CoordPlanete(coordPlanete), Taille(656556), DistanceParRapA_Terre(45645), TypeAtmosphere("h2o"), Explorer(explorer)
{
}

Planete::~Planete()
{

}

bool Planete::VerifierPlanete(Mission mission)
{
    if (mission.Destination != CoordPlanete)
        Explorer = false;
    else
        Explorer = true;

    return Explorer;
}

bool Planete::VerifierPlanete(bool explorer)
{
    return explorer;
}

std::string Planete::ToString() const
{
    return "\nNom : " + NomPlanete + "\nTaille : " + std::to_string(Taille) + "\nDistance par rapport avec la terre : " + std::to_string(DistanceParRapA_Terre) + "\nType d'atmosphère : " + TypeAtmosphere;
}

