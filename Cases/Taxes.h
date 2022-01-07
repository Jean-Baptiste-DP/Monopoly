//
// Created by jbdur on 26/12/2021.
//

#ifndef MONOPOLY_TAXES_H
#define MONOPOLY_TAXES_H
#include "Case.h"

class Taxes: public Case {
private:
    int prix;
public:
    Taxes(string nom, int prix);
    Taxes();
    void arreterSur(Joueur *joueur, int nombre_cases);
};



#endif //MONOPOLY_TAXES_H
