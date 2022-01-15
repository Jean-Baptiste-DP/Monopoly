//
// Created by jbdur on 26/12/2021.
//

#include "Taxes.h"

Taxes::Taxes(string nom,int pr): Case(nom) {
    prix=pr;
}

Taxes::Taxes(){}

void Taxes::arreterSur(Joueur *joueur, int nombre_cases) {
    joueur->debiter(prix);
    cout<<"Vous devez payer des taxes. Vous avez été débité de "<<prix<<"€"<<endl;
}