//
// Created by jbdur on 26/12/2021.
//

#ifndef MONOPOLY_TERRAIN_H
#define MONOPOLY_TERRAIN_H
#include "Propriete.h"

class Terrain: public Propriete {
private:
    int loyer[6];
    int prix_maison;
    int nb_voisin;
    Terrain* dans_groupe[2];
    int nb_maison;
public:
    Terrain(string nom, int prix_achat,int terrain_nu,int maison1,int maison2,int maison3,int maison4,int hotel,int p_maison);
    Terrain();
    void arreterSur(Joueur *joueur, int nombre_cases);
    void setGroupe(Terrain* moi, Terrain* voisin1,Terrain* voisin2);
    void setGroupe(Terrain* moi, Terrain* voisin,bool first=true);
    void setGroupe(Terrain* voisin);
};


#endif //MONOPOLY_TERRAIN_H
