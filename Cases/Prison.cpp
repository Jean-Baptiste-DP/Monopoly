//
// Created by ilona on 26/12/2021.
//

#include "Prison.h"

Prison::Prison(string nom_case,Case *case_suivante):Case(nom_case, case_suivante) {}

void Prison::arreterSur(Joueur *joueur, int nombre_cases) {
    //si un 6 : on peut sortir de prison
    //au bout du 4ème essai : on sort de prison
    //si on a une carte sortir de prison : on peut sortir de prison
}

