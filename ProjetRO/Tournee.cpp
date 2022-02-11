#include "Tournee.h"
#include <iostream>
#include <regex>
#include <fstream>

Tournee::Tournee():villes() {
	villes.push_back(lireFichier("top80.txt"));
}

Ville* Tournee::lireFichier(string nomFichier)
{
	string ligne;
	ifstream fichier(nomFichier);
	regex regex("\\ ");

	vector<std::string> out(
		sregex_token_iterator(ligne.begin(), ligne.end(), regex, -1),
		sregex_token_iterator()
	);

	for (auto& s : out) {
		std::cout << s << std::endl;
	}
	return new Ville("salut", 1, 1.0, 1.0);
}

Tournee::~Tournee(){
	for (Ville* v : villes)
	{
		free(v);
	}
}