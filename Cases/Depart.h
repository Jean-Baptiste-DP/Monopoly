//
// Created by ilona on 26/12/2021.
//

#ifndef MONOPOLY_DEPART_H
#define MONOPOLY_DEPART_H

#include "Case.h"

class Depart:public Case {
public:
    Depart(string nom_case,Case *case_suivante);
    void arreterSur(Joueur *joueur, int nombre_cases);
};

#endif //MONOPOLY_DEPART_H
