//
// Created by jbdur on 14/12/2021.
//

#include "Case.h"

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

Case* Case::deplacer(int nb_pas) {
    if (nb_pas<=1){
        return suivante;
    }else{
        return suivante->deplacer(nb_pas-1);
    }
}

void Case::setMonJeu(jeu *monJeu) {
    Case::monJeu = monJeu;
}
