//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_JOUEUR_H
#define MONOPOLY_JOUEUR_H
using namespace std;
#include <iostream>
#include "Case.h"
#include "Carte.h"

class Joueur {
private:
    string Nom;
    int solde;
    Case *position;
    int nb_carte_prison;
    int nb_maison;
    int nb_hotel;

public:
    Joueur(string Name);
    void jouer();
    void deplacer(int nb_cases);
    void debiter(int montant);
    void crediter(int montant);
    int getSolde() const;
    void setSolde(int solde);
    const string &getNom() const;
    void carte_prison();
    void achat_maison();
    void achat_hotel();

    int getNbMaison() const;

    int getNbHotel() const;
};


#endif //MONOPOLY_JOUEUR_H
