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
    Chance lesChances[3];
    Communaute lesCommunautes[3];
    Compagnie lesCompagnies[2];
    Depart leDepart;
    Gare lesGares[4];
    Parc leParc;
    Prison lesPrisons[2];
    Taxes lesTaxes[2];
    Terrain lesTerrains[22];

    Case* liste_cases[40];
public:
    plateau();
    plateau(jeu *monJeu);
    Case* aller_vers(int indice);
    void getProprietesJoueur(Joueur *monJoueur) const;
    bool AcheterMaison(Joueur *monJoueur);
    bool AcheterHotel(Joueur *monJoueur);
};


#endif //MONOPOLY_PLATEAU_H
