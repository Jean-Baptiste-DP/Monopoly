//
// Created by ilona on 26/12/2021.
//

#ifndef MONOPOLY_COMMUNAUTE_H
#define MONOPOLY_COMMUNAUTE_H

#include <iostream>
#include "Case.h"
#include "Carte.h"
using namespace std;
class Joueur;

class Communaute : public Case {
public :
    Communaute(string nom_case,Case *case_suivante);
    void arreterSur(Joueur *joueur, int nombre_cases);
};

#endif //MONOPOLY_COMMUNAUTE_H
