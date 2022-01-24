//
// Created by Thomas on 23/12/2021.
//

#ifndef MONOPOLY_CARTE_H
#define MONOPOLY_CARTE_H


#include <iostream>
using namespace std;
class jeu;
class Joueur;

class Carte {
private:
    int numero;
    int deplacement;
    int argent;
    int prison;
    int ipascher;
    int icher;
    int lieu;
    string texte;

public:
    Carte();
    Carte(int numero_carte, int action_deplacement, int action_argent, int action_prison, int impot_pascher, int impot_cher, int action_lieu, string explication);

    void action_carte(Joueur *joueur);
};


#endif //MONOPOLY_CARTE_H
