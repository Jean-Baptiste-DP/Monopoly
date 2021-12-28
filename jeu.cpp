//
// Created by jbdur on 14/12/2021.
//
#include "jeu.h"
#include <iostream>
#include <random>

jeu::jeu(){
    ListeCarte vrai_paquet;
    paquet=&vrai_paquet;
}

jeu::jeu(int de) {
    de=0;
}

void jeu::lancer_des(Joueur *joueur){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 6);
    de=distrib(gen);
    cout<<"Resultat de : "<<de<<endl;
}

int jeu::getDe() const{
    return de;
}