//
// Created by jbdur on 14/12/2021.
//

#include "Case.h"
#include "Joueur.h"

Case::Case() {}

Case::Case(string nom_case,Case *case_suivante) {
    nom=nom_case;
    suivante=case_suivante;
}

void Case::arreterSur(Joueur *joueur, int nombre_cases) {}

const string &Case::getNom() const {
    return nom;
}

void Case::setNom(const string &nom) {
    Case::nom = nom;
}

Case *Case::getSuivante() const {
    return suivante;
}

void Case::setSuivante(Case *suivante) {
    Case::suivante = suivante;
}
