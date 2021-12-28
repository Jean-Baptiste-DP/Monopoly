//
// Created by ilona on 26/12/2021.
//

#ifndef MONOPOLY_CHANCE_H
#define MONOPOLY_CHANCE_H

#include "Case.h"
#include "../ListeCarte.h"
#include "../jeu.h"

class Chance : public Case {
public :
    Chance(string nom_case, Case *case_suivante);
    void arreterSur(Joueur *joueur, int nombre_cases);
};


#endif //MONOPOLY_CHANCE_H
