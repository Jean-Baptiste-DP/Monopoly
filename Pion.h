//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_PION_H
#define MONOPOLY_PION_H
#include <iostream>
using namespace std;
#include "Case.h"
#include "Joueur.h"

class Pion {
private:
    string nom;
    Case Position;
    Joueur joueur;
public:
    Pion(string nom);
    void deplacer();
    const string &getNom() const;
    void setNom(const string &nom);
    const Case &getPosition() const;
    void setPosition(const Case &position);
    const Joueur &getJoueur() const;
    void setJoueur(const Joueur &joueur);
};


#endif //MONOPOLY_PION_H
