//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_JOUEUR_H
#define MONOPOLY_JOUEUR_H
using namespace std;
#include <iostream>
class Case;

class Joueur{
private:
    string Nom;
    int solde;
    Case *position;
    int nb_carte_prison;
    int nb_maison;
    int nb_hotel;
    bool en_prison;

public:
    Joueur(string Name);
    void jouer();
    void deplacer(int nb_cases);
    void debiter(int montant);
    void crediter(int montant);
    int getSolde() const;
    void setSolde(int solde);
    const string &getNom() const;
    void gagne_carte_prison();
    void perd_carte_prison();
    int getNbCartePrison() const;
    int getPrison() const;
    void setPrison(bool en_prison);
    void achat_maison();
    void achat_hotel();
    bool operator==(Joueur autrejoueur);
    int getNbMaison() const;
    int getNbHotel() const;
};


#endif //MONOPOLY_JOUEUR_H
