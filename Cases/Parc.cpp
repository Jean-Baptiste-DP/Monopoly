//
// Created by jbdur on 26/12/2021.
//

#include "Parc.h"

Parc::Parc(Case *case_suivante): Case("Parc Gratuit",case_suivante) {

}

void Parc::arreterSur(Joueur *joueur, int nombre_cases) {
    cout<<"Vous etes sur "<<nom<<endl;
}