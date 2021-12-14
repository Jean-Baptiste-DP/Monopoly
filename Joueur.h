//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_JOUEUR_H
#define MONOPOLY_JOUEUR_H
using namespace std;
#include <iostream>
#include "Pion.h"

class Joueur {
private:
    string Nom;
    Pion pion;
    int solde;
public:
    Joueur(string Name,Pion pion);
    void jouer();
    void debiter(int montant);
    void crediter(int montant);
    const Pion &getPion() const;
    void setPion(const Pion &pion);
    int getSolde() const;
    void setSolde(int solde);
    const string &getNom() const;
};


#endif //MONOPOLY_JOUEUR_H
