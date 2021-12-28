//
// Created by ilona on 26/12/2021.
//

#include "Prison.h"

Prison::Prison(string nom_case, Case *case_suivante):Case(nom_case, case_suivante) {
}

void Prison::arreterSur(Joueur *joueur, int nombre_cases) {
    string reponse;
    cout << nom << endl;
    cout << "Nombre de tour : " << joueur-> getNbTourPrison() << endl;
    cout << "Prison : " << joueur->getPrison() << endl;
    cout << "Nombre de cartes : " << joueur->getNbCartePrison() << endl;
    int nb_total;
    if (nom == "Prison") {
        if (joueur->getPrison()) {
            if (joueur-> getNbTourPrison() > 2) {
                if (joueur->getNbCartePrison() > 0) {
                    cout << "Voulez-vous utiliser votre carte 'sortir de prison' ? "
                            "Merci de repondre : 'oui' ou 'non' en fonction de votre choix" << endl;
                    cin >> reponse;
                    if (reponse == "oui") {
                        joueur->perd_carte_prison();
                        de1.lancer_des(joueur);
                        de2.lancer_des(joueur);
                        nb_total = de1.getDe() + de2.getDe();
                        cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                        //joueur->deplacer(nb_total);
                        // faire action case;
                        joueur->setPrison(false);
                        cout<<"Cartes : "<<joueur->getNbCartePrison()<<endl;
                    }
                    else{
                        joueur->debiter(50);
                        de1.lancer_des(joueur);
                        de2.lancer_des(joueur);
                        nb_total = de1.getDe() + de2.getDe();
                        cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                        //joueur->deplacer(nb_total);
                        //faire action case;
                        joueur->setPrison(false);
                        cout<<"Solde : "<<joueur->getSolde()<<endl;
                    }
                }
                else {
                    joueur->debiter(50);
                    de1.lancer_des(joueur);
                    de2.lancer_des(joueur);
                    nb_total = de1.getDe() + de2.getDe();
                    cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                    //joueur->deplacer(nb_total);
                    //faire action case
                    joueur->setPrison(false);
                }
            }
            else {
                cout
                << "Voulez-vous lancez les des, payer 50euros pour sortir de prison, utiliser une carte 'sortir de prison' ? "
                   "Merci de repondre : 'lancer', 'payer', 'utiliser carte' en fonction de votre choix" << endl;
                cin >> reponse;
                if (reponse == "payer") {
                    cout << "Payement en cours" << endl;
                    joueur->debiter(50);
                    de1.lancer_des(joueur);
                    de2.lancer_des(joueur);
                    nb_total = de1.getDe() + de2.getDe();
                    cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                    //joueur->deplacer(nb_total);
                    joueur->setPrison(false);
                    cout << joueur->getSolde() << endl;

                }
                else if (reponse == "utiliser carte") { //pas l'impression qu'il rentre dans cette boucle
                    cout << "Utilisation de la carte" << endl;
                    if (joueur->getNbCartePrison() == 0) {
                        cout << "Vous n'avez pas de cartes prison en votre possession" << endl;
                    }
                    else {
                        joueur->perd_carte_prison();
                        de1.lancer_des(joueur);
                        de2.lancer_des(joueur);
                        nb_total = de1.getDe() + de2.getDe();
                        cout<<"Vous avez obtenu "<<nb_total<<" au lancer des des"<<endl;
                        //joueur->deplacer(nb_total);
                        joueur->setPrison(false);
                        cout << "Nombre de cartes restantes: " << joueur->getNbCartePrison() << endl;
                    }
                }
                else{
                    de1.lancer_des(joueur);
                    de2.lancer_des(joueur);
                    if (de1.getDe()==de2.getDe()){
                        cout<<"Vous avez obtenu un double et pouvez sortir de prison"<<endl;
                        nb_total=de1.getDe() + de2.getDe();
                        //joueur->deplacer(nb_total);
                        //faire l'action
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
        //joueur->deplacer(20);
        cout << "nombre de tour: " << joueur-> getNbTourPrison() << endl;
        joueur->setPrison(true);
        cout << "Test envoi prison: " << joueur->getPrison() << endl;
    }

}

//joueur en prison :
// -case allez en prison : ok
// -carte allez en prison
// -double 3 fois de suite


