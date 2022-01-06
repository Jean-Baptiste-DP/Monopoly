//
// Created by jbdur on 14/12/2021.
//

#include "plateau.h"

plateau::plateau(jeu *monJeu) {
    //création de toutes les cases
    Case intermediaire;
    Terrain liste_cases39("Rue de la Paix",400,&intermediaire,50,200,600,1400,1700,2000,200);
    Taxes liste_cases38("Taxe de Luxe",&intermediaire,100);
    Terrain liste_cases37("Avenue des Champs-Élysées",350,&intermediaire,35,175,500,1100,1300,1500,200);
    Chance liste_cases36("Chance",&intermediaire);
    Gare liste_cases35("Gare Saint Lazare",200,&intermediaire);
    Terrain liste_cases34("Boulevard des Capucins", 320,&intermediaire,28,150,450,1000,1200,1400,200);
    Communaute liste_cases33("Caisse de Communauté",&intermediaire);
    Terrain liste_cases32("Avenue Foch",300,&intermediaire,26,130,390,900,1100,1275,200);
    Terrain liste_cases31("Avenue de Breteuil",300,&intermediaire,26,130,390,900,1100,1275,200);
    Prison liste_cases30("Aller en prison",&intermediaire);
    Terrain liste_cases29("Rue de la Fayette",280,&intermediaire,24,120,360,850,1025,1200,150);
    Compagnie liste_cases28("Compagnie de distribution des eaux",150,&intermediaire);
    Terrain liste_cases27("Place de la Bourse",260,&intermediaire,22,110,330,800,975,1150,150);
    Terrain liste_cases26("Faubourg Saint-Honoré",260,&intermediaire,22,110,330,800,975,1150,150);
    Gare liste_cases25("Gare du Nord",200,&intermediaire);
    Terrain liste_cases24("Avenue Henri-Martin",240,&intermediaire,20,100,300,750,925,1100,150);
    Terrain liste_cases23("Boulevard Malesherbes",220,&intermediaire,18,90,250,700,875,1050,150);
    Chance liste_cases22("Chance",&intermediaire);
    Terrain liste_cases21("Avenue Matignon",220,&intermediaire,18,90,250,700,875,1050,150);
    Parc liste_cases20(&intermediaire);
    Terrain liste_cases19("Place Pigalle",200,&intermediaire,16,80,220,600,800,1000,100);
    Terrain liste_cases18("Boulevard Saint Michel",180,&intermediaire,14,70,200,550,750,950,100);
    Communaute liste_cases17("Caisse de Communauté",&intermediaire);
    Terrain liste_cases16("Avenue Mozard",180,&intermediaire,14,70,200,550,750,950,100);
    Gare liste_cases15("Gare de Lyon",200,&intermediaire);
    Terrain liste_cases14("Rue de Paradis",160,&intermediaire,12,60,180,500,700,900,100);
    Terrain liste_cases13("Avenue de Neuilly",140,&intermediaire,10,50,150,450,625,750,100);
    Compagnie liste_cases12("Compagnie de distribution d'électricité",150,&intermediaire);
    Terrain liste_cases11("Boulevard de la Villette",140,&intermediaire,10,50,150,450,625,750,100);
    Prison liste_cases10("Prison",&intermediaire);
    Terrain liste_cases9("Avenue de la République",120,&intermediaire,8,40,100,300,450,600,50);
    Terrain liste_cases8("Rue de Courcelles",100,&intermediaire,6,30,90,270,400,550,50);
    Chance liste_cases7("Chance",&intermediaire);
    Terrain liste_cases6("Rue de Vaugirard",100,&intermediaire,6,30,90,270,400,550,50);
    Gare liste_cases5("Gare Montparnasse",200,&intermediaire);
    Taxes liste_cases4("Impôts sur le revenu",&intermediaire,200);
    Terrain liste_cases3("Rue Lecourbe",60,&intermediaire,4,20,60,180,320,450,50);
    Communaute liste_cases2("Caisse de Communauté",&intermediaire);
    Terrain liste_cases1("Boulevard de Belleville",60,&intermediaire,2,10,30,90,160,250,50);
    Depart liste_cases0("Départ",&intermediaire);

    //relation de groupe entre les cases
    //Terrains
    liste_cases1.setGroupe(&liste_cases1,&liste_cases3);
    liste_cases6.setGroupe(&liste_cases6,&liste_cases8,&liste_cases9);
    liste_cases11.setGroupe(&liste_cases11,&liste_cases13,&liste_cases14);
    liste_cases16.setGroupe(&liste_cases16,&liste_cases18,&liste_cases19);
    liste_cases21.setGroupe(&liste_cases21,&liste_cases23,&liste_cases24);
    liste_cases26.setGroupe(&liste_cases26,&liste_cases27,&liste_cases29);
    liste_cases31.setGroupe(&liste_cases31,&liste_cases32,&liste_cases34);
    liste_cases37.setGroupe(&liste_cases37,&liste_cases39);
    //Gares
    liste_cases5.setAutreGares(&liste_cases5,&liste_cases15,&liste_cases25,&liste_cases35);
    //Compagnies
    liste_cases12.setAutreCompanie(&liste_cases12,&liste_cases28);

    //Stockage éléments dans liste
    liste_cases[0]=liste_cases0;
    liste_cases[1]=liste_cases1;
    liste_cases[2]=liste_cases2;
    liste_cases[3]=liste_cases3;
    liste_cases[4]=liste_cases4;
    liste_cases[5]=liste_cases5;
    liste_cases[6]=liste_cases6;
    liste_cases[7]=liste_cases7;
    liste_cases[8]=liste_cases8;
    liste_cases[9]=liste_cases9;
    liste_cases[10]=liste_cases10;
    liste_cases[11]=liste_cases11;
    liste_cases[12]=liste_cases12;
    liste_cases[13]=liste_cases13;
    liste_cases[14]=liste_cases14;
    liste_cases[15]=liste_cases15;
    liste_cases[16]=liste_cases16;
    liste_cases[17]=liste_cases17;
    liste_cases[18]=liste_cases18;
    liste_cases[19]=liste_cases19;
    liste_cases[20]=liste_cases20;
    liste_cases[21]=liste_cases21;
    liste_cases[22]=liste_cases22;
    liste_cases[23]=liste_cases23;
    liste_cases[24]=liste_cases24;
    liste_cases[25]=liste_cases25;
    liste_cases[26]=liste_cases26;
    liste_cases[27]=liste_cases27;
    liste_cases[28]=liste_cases28;
    liste_cases[29]=liste_cases29;
    liste_cases[30]=liste_cases30;
    liste_cases[31]=liste_cases31;
    liste_cases[32]=liste_cases32;
    liste_cases[33]=liste_cases33;
    liste_cases[34]=liste_cases34;
    liste_cases[35]=liste_cases35;
    liste_cases[36]=liste_cases36;
    liste_cases[37]=liste_cases37;
    liste_cases[38]=liste_cases38;
    liste_cases[39]=liste_cases39;

    //case suivante
    for (int i=0;i<39;i++){
        liste_cases[i].setSuivante(&liste_cases[i+1]);
        liste_cases[i].setMonJeu(monJeu);
    }
    liste_cases[39].setSuivante(&liste_cases[0]);
    liste_cases[39].setMonJeu(monJeu);

}

plateau::plateau(){}

Case* plateau::aller_vers(int indice) {
    return &liste_cases[indice];
}