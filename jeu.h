//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_JEU_H
#define MONOPOLY_JEU_H
using namespace std;
#include <iostream>
#include <random>
#include <fstream>
#include "Joueur.h"
class plateau;
#include "ListeCarte.h"

class jeu {
private:
    ListeCarte *paquet;
    plateau *monPlateau;
    int nbJoueurs;
    int joueur_en_cours;
    Joueur listeJoueur[8];
    int nbJoueurMaintenant;
public:
    jeu();
    jeu(int numero);
    int lancer_des(int n=0);
    ListeCarte *getPaquet();
    plateau *getMonPlateau();
    void Jouer();

    int getNbJoueurMaintenant() const;

    void setNbJoueurMaintenant(int nbJoueurMaintenant);
};


#endif //MONOPOLY_JEU_H
