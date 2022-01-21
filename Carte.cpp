//
// Created by Thomas on 23/12/2021.
//

#include "Carte.h"

#include "jeu.h"

Carte::Carte(){}

Carte::Carte(int numero_carte, int action_deplacement, int action_argent, int action_prison, int impot_pascher, int impot_cher, int action_lieu, string explication){
    numero=numero_carte;
    deplacement=action_deplacement;
    argent=action_argent;
    lieu=action_lieu;
    texte=explication;
    prison=action_prison;
    icher=impot_cher;
    ipascher=impot_pascher;
}

void Carte::piocher_carte() {
    //On tire aléatoirement une carte


}

void Carte::action_carte(Joueur *joueur){
    //On affiche le texte de la carte au joueur

    cout<<texte<<endl;


    //On effectue l'action

    //Reculer de 3 cases
    if (deplacement!=0){
        joueur->deplacer(37);
        joueur->executer_case();
        joueur->debiter(200);
    }

    //Action sur argent avec la banque
    if (argent!=0){
        joueur->crediter(argent);
    }

    //Carte vous êtes libérer de prison
    if(prison!=0){
        joueur->gagne_carte_prison();
        cout<<"Vous avez maintenant : "<<joueur->getNbCartePrison()<<"carte(s) libérer de prison"<<endl;
    }

    //Aller à une case précise
    if(lieu!=-1){
        joueur->aller_vers(lieu);
        joueur->executer_case();
        if (texte=="Avancez jusqu'à la case Départ."){
            joueur->crediter(200);
        }
    }

    //Carte impôt maison et hotel

    if(ipascher!=0){
        joueur->debiter((25*joueur->getNbMaison())+ (100*joueur->getNbHotel()));
    }

    if(icher!=0){
        joueur->debiter((40*joueur->getNbMaison())+ (115*joueur->getNbHotel()));
    }


};
