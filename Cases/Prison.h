//
// Created by ilona on 26/12/2021.
//

#ifndef MONOPOLY_PRISON_H
#define MONOPOLY_PRISON_H
#include "Case.h"

class Prison:public Case {
private:
public:
    Prison(string nom_case, Case *case_suivante);
    void arreterSur(Joueur *joueur, int nombre_cases);
};



#endif //MONOPOLY_PRISON_H
