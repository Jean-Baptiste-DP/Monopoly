//
// Created by Thomas on 23/12/2021.
//

#ifndef MONOPOLY_CARTE_H
#define MONOPOLY_CARTE_H
using namespace std;
#include <iostream>
#include "Joueur.h"

class Carte {
private:
    int numero;
    int deplacement;
    int argent;
    int prison;
    int ipascher;
    int icher;
    string lieu;
    string texte;

public:
    Carte();
    Carte(int numero_carte, int action_deplacement, int action_argent, int action_prison, int impot_pascher, int impot_cher, string action_lieu, string explication);

    int getNumero() const;

    void setNumero(int numero);

    int getDeplacement() const;

    void setDeplacement(int deplacement);

    int getArgent() const;

    void setArgent(int argent);

    const string &getTexte() const;

    void setTexte(const string &texte);

    const string &getLieu() const;

    void setLieu(const string &lieu);

    void piocher_carte();
    void action_carte(Joueur joueur);
};


#endif //MONOPOLY_CARTE_H
