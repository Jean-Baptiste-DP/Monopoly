//
// Created by jbdur on 14/12/2021.
//

#include "plateau.h"
#include "Cases/Parc.h"

plateau::plateau() {
    Case intermediaire;
    liste_cases[39]=Terrain("Rue de la Paix",400,&intermediaire,50,200,600,1400,1700,2000,200);
    liste_cases[38]=Taxes("Taxe de Luxe",&liste_cases[39],100);
    liste_cases[37]=Terrain("Avenue des Champs-Élysées",350,&liste_cases[38],35,175,500,1100,1300,1500,200);
    liste_cases[36]=Chance("Chance",&liste_cases[37]);
    liste_cases[35]=Gare("Gare Saint Lazare",200,&liste_cases[36]);
    liste_cases[34]=Terrain("Boulevard des Capucins", 320, &liste_cases[35],28,150,450,1000,1200,1400,200);
    liste_cases[33]=Communaute("Caisse de Communauté",&liste_cases[34]);
    liste_cases[32]=Terrain("Avenue Foch",300,&liste_cases[33],26,130,390,900,1100,1275,200);
    liste_cases[31]=Terrain("Avenue de Breteuil",300,&liste_cases[32],26,130,390,900,1100,1275,200);
    liste_cases[30]=Prison("Aller en prison",&liste_cases[31]);
    liste_cases[29]=Terrain("Rue de la Fayette",280,&liste_cases[30],24,120,360,850,1025,1200,150);
    liste_cases[28]=Compagnie("Compagnie de distribution des eaux",150,&liste_cases[29]);
    liste_cases[27]=Terrain("Place de la Bourse",260,&liste_cases[28],22,110,330,800,975,1150,150);
    liste_cases[26]=Terrain("Faubourg Saint-Honoré",260,&liste_cases[27],22,110,330,800,975,1150,150);
    liste_cases[25]=Gare("Gare du Nord",200,&liste_cases[26]);
    liste_cases[24]=Terrain("Avenue Henri-Martin",240,&liste_cases[25],20,100,300,750,925,1100,150);
    liste_cases[23]=Terrain("Boulevard Malesherbes",220,&liste_cases[24],18,90,250,700,875,1050,150);
    liste_cases[22]=Chance("Chance",&liste_cases[23]);
    liste_cases[21]=Terrain("Boulevard Malesherbes",220,&liste_cases[22],18,90,250,700,875,1050,150);
    liste_cases[20]=Parc(&liste_cases[21]);
    liste_cases[19]=Terrain("Place Pigalle",200,&liste_cases[20],16,80,220,600,800,1000,100);
    liste_cases[18]=Terrain("Boulevard Saint Michel",180,&liste_cases[19],14,70,200,550,750,950,100);
    liste_cases[17]=Communaute("Caisse de Communauté",&liste_cases[18]);
    liste_cases[16]=Terrain("Avenue Mozard",180,&liste_cases[17],14,70,200,550,750,950,100);
    liste_cases[15]=Gare("Gare de Lyon",200,&liste_cases[16]);
    liste_cases[14]=Terrain("Rue de Paradis",160,&liste_cases[15],12,60,180,500,700,900,100);
    liste_cases[13]=Terrain("Avenue de Neuilly",140,&liste_cases[14],10,50,150,450,625,750,100);
    liste_cases[12]=Compagnie("Compagnie de distribution d'électricité",150,&liste_cases[13]);
    liste_cases[11]=Terrain("Avenue de Neuilly",140,&liste_cases[12],10,50,150,450,625,750,100);
    liste_cases[10]=Prison("Prison",&liste_cases[11]);
    liste_cases[9]=Terrain("Avenue de la République",120,&liste_cases[10],8,40,100,300,450,600,50);
    liste_cases[8]=Terrain("Rue de Courcelles",100,&liste_cases[9],6,30,90,270,400,550,50);
    liste_cases[7]=Chance("Chance",&liste_cases[8]);
    liste_cases[6]=Terrain("Rue de Courcelles",100,&liste_cases[7],6,30,90,270,400,550,50);
    liste_cases[5]=Gare("Gare Montparnasse",200,&liste_cases[6]);
    liste_cases[4]=Taxes("Impôt sur le revenu",&liste_cases[5],200);
    liste_cases[3]=Terrain("Rue Lecourbe",60,&liste_cases[4],4,20,60,180,320,450,50);
    liste_cases[2]=Communaute("Caisse de Communauté",&liste_cases[3]);
    liste_cases[1]=Terrain("Boulevard de Belleville",60,&liste_cases[2],2,10,30,90,160,250,50);
    liste_cases[0]=Depart("Départ",&liste_cases[1]);
    liste_cases[39].setSuivante(&liste_cases[0]);
}