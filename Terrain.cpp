//
// Created by jbdur on 26/12/2021.
//

#include "Terrain.h"

Terrain::Terrain(string nom, int prix_achat, Case *case_suivante,int terrain_nu,int maison1,int maison2,int maison3,int maison4,int hotel,int p_maison):Propriete(nom,prix_achat,case_suivante){
    loyer=[terrain_nu,maison1,maison2,maison3,maison4,hotel];
    prix_maison=p_maison;
}

void Terrain::arreterSur(Joueur *joueur, int nombre_cases){

}

void Terrain::setGroupe(Terrain* moi, Terrain* voisin1,Terrain* voisin2){
    dans_groupe=[voisin1,voisin2];
    voisin1->setGroupe(moi,voisin2,false);
    voisin2->setGroupe(moi,voisin1,false);
}

void Terrain::setGroupe(Terrain *moi, Terrain *voisin, bool first) {
    if(first){
        dans_groupe=[voisin];
        voisin->setGroupe(moi);
    }
    else{
        dans_groupe=[moi,voisin];
    }
}

void Terrain::setGroupe(Terrain *voisin) {
    dans_groupe=[voisin];
}