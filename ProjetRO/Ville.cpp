#include "Ville.h"

Ville::Ville(string nom, int num, double longi, double lati) 
	: nomVille(nom), numVille(num), longitude(longi), latitude(lati)
{

}

string Ville::getNomVille() {
	return nomVille;
}

int Ville::getNumVille() {
	return numVille;
}

double Ville::getLongitude() {
	return longitude;
}

double Ville::getLatitude() {
	return latitude;
}