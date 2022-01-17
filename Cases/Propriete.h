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
    bool hypotheque;
    int num_case;
    Joueur *proprietaire;
public:
    Propriete(string nom, int prix_ach, int n_case);
    Propriete();
    void acheter(Joueur *joueur);
    bool isAchete() const;
    Joueur *getProprietaire() const;
    int getNumCase() const;
    void hypothequer(Joueur *joueur);
    bool isHypotheque() const;
    int getPrixHypotheque() const;
};

#endif //MONOPOLY_PROPRIETE_H
