//
// Created by jbdur on 26/12/2021.
//

#include "Taxes.h"

Taxes::Taxes(string nom, Case *case_suivante,int prix): Case(nom,case_suivante) {
    prix=prix;
}

void Taxes::arreterSur(Joueur *joueur, int nombre_cases) {
    cout<<"Vous etes sur "<<nom<<endl;
    joueur->debiter(prix);
}