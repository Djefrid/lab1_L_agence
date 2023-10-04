#pragma once
#include <string>

class Vaisseau;

enum class StatutMission
{
    Planifiee,
    en_cour,
    terminee
};

class Mission
{
public:
    std::string NomMission;
    std::string Destination;
    std::string DateDepart;
    std::string DateD_arriver;
    StatutMission StatutMissions;

    Mission(std::string nomMission, std::string destination, std::string dateDepart, std::string dateD_arriver, StatutMission statutMission);
    Mission(std::string destination,  std::string dateDepart, std::string nomMission = "Exploration");
    ~Mission();


    void CompleterMission(Vaisseau vaisseau);
    std::string ToString();
};

