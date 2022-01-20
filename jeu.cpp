//
// Created by jbdur on 14/12/2021.
//
#include "jeu.h"
#include "Cases/Case.h"
#include "plateau.h"

jeu::jeu(){
    paquet = new ListeCarte();
    monPlateau= new plateau(this);
    cout << "Combien de Joueurs êtes vous (de 2 à 8) ?"<<endl;
    cin >> nbJoueurs;
    if (nbJoueurs>8){
        nbJoueurs=8;
    }
    for (int i=0;i<nbJoueurs;i++){
        listeJoueur[i]=Joueur(i+1,this);
    }
    joueur_en_cours=0;
    nbJoueurMaintenant=nbJoueurs;
}

jeu::jeu(int numero) {
    paquet = new ListeCarte();
    monPlateau = new plateau(this);
}


int jeu::lancer_des(int n){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 6);
    int de=distrib(gen);
    if (n==0){
        cout<<"Résultat dé : "<<de<<endl;
    }else{
        cout<<"Dé "<<n<<" : "<<de<<endl;
    }
    return de;
}

ListeCarte *jeu::getPaquet(){
    return paquet;
}

plateau *jeu::getMonPlateau(){
    return monPlateau;
}

void jeu::Jouer(){
    cout<<"Début du jeu"<<endl;
    int nombre_actions=0;
    int max_action=100;
    while(nombre_actions<max_action){
        nombre_actions++;
        if(listeJoueur[joueur_en_cours].getSolde()>=0 and nbJoueurMaintenant>1){
            listeJoueur[joueur_en_cours].jouer();
        }
        else if(listeJoueur[joueur_en_cours].getSolde()>=0 and nbJoueurMaintenant==1){
            cout<<listeJoueur[joueur_en_cours].getNom()<<", vous avez gagné !" << endl;
            nombre_actions=max_action;
        }
        joueur_en_cours=(joueur_en_cours+1)%nbJoueurs;
    }
}

int jeu::getNbJoueurMaintenant() const {
    return nbJoueurMaintenant;
}

void jeu::setNbJoueurMaintenant(int nbJoueurMaintenant) {
    jeu::nbJoueurMaintenant = nbJoueurMaintenant;
}
