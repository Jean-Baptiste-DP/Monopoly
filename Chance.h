//
// Created by ilona on 26/12/2021.
//

#ifndef MONOPOLY_CHANCE_H
#define MONOPOLY_CHANCE_H

#include <iostream>
#include "Case.h"
using namespace std;
class Joueur;

class Chance : public Case {
public :
    Chance(string nom_case);
    void arreterSur(Joueur *joueur, int nombre_cases);
};


#endif //MONOPOLY_CHANCE_H
