//
// Created by jbdur on 23/12/2021.
//

#include "Propriete.h"

Propriete::Propriete(string nom,int prix_achat,Case *case_suivante):Case(nom,case_suivante){
    prix_achat=prix_achat;
    prix_hypotheque=prix_achat/2;
}
