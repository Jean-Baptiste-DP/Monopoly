//
// Created by Thomas on 27/12/2021.
//

#ifndef MONOPOLY_LISTECARTE_H
#define MONOPOLY_LISTECARTE_H
#include "Carte.h"
#include "Joueur.h"

class ListeCarte {
private:
    Carte* liste_carte_chance[16];
    Carte* liste_carte_communaute[14];

public:
    ListeCarte();
    void piocher_carte_chance(Joueur *joueur);
    void piocher_carte_communaute(Joueur *joueur);
};


#endif //MONOPOLY_LISTECARTE_H
