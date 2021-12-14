//
// Created by jbdur on 14/12/2021.
//

#include "Pion.h"

Pion::Pion(string nom) {
    nom=nom;
}

void Pion::deplacer() {}

const string &Pion::getNom() const {
    return nom;
}

void Pion::setNom(const string &nom) {
    Pion::nom = nom;
}

const Case &Pion::getPosition() const {
    return Position;
}

void Pion::setPosition(const Case &position) {
    Position = position;
}

const Joueur &Pion::getJoueur() const {
    return joueur;
}

void Pion::setJoueur(const Joueur &joueur) {
    Pion::joueur = joueur;
}
