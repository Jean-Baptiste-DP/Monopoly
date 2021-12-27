//
// Created by Thomas on 27/12/2021.
//

#include <ctime>
#include <iostream>
#include <random>
#include "ListeCarte.h"




ListeCarte::ListeCarte(){

    //Création des cartes chances

    Carte carte0(1,0,50,0,0,0,"","La Banque vous verse une dividende de 50€.");
    Carte carte1(2,0,-20,0,0,0,"","Amende pour ivresse : 20€.");
    Carte carte2(3,0,-15,0,0,0,"","Amende pour excès de vitesse : 15€.");
    Carte carte3(4,0,100,0,0,0,"","Vous avez gagné le prix de mots croisés. Recevez 100€.");
    Carte carte4(5,0,-150,0,0,0,"","Payez pour frais de scolarité 150€.");
    Carte carte5(6,0,150,0,0,0,"","Votre immeuble et votre prêt rapportent. Vous devez toucher 150€.");
    Carte carte6(7,0,0,0,0,0,"Avenue Henri-Martin","Rendez-vous à l'Avenue Henri-Martin.");
    Carte carte7(8,0,0,0,0,0,"Prison","Allez en prison");
    Carte carte8(9,0,0,0,0,0,"Départ","Avancez jusqu'à la case Départ.");
    Carte carte9(10,0,0,0,0,0,"Rue de la Paix","Rendez-vous à la rue de la Paix.");
    Carte carte10(11,0,0,0,0,0,"Gare de Lyon","Allez à la gare de Lyon.");
    Carte carte11(12,0,0,0,0,0,"Boulevard de la Vilette","Avancez au Boulevard de la Vilette.");
    Carte carte12(13,0,0,0,1,0,"","Faites des réparations dans vos maisons. Versez pour chaque maison 25€ et versez pour chaque hôtel 100€.");
    Carte carte13(14,0,0,0,0,1,"","Faites des réparations dans vos maisons. Versez pour chaque maison 40€ et versez pour chaque hôtel 115€.");
    Carte carte14(15,1,0,0,0,0,"","Reculez de trois cases.");
    Carte carte15(16,0,0,1,0,0,"","Vous êtes libéré de prison. Cette carte peut être conservée jusqu'à ce qu'elle soit utilisée.");

    //Création tableau carte chance

    liste_carte_chance[0]=&carte0;
    liste_carte_chance[1]=&carte1;
    liste_carte_chance[2]=&carte2;
    liste_carte_chance[3]=&carte3;
    liste_carte_chance[4]=&carte4;
    liste_carte_chance[5]=&carte5;
    liste_carte_chance[6]=&carte6;
    liste_carte_chance[7]=&carte7;
    liste_carte_chance[8]=&carte8;
    liste_carte_chance[9]=&carte9;
    liste_carte_chance[10]=&carte10;
    liste_carte_chance[11]=&carte11;
    liste_carte_chance[12]=&carte12;
    liste_carte_chance[13]=&carte13;
    liste_carte_chance[14]=&carte14;
    liste_carte_chance[15]=&carte15;

};


void piocher_carte_chance(Joueur *joueur){
    std::default_random_engine re(time(0));
    std::uniform_int_distribution<int> distrib{0, 15};
    liste_carte_chance[distrib(re)].action_carte(Joueur *joueur);

}