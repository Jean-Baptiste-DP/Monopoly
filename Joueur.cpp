//
// Created by jbdur on 14/12/2021.
//

#include "Joueur.h"
#include "Cases/Case.h"

Joueur::Joueur(string Name) {
    Nom = Name;
    solde = 1500;
    en_prison=true;
    nb_carte_prison=0;
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

void Joueur::gagne_carte_prison(){
    nb_carte_prison+=1;
}

void Joueur::perd_carte_prison() {
    nb_carte_prison-=1;
}

int Joueur::getNbCartePrison() const{
    return nb_carte_prison;
}

int Joueur::getPrison() const{
    return en_prison;
}

void Joueur::setPrison(bool en_prison) {
    Joueur::en_prison=en_prison;
}

void Joueur::achat_maison(){
    nb_maison+=1;
}

void Joueur::achat_hotel() {
    nb_hotel+=1;
}

int Joueur::getNbMaison() const {
    return nb_maison;
}

int Joueur::getNbHotel() const {
    return nb_hotel;
}

bool Joueur::operator==(Joueur autrejoueur) {
    return (Nom==autrejoueur.Nom);
}
