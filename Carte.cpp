//
// Created by Thomas on 23/12/2021.
//

#include "Carte.h"
#include "Joueur.h"

Carte::Carte(){}

Carte::Carte(int numero_carte, int action_deplacement, int action_argent, string action_lieu, int action_prison, int impot_pascher, int impot_cher, string explication){
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
    //On tire aléatoirement une carte ma_carte


}

void Carte::action_carte(Joueur joueur){
    //On affiche le texte de la carte au joueur

    cout<<texte;


    //On effectue l'action

    //Avancer de n cases
    if (deplacement!=0){
        joueur.deplacer(deplacement);
    }

    //Action sur argent avec la banque
    if (argent=!0){
        joueur.crediter(argent);
    }

    //Carte vous êtes libérer de prison
    if(prison!=0){
        joueur.carte_prison();
    }

    //Aller à une case précise
    if(lieu!=""){
        joueur.setPosition(lieu);
    }

    //Carte impôt maison et hotel

    if(ipascher=!0){
        joueur.debiter(25*joueur.getNbMaison()+ 100*joueur.getNbHotel());
    }

    if(icher!=0){
        joueur.debiter(40*joueur.getNbMaison()+ 115*joueur.getNbHotel());
    }


};
