//
// Created by ilona on 26/12/2021.
//

#include "Prison.h"

Prison::Prison(string nom_case, Case *case_suivante):Case(nom_case, case_suivante) {
    nombre_tour=3;
}

void Prison::arreterSur(Joueur *joueur, int nombre_cases) {
    string reponse;
    cout << nom << endl;
    cout << "Nombre de tour : " << nombre_tour << endl;
    cout << "Prison : " << joueur->getPrison() << endl;
    cout << "Nombre de cartes : " << joueur->getNbCartePrison() << endl;
    if (nom == "Prison") {
        cout << "Entree if ok" << endl;
        if (joueur->getPrison() == true) {
            if (nombre_tour == 4) {
                if (joueur->getNbCartePrison() != 0) {
                    cout << "Voulez-vous utiliser votre carte 'sortir de prison' ? "
                            "Merci de repondre : 'oui' ou 'non' en fonction de votre choix" << endl;
                    cin >> reponse;
                    if (reponse == "oui") {
                        joueur->perd_carte_prison();
                        //lancer les dés;
                        //joueur->deplacer(nombre_des);
                        // faire action case;
                        joueur->setPrison(false);
                        cout<<"Cartes : "<<joueur->getNbCartePrison()<<endl;
                    }
                    if (reponse == "non") {
                        joueur->debiter(50);
                        //lancer_des = lancer les dés;
                        //joueur->deplacer(lancer_des);
                        //faire action case;
                        joueur->setPrison(false);
                        cout<<"Solde : "<<joueur->getSolde()<<endl;
                    }
                }
                else {
                    joueur->debiter(50);
                    //lancer_des = lancer les dés
                    //joueur->deplacer(lancer_des);
                    //faire action case
                    joueur->setPrison(false);
                }
            }
            else {
                cout
                        << "Voulez-vous lancez les dès, payer 50euros pour sortir de prison, utiliser une carte 'sortir de prison' ? "
                           "Merci de répondre : 'lancer', 'payer', 'utiliser carte' en fonction de votre choix" << endl;
                cin >> reponse;
                if (reponse == "payer") {
                    cout << "Payement en cours" << endl;
                    joueur->debiter(50);
                    //lancer_des = lancer les dés;
                    //joueur->deplacer(lancer_des);
                    joueur->setPrison(false);
                    cout << joueur->getSolde() << endl;

                }
                if (reponse == "lancer") {
                    /*
                    lancer les dés
                    if (lancer_des==double){
                        joueur->deplacer(lancer_des)
                        lancer les dés
                        faire l'action
                        joueur->deplacer(lancer_des)
                        joueur->setPrison(false);
                    }
                    else{
                        nombre_tour+=1;
                        cout<<nombre_tour<<endl;
                    }
                    */
                    nombre_tour += 1;
                    cout << "Nombre de tour en prison: " << nombre_tour << endl;
                }
                if (reponse == "utiliser carte") { //pas l'impression qu'il rentre dans cette boucle
                    cout << "Utilisation de la carte" << endl;
                    if (joueur->getNbCartePrison() == 0) {
                        cout << "Vous n'avez pas de cartes prison en votre possession" << endl;
                    }
                    else {
                        joueur->perd_carte_prison();
                        //lancer les dés
                        //joueur->deplacer(nombre_des)
                        joueur->setPrison(false);
                        cout << "Nombre de cartes restantes: " << joueur->getNbCartePrison() << endl;
                    }
                }
                else{}
            }
        }
    }
    if (nom == "Aller en prison") {
        joueur->deplacer(20);
        cout << "nombre de tour: " << nombre_tour << endl;
        joueur->setPrison(true);
        cout << "Test envoi prison: " << joueur->getPrison() << endl;
    }
    else {
        cout << "Simple visite" << endl;
    }
}

//joueur en prison :
// -case allez en prison : ok
// -carte allez en prison
// -double 3 fois de suite


