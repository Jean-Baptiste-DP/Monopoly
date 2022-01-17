//
// Created by jbdur on 23/12/2021.
//

#include "Propriete.h"


Propriete::Propriete(string nom,int prix_ach, int n_case):Case(nom){
    prix_achat=prix_ach;
    prix_hypotheque=prix_achat/2;
    achete=false;
    num_case=n_case;
}

Propriete::Propriete() {
    prix_achat=99999;
}

void Propriete::acheter(Joueur *joueur) {
    string reponse;
    cout<<"Ce terrain est disponible vous pouvez l'acheter pour "<<prix_achat<<" euros."<<endl;
    cout<<"Merci de répondre 'oui' ou 'non' en fonction de si vous souhaitez l'acheter ou non"<<endl;
    cin >> reponse;
    if(reponse=="oui"){
        joueur->debiter(prix_achat);
        cout << "Votre nouveau solde est : "<<joueur->getSolde() <<" euros."<< endl;
        proprietaire=joueur;
        achete=true;
        cout<<"Achat effectué."<<endl;
    }
    else{}
}

bool Propriete::isAchete() const {
    return achete;
}

Joueur *Propriete::getProprietaire() const {
    return proprietaire;
}

int Propriete::getNumCase() const {
    return num_case;
}
