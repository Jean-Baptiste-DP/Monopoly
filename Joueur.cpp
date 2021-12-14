//
// Created by jbdur on 14/12/2021.
//

#include "Joueur.h"

Joueur::Joueur(string Name, Pion pion) {
    Nom = Name;
    pion = pion;
    solde = 1500;
}

void Joueur::jouer(){}

void Joueur::debiter(int montant) {
    solde-=montant;
}

void Joueur::crediter(int montant) {
    solde+=montant;
}

const Pion &Joueur::getPion() const {
    return pion;
}

void Joueur::setPion(const Pion &pion) {
    Joueur::pion = pion;
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
