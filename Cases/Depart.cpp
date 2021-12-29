//
// Created by ilona on 26/12/2021.
//

#include "Depart.h"

Depart::Depart(string nom_case,Case *case_suivante):Case(nom_case, case_suivante) {
    nom=nom_case;
    suivante=case_suivante;
}

void Depart::arreterSur(Joueur *joueur, int nombre_cases){
    cout<<"Vous etes sur "<<nom<<endl;
    joueur->crediter(200);
}