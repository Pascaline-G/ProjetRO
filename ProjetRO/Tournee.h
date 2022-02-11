#pragma once

#include "Ville.h"
#include <list>


class Tournee
{
public:
	Tournee();
	~Tournee(); //Penser à free les villes avec un boucles for

private:
	Ville* lireFichier(string nomFichier);
	list<Ville*> villes;
	double distance;
};

