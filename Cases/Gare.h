//
// Created by jbdur on 26/12/2021.
//

#ifndef MONOPOLY_GARE_H
#define MONOPOLY_GARE_H
#include "Propriete.h"

class Gare : public Propriete{
private:
    Gare* autres_gares[3];
    void setAutreGares(Gare* g1,Gare* g2,Gare* g3);
public:
    Gare(string nom, int prix_achat, Case *case_suivante);
    void arreterSur(Joueur *joueur, int nombre_cases);
    void setAutreGares(Gare* moi,Gare* g1,Gare* g2,Gare* g3);
};


#endif //MONOPOLY_GARE_H
