#pragma once
#include "Guerre.h"
#include "Livraison.h"
#include "Transport.h"
#include "Planete.h" 
#include "monexception.h" 

class L_agence
{
public:
    std::vector<Vaisseau> Vaisseaus;
    std::vector<Mission> Missions;
    std::vector<Planete> Planetes;

    L_agence();
    ~L_agence();

    void AddVaisseau(Vaisseau vaisseau);
    void AddMission(Mission mission);
    void AddPlanete(Planete planete);
    void AfficherVaisseau() ;
    void AfficherMission();
    void AfficherPlanete();
    void PlanifierMission(Vaisseau vaisseau, Mission mission);
    void Lancement(Vaisseau vaisseau, Planete planete);
    void Lancement(Vaisseau vaisseau);
    void VerifierPlanete(Planete planete);
};


