#pragma once

#include <string>
using namespace std;
/**
 *	Classe représentant les villes à parcourir
 */

class Ville 
{
public:
	Ville(string nom, int num, double longi, double lati);
	~Ville(); 

private:
	string nomVille;
	int numVille;
	double longitude;
	double latitude;
};