//
// Created by ilona on 26/12/2021.
//

#include "Communaute.h"
#include <iostream>
using namespace std;

Communaute::Communaute(string nom_case):Case() {
    nom=nom_case;
}

void Communaute::arreterSur(Joueur *joueur, int nombre_cases){}

//suivre les instructions de la carte et la remettre face cachée en-dessous de la pile.
//Si vous tirez une carte Vous êtes Libéré de Prison, vous pouvez la garder jusqu’à ce que vous décidiez de l’utiliser ou de la vendre à un autre joueur.