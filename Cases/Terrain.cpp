//
// Created by jbdur on 26/12/2021.
//

#include "Terrain.h"

Terrain::Terrain(string nom, int prix_achat,int num_case, int terrain_nu,int maison1,int maison2,int maison3,int maison4,int hotel,int p_maison):Propriete(nom,prix_achat, num_case){
    loyer[0]=terrain_nu;
    loyer[1]=maison1;
    loyer[2]=maison2;
    loyer[3]=maison3;
    loyer[4]=maison4;
    loyer[5]=hotel;
    prix_maison=p_maison;
    nb_maison=0;
}

Terrain::Terrain() {}

void Terrain::arreterSur(Joueur *joueur, int nombre_cases){
    if(achete){
        if(joueur==proprietaire){
            cout<<"Vous êtes propriétaire."<<endl;
        }
        else{
            joueur->debiter(loyer[nb_maison]);
            proprietaire->crediter(loyer[nb_maison]);
            cout<<"Vous devez "<<loyer[nb_maison]<<"€ à "<<proprietaire->getNom()<<endl;
        }
    }
    else{
        acheter(joueur);
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