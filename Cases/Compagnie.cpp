//
// Created by jbdur on 26/12/2021.
//

#include "Compagnie.h"

Compagnie::Compagnie(string nom, int prix_achat, int num_case): Propriete(nom,prix_achat, num_case) {}

Compagnie::Compagnie() {}

void Compagnie::arreterSur(Joueur *joueur, int nombre_cases) {
    if(achete){
        if(joueur==proprietaire){
            cout<<"Vous êtes propriétaire."<<endl;
        }
        else{
            if(hypotheque){
                cout<<"La compagnie est hypothèqué"<<endl;
            }else{
                int nb_compagnie=1;
                int prix;
                if (autres_compagnie->achete && proprietaire==autres_compagnie->proprietaire) {
                    nb_compagnie++;
                }
                if (nb_compagnie==1){
                    prix=4*nombre_cases;
                }else{
                    prix=10*nombre_cases;
                }
                joueur->debiter(prix);
                proprietaire->crediter(prix);
                cout<<"Vous devez "<<prix<<"€ à "<<proprietaire->getNom()<<endl;
            }
        }
    }
    else{
        acheter(joueur);
    }
}

void Compagnie::setAutreCompanie(Compagnie *moi, Compagnie *g1) {
    autres_compagnie=g1;
    g1->setAutreCompagnie(moi);
}

void Compagnie::setAutreCompagnie(Compagnie *g1) {
    autres_compagnie=g1;
}