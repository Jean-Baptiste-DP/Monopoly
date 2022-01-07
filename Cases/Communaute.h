//
// Created by ilona on 26/12/2021.
//

#ifndef MONOPOLY_COMMUNAUTE_H
#define MONOPOLY_COMMUNAUTE_H

#include "Case.h"

class Communaute : public Case {
public :
    Communaute(string nom_case);
    Communaute();
    void arreterSur(Joueur *joueur, int nombre_cases);
};

#endif //MONOPOLY_COMMUNAUTE_H
