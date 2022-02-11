#include "Tournee.h"
#include <iostream>
#include <regex>
#include <fstream>
#include <cmath>

Tournee::Tournee():villes(lireFichier("top80.txt")) {

}

list<Ville*> Tournee::lireFichier(string nomFichier)
{
	list<Ville*> villes;
	string ligne;
	ifstream fichier(nomFichier);
	regex regex("\\ ");

	while (getline(fichier, ligne)) {
		vector<std::string>out(
				sregex_token_iterator(ligne.begin(), ligne.end(), regex, -1),
				sregex_token_iterator()
			);
		for (int i = 0; i < out.size(); i += 4) {
			villes.push_back(new Ville(out[1], stoi(out[0]), (stod(out[3])* M_PI/180), stod(out[2])));
		}
	}
	return villes;
}

double Tournee::calculeDistance(Ville* v1, Ville* v2) {
	double distance;

}

void Tournee::Afficherville() {
	for (Ville* v : villes) {
		cout << v->getNumVille() << " " << v->getNomVille() << " " << v->getLatitude() << " " << v->getLongitude()<< endl;
	}
}

Tournee::~Tournee(){
	for (Ville* v : villes)
	{
		free(v);
	}
}