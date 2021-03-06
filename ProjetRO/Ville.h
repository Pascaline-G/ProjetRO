#pragma once

#include <string>
using namespace std;
/**
 *	Classe repr?sentant les villes ? parcourir
 */

class Ville 
{
public:
	Ville(string nom, int num, double longi, double lati);
	~Ville(); 
	string getNomVille();
	int getNumVille();
	double getLongitude();
	double getLatitude();

private:
	string nomVille;
	int numVille;
	double longitude;
	double latitude;
};