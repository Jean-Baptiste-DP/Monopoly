//
// Created by ilona on 26/12/2021.
//

#include "Prison.h"
#include <iostream>
using namespace std;

Prison::Prison(string nom_case,Case *case_suivante):Case() {
    nom=nom_case;
    suivante=case_suivante;
}

void Prison::arreterSur(Joueur *joueur, int nombre_cases) {}

