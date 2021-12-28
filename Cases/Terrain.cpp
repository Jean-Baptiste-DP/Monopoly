//
// Created by jbdur on 26/12/2021.
//

#include "Terrain.h"

Terrain::Terrain(string nom, int prix_achat, Case *case_suivante,int terrain_nu,int maison1,int maison2,int maison3,int maison4,int hotel,int p_maison):Propriete(nom,prix_achat,case_suivante){
    loyer[0]=terrain_nu;
    loyer[1]=maison1;
    loyer[2]=maison2;
    loyer[3]=maison3;
    loyer[4]=maison4;
    loyer[5]=hotel;
    prix_maison=p_maison;
    nb_maison=0;
}

void Terrain::arreterSur(Joueur *joueur, int nombre_cases){
    if(achete){
        if(joueur==proprietaire){
            cout<<"Vous êtes sur "<<nom<<": case dont vous êtes propriétaire. Fin de tour."<<endl;
        }
        else{
            joueur->debiter(loyer[nb_maison]);
            proprietaire->crediter(loyer[nb_maison]);
            cout<<"Vous êtes sur "<<nom<<". Vous devez "<<loyer[nb_maison]<<"à"<<proprietaire->getNom()<<endl;
            cout<<"Fin de tour"<<endl;
        }
    }
    else{
        string reponse;
        cout<<"Vous êtes arrêter sur"<<nom<<". Ce terrain est disponible vous pouvez l'acheter pour "<<prix_achat<<endl;
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
}

void Terrain::setGroupe(Terrain* moi, Terrain* voisin1,Terrain* voisin2){
    dans_groupe[0]=voisin1;
    dans_groupe[1]=voisin2;
    nb_voisin=2;
    voisin1->setGroupe(moi,voisin2,false);
    voisin2->setGroupe(moi,voisin1,false);
}

void Terrain::setGroupe(Terrain *moi, Terrain *voisin, bool first) {
    if(first){
        dans_groupe[0]=voisin;
        nb_voisin=1;
        voisin->setGroupe(moi);
    }
    else{
        dans_groupe[0]=moi;
        dans_groupe[1]=voisin;
        nb_voisin=2;
    }
}

void Terrain::setGroupe(Terrain *voisin) {
    dans_groupe[0]=voisin;
    nb_voisin=1;
}