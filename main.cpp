#include <iostream>
#include "Joueur.h"
#include "Cases/Case.h"
#include "jeu.h"
#include "plateau.h"

int main() {

    /*
    Joueur joueur1;
    cout<<"Nom joueur1 : "<<joueur1.getNom()<<", Solde joueur 1 :"<<joueur1.getSolde()<<endl;
    joueur1.setSolde(500);
    cout<<"Nouveau solde "<<joueur1.getNom()<<" : "<<joueur1.getSolde()<<endl;
    joueur1.crediter(500);
    cout<<"Nouveau solde "<<joueur1.getNom()<<" apres credit : "<<joueur1.getSolde()<<endl;
    joueur1.debiter(100);
    cout<<"Nouveau solde "<<joueur1.getNom()<<" apres debit : "<<joueur1.getSolde()<<endl;

    std::cout << "\ntest2" << std::endl;
    Case case_finale;
    Case avant("champ élysées",case_finale);
    Prison prison("Prison",&case_finale);
    Depart debut("debut",&prison);
    case_finale.setSuivante(&debut);

    std::cout << "\ntest4" << std::endl;
    prison.arreterSur(&joueur1, 0);
    std::cout << "test5" << std::endl;
    */
    //cout<<joueur1.getNbCartePrison()<<endl;
    //Carte Liberer_prison (1, 0, 0, 1, 0, 0, "", "Carte Liberer de prison");
    //Liberer_prison.action_carte(&joueur1);
    //cout<<"\n"<<joueur1.getNbCartePrison()<<endl;

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
