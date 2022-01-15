//
// Created by jbdur on 26/12/2021.
//

#include "Gare.h"

Gare::Gare(string nom, int prix_achat, int num_case): Propriete(nom,prix_achat, num_case) {}

Gare::Gare() {}

void Gare::arreterSur(Joueur *joueur, int nombre_cases) {
    if(achete){
        if(joueur==proprietaire){
            cout<<"Vous êtes propriétaire."<<endl;
        }
        else{
            int nb_gare=1;
            int prix;
            for (int i=0;i<3;i++){
                if (autres_gares[i]->achete && proprietaire==autres_gares[i]->proprietaire){
                    nb_gare++;
                }
            }
            if (nb_gare==1){
                prix=25;
            }else if(nb_gare==2){
                prix=50;
            }else if(nb_gare==3){
                prix=100;
            }else{
                prix=200;
            }
            joueur->debiter(prix);
            proprietaire->crediter(prix);
            cout<<"Vous devez "<<prix<<"€ à "<<proprietaire->getNom()<<endl;
        }
    }
    else{
        acheter(joueur);
    }
}

void Gare::setAutreGares(Gare* moi,Gare* g1,Gare* g2,Gare* g3){
    autres_gares[0]=g1;
    autres_gares[1]=g2;
    autres_gares[2]=g3;
    g1->setAutreGares(moi,g2,g3);
    g2->setAutreGares(moi,g1,g3);
    g3->setAutreGares(moi,g2,g1);
}

void Gare::setAutreGares(Gare *g1, Gare *g2, Gare *g3) {
    autres_gares[0]=g1;
    autres_gares[1]=g2;
    autres_gares[2]=g3;
}