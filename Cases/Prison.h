//
// Created by ilona on 26/12/2021.
//

#ifndef MONOPOLY_PRISON_H
#define MONOPOLY_PRISON_H
#include "Case.h"
#include "../Joueur.h"

class Prison:public Case {
private:
    int nb_total;
public:
    Prison(string nom_case);
    Prison();
    void arreterSur(Joueur *joueur, int nombre_cases);
    int getNbDeDouble() const;
};



#endif //MONOPOLY_PRISON_H
