//
// Created by ilona on 26/12/2021.
//

#include "Communaute.h"
#include "Joueur.h"
#include "Carte.h"
#include <iostream>
using namespace std;

Communaute::Communaute(string nom_case,Case *case_suivante):Case(nom_case, case_suivante) {}

void Communaute::arreterSur(Joueur *joueur, int nombre_cases){
    //joueur->piocher_carte();
    //joueur->action_carte();
    //remettre carte en dessous de la pile
    //if(prison!=0){
    //    joueur.carte_prison();
    //}
}

//suivre les instructions de la carte et la remettre face cachée en-dessous de la pile.
//Si vous tirez une carte Vous êtes Libéré de Prison, vous pouvez la garder jusqu’à ce que vous décidiez de l’utiliser ou de la vendre à un autre joueur.
