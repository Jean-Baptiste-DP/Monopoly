//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_JEU_H
#define MONOPOLY_JEU_H
using namespace std;
#include <iostream>
#include <random>
class Joueur;
class plateau;
class ListeCarte;

class jeu {
private:
    ListeCarte *paquet;
    plateau *monPlateau;
    int nbJoueurs;
    int joueur_en_cours;
    Joueur *listeJoueur[];
public:
    jeu();
    int lancer_des();
    ListeCarte *getPaquet();
    plateau *getMonPlateau();
    void Jouer();
};


#endif //MONOPOLY_JEU_H
