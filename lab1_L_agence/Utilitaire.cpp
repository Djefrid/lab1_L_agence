#include "Utilitaire.h"
#include <ctime>
#include <stdlib.h>

Utilitaire::Utilitaire()
{
}

Utilitaire::~Utilitaire()
{
}

int Utilitaire::genererNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}
