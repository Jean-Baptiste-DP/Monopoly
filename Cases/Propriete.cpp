//
// Created by jbdur on 23/12/2021.
//

#include "Propriete.h"


Propriete::Propriete(string nom,int prix_ach):Case(nom){
    prix_achat=prix_ach;
    prix_hypotheque=prix_achat/2;
    achete=false;
}

Propriete::Propriete() {
    prix_achat=99999;
}

void Propriete::acheter(Joueur *joueur) {
    string reponse;
    cout<<"Vous êtes arrêté sur "<<nom<<". Ce terrain est disponible vous pouvez l'acheter pour "<<prix_achat<<" euros."<<endl;
    cout<<"Merci de répondre 'oui' ou 'non' en fonction de si vous souhaitez l'acheter ou non"<<endl;
    cin >> reponse;
    if(reponse=="oui"){
        joueur->debiter(prix_achat);
        cout << "Votre nouveau solde est : "<<joueur->getSolde() <<" euros."<< endl;
        proprietaire=joueur;
        achete=true;
        cout<<"Achat effectué."<<endl;
    }
    else{
        cout<<"Fin de tour";
    }
}
