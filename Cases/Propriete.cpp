//
// Created by jbdur on 23/12/2021.
//

#include "Propriete.h"

Propriete::Propriete(string nom,int prix_achat):Case(nom){
    prix_achat=prix_achat;
    prix_hypotheque=prix_achat/2;
    achete=false;
}

Propriete::Propriete() {}

void Propriete::acheter(Joueur *joueur) {
    string reponse;
    cout<<"Vous êtes arrêter sur "<<nom<<". Ce terrain est disponible vous pouvez l'acheter pour "<<prix_achat<<endl;
    cout<<"Merci de répondre 'oui' ou 'non' en fonction de si vous souhaitez l'acheter ou non"<<endl;
    cin >> reponse;
    if(reponse=="oui"){
        joueur->debiter(prix_achat);
        proprietaire=joueur;
        achete=true;
        cout<<"Achat effectué. Fin de tour."<<endl;
    }
    else{
        cout<<"Fin de tour";
    }
}