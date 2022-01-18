//
// Created by ilona on 26/12/2021.
//

#include "Prison.h"

Prison::Prison(string nom_case):Case(nom_case) {
}

Prison::Prison() {}

void Prison::arreterSur(Joueur *joueur, int nombre_cases) {
    string reponse;
    string position;
    int nb_total;
    if (nom == "Prison") {
        cout << "Nombre de tour en prison : " << joueur->getNbTourPrison() << endl;
        cout << "Prison : " << joueur->getPrison() << endl;
        cout << "Nombre de cartes : " << joueur->getNbCartePrison() << endl;
        if (joueur->getPrison()) {
            if (joueur-> getNbTourPrison() > 2) {
                if (joueur->getNbCartePrison() > 0) {
                    cout << "Voulez-vous utiliser votre carte 'sortir de prison' ? "
                            "Merci de repondre : 'oui' ou 'non' en fonction de votre choix" << endl;
                    cin >> reponse;
                    if (reponse == "oui") {
                        joueur->setPrison(false);
                        joueur->remettre_tour_prison_a_zero();
                        joueur->perd_carte_prison();
                        cout<<"Nombres de cartes restantes : "<<joueur->getNbCartePrison()<<endl;
                    }
                    else{
                        joueur->setPrison(false);
                        joueur->remettre_tour_prison_a_zero();
                        joueur->debiter(50);
                        cout << "Votre nouveau solde est : "<<joueur->getSolde() <<" euros."<< endl;
                    }
                }
                else {
                    joueur->debiter(50);
                    joueur->setPrison(false);
                    joueur->remettre_tour_prison_a_zero();
                    cout << "Votre nouveau solde est : "<<joueur->getSolde() <<" euros."<< endl;
                }
            }
            else {
                cout
                << "Voulez-vous lancez les des, payer 50euros pour sortir de prison, utiliser une carte 'sortir de prison' ? "
                   "Merci de repondre : 'lancer', 'payer', 'utiliser_carte' en fonction de votre choix" << endl;
                cin >> reponse;
                if (reponse == "payer") {
                    joueur->setPrison(false);
                    joueur->remettre_tour_prison_a_zero();
                    cout << "Payement en cours" << endl;
                    joueur->debiter(50);
                    cout << "Votre nouveau solde est : "<<joueur->getSolde() <<" euros."<< endl;
                }
                else if (reponse == "utiliser_carte") {
                    cout << "Utilisation de la carte" << endl;
                    if (joueur->getNbCartePrison() == 0) {
                        cout << "Vous n'avez pas de cartes prison en votre possession" << endl;
                        joueur->setPrison(false);
                        joueur->remettre_tour_prison_a_zero();
                        cout << "Payement en cours" << endl;
                        joueur->debiter(50);
                        cout << "Votre nouveau solde est : "<<joueur->getSolde() <<" euros."<< endl;
                    }
                    else {
                        joueur->setPrison(false);
                        joueur->remettre_tour_prison_a_zero();
                        joueur->perd_carte_prison();
                        cout << "Nombre de cartes restantes: " << joueur->getNbCartePrison() << endl;
                    }
                }
                else{
                    int de1=monJeu->lancer_des();
                    int de2=monJeu->lancer_des();
                    if (de1==de2){
                        cout<<"Vous avez obtenu un double et pouvez sortir de prison"<<endl;
                        joueur->setPrison(false);
                        joueur->remettre_tour_prison_a_zero();
                    }
                    else{
                        joueur-> ajout_tour_prison();
                        cout << "Nombre de tour en prison: " << joueur->getNbTourPrison() << endl;
                    }
                }
            }
        }else {
            cout << "Simple visite" << endl;
        }
    }
    else{
        cout<<"Vous êtes envoyé en prison"<<endl;
        joueur->aller_vers(10);
        joueur->setPrison(true);
    }

}


