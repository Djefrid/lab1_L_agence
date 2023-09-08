#include <string>

class Vaiseau
{
private:
	int ValeurMarchande;

protected:
	int Attaque;
	int Defense;
	int Vie;
	int Capacite;
	std::string Nom;
	int Niveau;
	int Exp;

public:
	Vaiseau();
	Vaiseau(int valeurMarchande,int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	~Vaiseau();

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();
};
