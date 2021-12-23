//
// Created by jbdur on 14/12/2021.
//

#ifndef MONOPOLY_CASE_H
#define MONOPOLY_CASE_H
using namespace std;
#include <iostream>
class Joueur;

class Case {
private:
    string nom;
    Case *suivante;
public:
    Case();
    Case(string nom_case,Case *case_suivante);
    void arreterSur(Joueur *joueur, int nombre_cases);

    const string &getNom() const;

    void setNom(const string &nom);

    Case *getSuivante() const;

    void setSuivante(Case *suivante);
};


#endif //MONOPOLY_CASE_H
