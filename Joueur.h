//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_JOUEUR_H
#define MONOPOLY_JOUEUR_H
using namespace std;
#include <iostream>
#include "Case.h"

class Joueur {
private:
    string Nom;
    int solde;
    Case *position;
public:
    Joueur(string Name);
    void jouer();
    void deplacer(int nb_cases);
    void debiter(int montant);
    void crediter(int montant);
    int getSolde() const;
    void setSolde(int solde);
    const string &getNom() const;
};


#endif //MONOPOLY_JOUEUR_H
