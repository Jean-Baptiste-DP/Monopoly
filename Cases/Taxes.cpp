//
// Created by jbdur on 26/12/2021.
//

#include "Taxes.h"

Taxes::Taxes(string nom,int prix): Case(nom) {
    prix=prix;
}

Taxes::Taxes(){}

void Taxes::arreterSur(Joueur *joueur, int nombre_cases) {
    cout<<"Vous etes sur "<<nom<<endl;
    joueur->debiter(prix);
}