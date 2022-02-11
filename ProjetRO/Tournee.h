#pragma once

#include "Ville.h"
#include <list>


class Tournee
{
public:
	Tournee();
	void Afficherville();
	~Tournee(); //Penser à free les villes avec un boucles for
	double calculeDistance(Ville* v1, Ville* v2);

private:
	list<Ville*> lireFichier(string nomFichier);
	list<Ville*> villes;
	double distance;
};

