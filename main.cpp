#include <iostream>
#include "Joueur.h"
#include "Cases/Case.h"
#include "plateau.h"

int main() {
    Joueur joueur1("toto");
    std::cout << "test1" << std::endl;
    cout<<"Nom joueur1 : "<<joueur1.getNom()<<", Solde joueur 1 :"<<joueur1.getSolde()<<endl;
    joueur1.setSolde(500);
    cout<<"Nouveau solde "<<joueur1.getNom()<<" : "<<joueur1.getSolde()<<endl;
    joueur1.crediter(500);
    cout<<"Nouveau solde après crédit"<<joueur1.getNom()<<" : "<<joueur1.getSolde()<<endl;
    joueur1.debiter(100);
    cout<<"Nouveau solde après débit"<<joueur1.getNom()<<" : "<<joueur1.getSolde()<<endl;

    std::cout << "\ntest2" << std::endl;
    Case intermediaire;
    Case case_finale("rue de la paix",&intermediaire);
    Case avant("champ élysées",&case_finale);
    Case debut("debut",&avant);
    case_finale.setSuivante(&debut);

    cout<<"Debut : "<<debut.getNom()<<endl;
    cout<<"Avant : "<<(*debut.getSuivante()).getNom()<<endl;
    cout<<"Fin : "<<(*(*debut.getSuivante()).deplacer(4)).getNom()<<endl;
    cout<<"Re début : "<<(*(*(*debut.getSuivante()).getSuivante()).getSuivante()).getNom()<<endl;
}
