#include <iostream>
#include "Joueur.h"
#include "Cases/Case.h"
#include "jeu.h"
#include "plateau.h"

int main() {

    /*
    cout<<"Debut : "<<debut.getNom()<<endl;
    cout<<"Avant : "<<(*debut.getSuivante()).getNom()<<endl;
    cout<<"Fin : "<<(*(*debut.getSuivante()).deplacer(4)).getNom()<<endl;
    cout<<"Re début : "<<(*(*(*debut.getSuivante()).getSuivante()).getSuivante()).getNom()<<endl;
    */

    /*
    std::cout << "\ntest3" << std::endl;
    debut.arreterSur(&joueur1, 0);
    cout << "Nouveau solde  " << joueur1.getNom() << " apres case depart : " << joueur1.getSolde() << endl;
    */




    /*
    std::cout << "\ntest5" << std::endl;
    jeu de1(0);
    jeu de2(0);
    cout<<"a:"<<de1.getDe()<<endl;
    de1.lancer_des(&joueur1);
    de2.lancer_des(&joueur1);
    cout<<"d:"<<de1.getDe()<<endl;
    cout<<"e:"<<de2.getDe()<<endl;
    */
    cout << "Test de jeu"<<endl;
    jeu monJeu;
    monJeu.Jouer();
}
