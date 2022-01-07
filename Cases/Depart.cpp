//
// Created by ilona on 26/12/2021.
//

#include "Depart.h"

Depart::Depart(string nom_case):Case(nom_case) {}

Depart::Depart() {}

void Depart::arreterSur(Joueur *joueur, int nombre_cases){
    cout<<"Vous etes sur "<<nom<<endl;
    joueur->crediter(200);
}