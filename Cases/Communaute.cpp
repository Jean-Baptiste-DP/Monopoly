//
// Created by ilona on 26/12/2021.
//

#include "Communaute.h"

Communaute::Communaute(string nom_case):Case(nom_case) {}

Communaute::Communaute() {}

void Communaute::arreterSur(Joueur *joueur, int nombre_cases){
    monJeu->getPaquet()->piocher_carte_communaute(joueur);
}
