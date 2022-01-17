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
    nb_hotel=0;
    nb_maison=0;
}

Joueur::Joueur() {
    Nom = "Toto";
    solde = 1500;
    en_prison=false;
    nb_carte_prison=1;
    nb_tour_prison=1;
    nb_hotel=0;
    nb_maison=0;
}

void Joueur::jouer(){
    cout<<endl<<"-------------------------"<<endl;
    cout<<"Tour de : "<<Nom<<endl;
    cout<<"Solde du Joueur : "<<solde<<endl;
    cout<<"Position initiale : "<<position->getNom()<<endl;
    cout<<"-------------------------"<<endl<<endl;

    bool continuer_jouer=true;
    int nb_double=0;
    while (continuer_jouer){
        continuer_jouer=false;
        if(en_prison){
            position->arreterSur(this,0);
            if(not en_prison){
                nb_double=0;
                continuer_jouer=true;
            }
        }else{
            cout<<"Lancé des dés : "<<endl;
            //int de1=monJeu->lancer_des(1);
            //int de2=monJeu->lancer_des(2);
            int de1=0;
            int de2=4;
            if(de1==de2){
                continuer_jouer= true;
                if(nb_double>=2){
                    cout<<"Vous avez fait 3 doubles, allez en prison !"<<endl;
                    aller_vers(10);
                    setPrison(true);
                    nb_double=0;
                }else{
                    deplacer(de1+de2);
                    cout<<"Vous êtes arrivés sur : "<<position->getNom()<<endl;
                    position->arreterSur(this,de1+de2);
                    cout<<"Vous avez fait un double, vous pouvez rejouer"<<endl;
                    nb_double+=1;}
            }else{
                deplacer(de1+de2);
                cout<<"Vous êtes arrivés sur : "<<position->getNom()<<endl;
                position->arreterSur(this,de1+de2);
            }
        }
    }
    string reponse="solde";
    bool aAcheteBatiment=false;
    cout<<"-------------------------"<<endl;
    cout<<"Fin de tour"<<endl;
    while(reponse=="solde" or reponse=="maison" or reponse=="hypotheque" or reponse=="hotel" or reponse=="proprietes"){
        if(aAcheteBatiment){
            cout<<"Vous pouvez connaitre votre solde (solde), vos proprietes (proprietes), hypothequer (hypotheque) ou passer au Joueur suivant (passer)"<<endl;
        }else{
            cout<<"Vous pouvez connaitre votre solde (solde),vos proprietes (proprietes), acheter une maison (maison) \n ou un hotel (hotel), hypothequer (hypotheque) ou passer au Joueur suivant (passer)"<<endl;
        }
        cin>>reponse;
        if(reponse=="solde"){
            cout<<"Vous avez "<<solde<<"€"<<endl;
        }else if(reponse=="maison" and not aAcheteBatiment){
            aAcheteBatiment=monJeu->getMonPlateau()->AcheterMaison(this);
        }else if(reponse=="hotel" and not aAcheteBatiment){
            aAcheteBatiment=monJeu->getMonPlateau()->AcheterHotel(this);
        }else if(reponse=="proprietes"){
            monJeu->getMonPlateau()->getProprietesJoueur(this);
        }else if(reponse=="hypotheque"){

        }
    }
}


void Joueur::debiter(int montant) {
    solde-=montant;
}

void Joueur::crediter(int montant) {
    solde+=montant;
}

void Joueur::deplacer(int nb_cases) {
    position=position->deplacer(nb_cases, this);
}
void Joueur::executer_case() {
    position->arreterSur(this,0);
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
void Joueur::remettre_tour_prison_a_zero(){
    Joueur::nb_tour_prison=0;
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


