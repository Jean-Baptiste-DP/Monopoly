//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_CASE_H
#define MONOPOLY_CASE_H
#include "../jeu.h"
#include "../Joueur.h"

class Case {
protected:
    string nom;
    Case *suivante;
    jeu *monJeu;
public:
    Case();
    Case(string nom_case);
    virtual void arreterSur(Joueur *joueur, int nombre_cases)=0;
    const string &getNom() const;
    void setNom(const string &nom);
    Case *getSuivante() const;
    void setSuivante(Case *suivante);
    Case *deplacer(int nb_pas);

    void setMonJeu(jeu *monJeu);
};


#endif //MONOPOLY_CASE_H
