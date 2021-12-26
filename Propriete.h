//
// Created by jbdur on 23/12/2021.
//

#ifndef MONOPOLY_PROPRIETE_H
#define MONOPOLY_PROPRIETE_H
#include "Case.h"
#include "Joueur.h"

class Propriete: public Case {
private:
    int prix_achat;
    int prix_hypotheque;
    Joueur *proprietaire;
public:
    Propriete(string nom, int prix_achat, Case *case_suivante);

};

#endif //MONOPOLY_PROPRIETE_H
