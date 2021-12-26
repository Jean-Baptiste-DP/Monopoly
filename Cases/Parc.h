//
// Created by jbdur on 26/12/2021.
//

#ifndef MONOPOLY_PARC_H
#define MONOPOLY_PARC_H
#include "Case.h"

class Parc: public Case {
private:

public:
    Parc(string nom, Case *case_suivante);
    void arreterSur(Joueur *joueur, int nombre_cases);
};


#endif //MONOPOLY_PARC_H
