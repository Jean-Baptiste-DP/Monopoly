//
// Created by jbdur on 14/12/2021.
//

#include "Joueur.h"
#include "Cases/Case.h"
#include "plateau.h"

Joueur::Joueur(int pos,jeu *monJeu1) {
    cout << "Quel est le nom du Joueur "<<pos<<" ?"<<endl;
    cin >> Nom;
    solde = 1500;
    en_prison=false;
    nb_carte_prison=0;
    nb_tour_prison=0;
    monJeu=monJeu1;
    position=(monJeu->getMonPlateau())->aller_vers(0);
    cout<<"Position du Joueur : "<<position->getNom()<<endl;
}

Joueur::Joueur() {
    Nom = "Toto";
    solde = 1500;
    en_prison=true;
    nb_carte_prison=1;
    nb_tour_prison=1;
}

void Joueur::jouer(){
    cout<<"Tour de : "<<Nom<<endl;
    if (en_prison){
        position->arreterSur(this,0);
    }else{
        int de1=monJeu->lancer_des();
        int de2=monJeu->lancer_des();
        deplacer(de1+de2);
        cout<<"Position du Joueur : "<<position->getNom()<<endl;
        position->arreterSur(this,de1+de2);
    }
}

void Joueur::debiter(int montant) {
    solde-=montant;
}

void Joueur::crediter(int montant) {
    solde+=montant;
}

void Joueur::deplacer(int nb_cases) {
    position=position->deplacer(nb_cases);
}

void Joueur::aller_vers(int numero_case) {
    position=(monJeu->getMonPlateau())->aller_vers(numero_case);
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

int Joueur::getNbTourPrison() const{
    return nb_tour_prison;
}

void Joueur::ajout_tour_prison() {
    Joueur::nb_tour_prison+=1;
}

void Joueur::achat_maison(){
    nb_maison+=1;
}

void Joueur::achat_hotel() {
    nb_maison-=4;
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


