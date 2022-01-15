//
// Created by jbdur on 23/12/2021.
//

#ifndef MONOPOLY_PROPRIETE_H
#define MONOPOLY_PROPRIETE_H
#include "Case.h"

class Propriete: public Case {
protected:
    int prix_achat;
    int prix_hypotheque;
    bool achete;
    int num_case;
    Joueur *proprietaire;
public:
    Propriete(string nom, int prix_ach, int n_case);
    Propriete();
    void acheter(Joueur *joueur);
};

#endif //MONOPOLY_PROPRIETE_H
