//
// Created by ilona on 26/12/2021.
//

#include "Prison.h"
#include "../Joueur.h"

Prison::Prison(string nom_case):Case(nom_case) {
}

Prison::Prison() {}

void Prison::arreterSur(Joueur *joueur, int nombre_cases) {
    string reponse;
    string position;
    int nb_total;
    if (nom == "Prison") {
        cout<<"EN PRISON"<<endl;
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
                        int de1=monJeu->lancer_des();
                        int de2=monJeu->lancer_des();
                        nb_total = de1 + de2;
                        cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                        joueur->deplacer(nb_total);
                        // faire action case;
                    }
                    else{
                        joueur->setPrison(false);
                        joueur->remettre_tour_prison_a_zero();
                        joueur->debiter(50);
                        cout << "Votre nouveau solde est : "<<joueur->getSolde() <<" euros."<< endl;
                        int de1=monJeu->lancer_des();
                        int de2=monJeu->lancer_des();
                        nb_total = de1 + de2;
                        cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                        joueur->deplacer(nb_total);
                        //faire action case;
                    }
                }
                else {
                    joueur->debiter(50);
                    joueur->setPrison(false);
                    joueur->remettre_tour_prison_a_zero();
                    cout << "Votre nouveau solde est : "<<joueur->getSolde() <<" euros."<< endl;
                    int de1=monJeu->lancer_des();
                    int de2=monJeu->lancer_des();
                    nb_total = de1 + de2;
                    cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                    joueur->deplacer(nb_total);
                    //faire action case;
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
                    int de1=monJeu->lancer_des();
                    int de2=monJeu->lancer_des();
                    nb_total = de1 + de2;
                    cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                    joueur->deplacer(nb_total);
                }
                else if (reponse == "utiliser_carte") { //pas l'impression qu'il rentre dans cette boucle
                    cout << "Utilisation de la carte" << endl;
                    if (joueur->getNbCartePrison() == 0) {
                        cout << "Vous n'avez pas de cartes prison en votre possession" << endl;
                        joueur->setPrison(false);
                        joueur->remettre_tour_prison_a_zero();
                        cout << "Payement en cours" << endl;
                        joueur->debiter(50);
                        cout << "Votre nouveau solde est : "<<joueur->getSolde() <<" euros."<< endl;
                        int de1=monJeu->lancer_des();
                        int de2=monJeu->lancer_des();
                        nb_total = de1 + de2;
                        cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                        joueur->deplacer(nb_total);
                    }
                    else {
                        joueur->setPrison(false);
                        joueur->remettre_tour_prison_a_zero();
                        joueur->perd_carte_prison();
                        cout << "Nombre de cartes restantes: " << joueur->getNbCartePrison() << endl;
                        int de1=monJeu->lancer_des();
                        int de2=monJeu->lancer_des();
                        nb_total = de1 + de2;
                        cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                        joueur->deplacer(nb_total);
                    }
                }
                else{
                    int de1=monJeu->lancer_des();
                    int de2=monJeu->lancer_des();
                    if (de1==de2){
                        cout<<"Vous avez obtenu un double et pouvez sortir de prison"<<endl;
                        nb_total = de1 + de2;
                        joueur->deplacer(nb_total);
                        int de3=monJeu->lancer_des();
                        int de4=monJeu->lancer_des();
                        joueur->deplacer(de3+de4);
                        //cout<<"Vous etes sur la case "<<joueur->(position->getNom)()<<endl;
                        /* il faudrait faire un deuxième lancer si il y a un double mais
                         *      pas possible de mettre 2 fois les mêmes paramètres +
                         *      dans un autre endroit le fait de relancer si double ?
                        cout<<"2eme lancer"<<endl;
                        de1.lancer_des(joueur);
                        de2.lancer_des(joueur);
                        nb_total = de1.getDe() + de2.getDe();
                        joueur->deplacer(nb_total);
                        */
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
        cout<<"Vous etes envoye en prison"<<endl;
        joueur->deplacer(20);
        joueur->setPrison(true);
    }

}

//joueur en prison :
// -case allez en prison : ok
// -carte allez en prison
// -double 3 fois de suite


