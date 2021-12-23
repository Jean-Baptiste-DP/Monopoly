#include <iostream>
#include "Case.h"

int main() {
    Case intermediaire;
    Case case_finale("rue de la paix",&intermediaire);
    Case avant("champ élysées",&case_finale);
    Case debut("debut",&avant);
    case_finale.setSuivante(&debut);

    cout<<"Debut : "<<debut.getNom()<<endl;
    cout<<"Avant : "<<(*debut.getSuivante()).getNom()<<endl;
    cout<<"Fin : "<<(*(*debut.getSuivante()).getSuivante()).getNom()<<endl;
    cout<<"Re début : "<<(*(*(*debut.getSuivante()).getSuivante()).getSuivante()).getNom()<<endl;
}
