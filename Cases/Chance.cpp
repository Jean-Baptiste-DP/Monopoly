//
// Created by ilona on 26/12/2021.
//

#include "Chance.h"

Chance::Chance(string nom_case):Case(nom_case) {}

Chance::Chance() {}

void Chance::arreterSur(Joueur *joueur, int nombre_cases){
    monJeu->getPaquet()->piocher_carte_chance(joueur);
}
