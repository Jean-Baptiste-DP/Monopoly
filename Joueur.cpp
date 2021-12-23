//
// Created by jbdur on 14/12/2021.
//

#include "Joueur.h"


Joueur::Joueur(string Name) {
    Nom = Name;
    solde = 1500;
}

void Joueur::jouer(){}

void Joueur::debiter(int montant) {
    solde-=montant;
}

void Joueur::crediter(int montant) {
    solde+=montant;
}

void Joueur::deplacer(int nb_cases) {

}

int Joueur::getSolde() const {
    return solde;
}

void Joueur::setSolde(int solde) {
    Joueur::solde = solde;
}

const string &Joueur::getNom() const {
    return Nom;
}
