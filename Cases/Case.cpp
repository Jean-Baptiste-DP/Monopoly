//
// Created by jbdur on 14/12/2021.
//

#include "Case.h"

Case::Case() {}

Case::Case(string nom_case) {
    nom=nom_case;
}

void Case::arreterSur(Joueur *joueur, int nombre_cases) {
    cout<<"il ne faut pas effectuer cette fonction"<<endl;
}

const string &Case::getNom() const {
    return nom;
}

void Case::setNom(const string &nom) {
    Case::nom = nom;
}

Case *Case::getSuivante() const {
    return suivante;
}

void Case::setSuivante(Case *suivante) {
    Case::suivante = suivante;
}

Case *Case::deplacer(int nb_pas, Joueur* mon_joueur) {
    if (nom=="Rue de la Paix"){
    cout<<"Vous venez de passer par la case de départ. Vous gagnez 200€"<<endl;
    mon_joueur->crediter(200);
    }
    if (nb_pas<=1){
        return suivante;
    }else{
        return suivante->deplacer(nb_pas-1, mon_joueur);
    }
}

void Case::setMonJeu(jeu *monJeu) {
    Case::monJeu = monJeu;
}
