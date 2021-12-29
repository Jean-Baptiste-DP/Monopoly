//
// Created by jbdur on 26/12/2021.
//

#include "Compagnie.h"

Compagnie::Compagnie(string nom, int prix_achat, Case *case_suivante): Propriete(nom,prix_achat,case_suivante) {}

void Compagnie::arreterSur(Joueur *joueur, int nombre_cases) {
    cout<<"Vous etes sur "<<nom<<endl;
    if(achete){
        if(joueur==proprietaire){
            cout<<"Vous êtes sur "<<nom<<": case dont vous êtes propriétaire. Fin de tour."<<endl;
        }
        else{
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
            cout<<"Vous êtes sur "<<nom<<". Vous devez "<<prix<<"à"<<proprietaire->getNom()<<endl;
            cout<<"Fin de tour"<<endl;
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