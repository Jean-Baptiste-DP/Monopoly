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
    Carte carte7(8,0,0,0,0,0,"Prison","Allez en prison.");
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

    // Création des cartes caisse de communauté

    Carte carte16(1,0,100,0,0,0,"","Recevez votre revenu annuel 100€.");
    Carte carte17(2,0,50,0,0,0,"","La vente de votre stock vous rapporte 50€.");
    Carte carte18(3,0,-100,0,0,0,"","Payez à l'Hôpital 100€.");
    Carte carte19(4,0,25,0,0,0,"","Recevez votre intérêt sur l'emprunt à 7%, 25€.");
    Carte carte20(5,0,20,0,0,0,"","Les Contributions vous remboursent la somme de 20€.");
    Carte carte21(6,0,200,0,0,0,"","Erreur de la Banque en votre faveur. Recevez 200€.");
    Carte carte22(7,0,-50,0,0,0,"","Payez la note du Médecin 50€.");
    Carte carte23(8,0,100,0,0,0,"","Vous héritez 100€.");
    Carte carte24(9,0,-50,0,0,0,"","Payez votre police d'assurance s'élevant à 50€.");
    Carte carte25(10,0,10,0,0,0,"","Vous avez gagné le deuxième Prix de Beauté. Recevez 10€.");
    Carte carte26(11,0,0,0,0,0,"Prison","Allez en prison.");
    Carte carte27(12,0,0,0,0,0,"Départ","Avancez jusqu'à la case Départ.");
    Carte carte28(13,0,0,0,0,0,"Belleville","Retournez à Belleville.");
    Carte carte29(14,0,0,1,0,0,"","Vous êtes libéré de prison. Cette carte peut être conservée jusqu'à ce qu'elle soit utilisée.");

    // Création tableau cartes caisse de communauté

    liste_carte_communaute[0]=&carte16;
    liste_carte_communaute[1]=&carte17;
    liste_carte_communaute[2]=&carte18;
    liste_carte_communaute[3]=&carte19;
    liste_carte_communaute[4]=&carte20;
    liste_carte_communaute[5]=&carte21;
    liste_carte_communaute[6]=&carte22;
    liste_carte_communaute[7]=&carte23;
    liste_carte_communaute[8]=&carte24;
    liste_carte_communaute[9]=&carte25;
    liste_carte_communaute[10]=&carte26;
    liste_carte_communaute[11]=&carte27;
    liste_carte_communaute[12]=&carte28;
    liste_carte_communaute[13]=&carte29;


};


void ListeCarte::piocher_carte_chance(Joueur *joueur){
    std::default_random_engine re(time(0));
    std::uniform_int_distribution<int> distrib{0, 15};
    liste_carte_chance[distrib(re)]->action_carte(joueur);

}

void ListeCarte::piocher_carte_communaute(Joueur *joueur){
    std::default_random_engine re(time(0));
    std::uniform_int_distribution<int> distrib{0, 13};
    liste_carte_communaute[distrib(re)]->action_carte(joueur);

}