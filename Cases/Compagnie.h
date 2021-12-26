//
// Created by jbdur on 26/12/2021.
//

#ifndef MONOPOLY_COMPAGNIE_H
#define MONOPOLY_COMPAGNIE_H
#include "Propriete.h"

class Compagnie : public Propriete{
private:
    Compagnie* autres_compagnie;
    void setAutreCompagnie(Compagnie* g1);
public:
    Compagnie(string nom, int prix_achat, Case *case_suivante);
    void arreterSur(Joueur *joueur, int nombre_cases);
    void setAutreCompanie(Compagnie* moi,Compagnie* g1);
};


#endif //MONOPOLY_COMPAGNIE_H
