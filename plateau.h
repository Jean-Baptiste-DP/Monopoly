//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_PLATEAU_H
#define MONOPOLY_PLATEAU_H
#include "jeu.h"
#include "Cases/Case.h"
#include "Cases/Taxes.h"
#include "Cases/Parc.h"
#include "Cases/Chance.h"
#include "Cases/Communaute.h"
#include "Cases/Compagnie.h"
#include "Cases/Depart.h"
#include "Cases/Gare.h"
#include "Cases/Prison.h"
#include "Cases/Terrain.h"

class plateau {
private:
    Case* liste_cases[40];
public:
    plateau();
    plateau(jeu *monJeu);
    Case* aller_vers(int indice);
};


#endif //MONOPOLY_PLATEAU_H
