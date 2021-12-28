//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_JEU_H
#define MONOPOLY_JEU_H


#include "ListeCarte.h"

class jeu {
private:
    ListeCarte *paquet;
    int de;
public:
    jeu();
    jeu(int de);
    void(lancer_des(Joueur *joueur));
    int getDe() const;
};


#endif //MONOPOLY_JEU_H
