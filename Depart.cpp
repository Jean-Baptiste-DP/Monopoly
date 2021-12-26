//
// Created by ilona on 26/12/2021.
//

#include "Depart.h"
#include <iostream>
using namespace std;

Depart::Depart(string nom_case,Case *case_suivante):Case() {
    nom=nom_case;
    suivante=case_suivante;
}

void Depart::passerSur(Joueur *joueur, int nombre_cases){}

void Depart::crediter_depart(){

}