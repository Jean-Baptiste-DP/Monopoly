//
// Created by jbdur on 14/12/2021.
//
#include "jeu.h"
#include "Cases/Case.h"
#include "plateau.h"
#include "Joueur.h"
#include "ListeCarte.h"

jeu::jeu(){
    paquet = new ListeCarte();
    monPlateau= new plateau(this);
    cout << "Combien de Joueurs êtes vous ?"<<endl;
    cin >> nbJoueurs;
    Joueur listeJoueur[nbJoueurs];
    for (int i=0;i<nbJoueurs;i++){
        listeJoueur[i]=Joueur(i+1,this);
    }
    joueur_en_cours=0;
}


int jeu::lancer_des(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 6);
    int de=distrib(gen);
    cout<<"Resultat dé : "<<de<<endl;
    return de;
}

ListeCarte *jeu::getPaquet(){
    return paquet;
}

plateau *jeu::getMonPlateau(){
    return monPlateau;
}

void jeu::Jouer(){
    int nombre_actions=0;
    while(nombre_actions<10){
        nombre_actions++;
        listeJoueur[joueur_en_cours]->jouer();
        joueur_en_cours=(joueur_en_cours+1)%nbJoueurs;
    }
}