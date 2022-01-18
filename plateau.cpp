//
// Created by jbdur on 14/12/2021.
//

#include "plateau.h"

plateau::plateau(jeu *monJeu) {
    //création de toutes les cases
    lesTerrains[21]=Terrain("Rue de la Paix",400,39, 50,200,600,1400,1700,2000,200);
    lesTaxes[1]=Taxes("Taxe de Luxe",100);
    lesTerrains[20]=Terrain("Avenue des Champs-Élysées",350, 37,35,175,500,1100,1300,1500,200);
    lesChances[2]=Chance("Chance");
    lesGares[3]=Gare("Gare Saint Lazare",200,35);
    lesTerrains[19]=Terrain("Boulevard des Capucins", 320, 34, 28,150,450,1000,1200,1400,200);
    lesCommunautes[2]=Communaute("Caisse de Communauté");
    lesTerrains[18]=Terrain("Avenue Foch",300,32, 26,130,390,900,1100,1275,200);
    lesTerrains[17]=Terrain("Avenue de Breteuil",300,31,26,130,390,900,1100,1275,200);
    lesPrisons[1]=Prison("Aller en prison");
    lesTerrains[16]=Terrain("Rue de la Fayette",280,29,24,120,360,850,1025,1200,150);
    lesCompagnies[1]=Compagnie("Compagnie de distribution des eaux",150,28);
    lesTerrains[15]=Terrain("Place de la Bourse",260, 27,22,110,330,800,975,1150,150);
    lesTerrains[14]=Terrain("Faubourg Saint-Honoré",260,26,22,110,330,800,975,1150,150);
    lesGares[2]=Gare("Gare du Nord",200,25);
    lesTerrains[13]=Terrain("Avenue Henri-Martin",240,24,20,100,300,750,925,1100,150);
    lesTerrains[12]=Terrain("Boulevard Malesherbes",220,23,18,90,250,700,875,1050,150);
    lesChances[1]=Chance("Chance");
    lesTerrains[11]=Terrain("Avenue Matignon",220,21,18,90,250,700,875,1050,150);
    leParc=Parc();
    lesTerrains[10]=Terrain("Place Pigalle",200,19,16,80,220,600,800,1000,100);
    lesTerrains[9]=Terrain("Boulevard Saint Michel",180,18,14,70,200,550,750,950,100);
    lesCommunautes[1]=Communaute("Caisse de Communauté");
    lesTerrains[8]=Terrain("Avenue Mozard",180,16,14,70,200,550,750,950,100);
    lesGares[1]=Gare("Gare de Lyon",200,15);
    lesTerrains[7]=Terrain("Rue de Paradis",160,14,12,60,180,500,700,900,100);
    lesTerrains[6]=Terrain("Avenue de Neuilly",140,13,10,50,150,450,625,750,100);
    lesCompagnies[0]=Compagnie("Compagnie de distribution d'électricité",150,12);
    lesTerrains[5]=Terrain("Boulevard de la Villette",140,11,10,50,150,450,625,750,100);
    lesPrisons[0]=Prison("Prison");
    lesTerrains[4]=Terrain("Avenue de la République",120,9,8,40,100,300,450,600,50);
    lesTerrains[3]=Terrain("Rue de Courcelles",100,8,6,30,90,270,400,550,50);
    lesChances[0]=Chance("Chance");
    lesTerrains[2]=Terrain("Rue de Vaugirard",100,6,6,30,90,270,400,550,50);
    lesGares[0]=Gare("Gare Montparnasse",200,5);
    lesTaxes[0]=Taxes("Impôts sur le revenu",200);
    lesTerrains[1]=Terrain("Rue Lecourbe",60,3,4,20,60,180,320,450,50);
    lesCommunautes[0]=Communaute("Caisse de Communauté");
    lesTerrains[0]=Terrain("Boulevard de Belleville",60,1,2,10,30,90,160,250,50);
    leDepart=Depart("Départ");

    //relation de groupe entre les cases
    //Terrains
    lesTerrains[0].setGroupe(&lesTerrains[0],&lesTerrains[1]);
    lesTerrains[2].setGroupe(&lesTerrains[2],&lesTerrains[3],&lesTerrains[4]);
    lesTerrains[5].setGroupe(&lesTerrains[5],&lesTerrains[6],&lesTerrains[7]);
    lesTerrains[8].setGroupe(&lesTerrains[8],&lesTerrains[9],&lesTerrains[10]);
    lesTerrains[11].setGroupe(&lesTerrains[11],&lesTerrains[12],&lesTerrains[13]);
    lesTerrains[14].setGroupe(&lesTerrains[14],&lesTerrains[15],&lesTerrains[16]);
    lesTerrains[17].setGroupe(&lesTerrains[17],&lesTerrains[18],&lesTerrains[19]);
    lesTerrains[20].setGroupe(&lesTerrains[20],&lesTerrains[21]);
    //Gares
    lesGares[0].setAutreGares(&lesGares[0],&lesGares[1],&lesGares[2],&lesGares[3]);
    //Compagnies
    lesCompagnies[0].setAutreCompanie(&lesCompagnies[0],&lesCompagnies[1]);

    //Stockage éléments dans liste
    liste_cases[0]=&leDepart;
    liste_cases[1]=&lesTerrains[0];
    liste_cases[2]=&lesCommunautes[0];
    liste_cases[3]=&lesTerrains[1];
    liste_cases[4]=&lesTaxes[0];
    liste_cases[5]=&lesGares[0];
    liste_cases[6]=&lesTerrains[2];
    liste_cases[7]=&lesChances[0];
    liste_cases[8]=&lesTerrains[3];
    liste_cases[9]=&lesTerrains[4];
    liste_cases[10]=&lesPrisons[0];
    liste_cases[11]=&lesTerrains[5];
    liste_cases[12]=&lesCompagnies[0];
    liste_cases[13]=&lesTerrains[6];
    liste_cases[14]=&lesTerrains[7];
    liste_cases[15]=&lesGares[1];
    liste_cases[16]=&lesTerrains[8];
    liste_cases[17]=&lesCommunautes[1];
    liste_cases[18]=&lesTerrains[9];
    liste_cases[19]=&lesTerrains[10];
    liste_cases[20]=&leParc;
    liste_cases[21]=&lesTerrains[11];
    liste_cases[22]=&lesChances[1];
    liste_cases[23]=&lesTerrains[12];
    liste_cases[24]=&lesTerrains[13];
    liste_cases[25]=&lesGares[2];
    liste_cases[26]=&lesTerrains[14];
    liste_cases[27]=&lesTerrains[15];
    liste_cases[28]=&lesCompagnies[1];
    liste_cases[29]=&lesTerrains[16];
    liste_cases[30]=&lesPrisons[1];
    liste_cases[31]=&lesTerrains[17];
    liste_cases[32]=&lesTerrains[18];
    liste_cases[33]=&lesCommunautes[2];
    liste_cases[34]=&lesTerrains[19];
    liste_cases[35]=&lesGares[3];
    liste_cases[36]=&lesChances[2];
    liste_cases[37]=&lesTerrains[20];
    liste_cases[38]=&lesTaxes[1];
    liste_cases[39]=&lesTerrains[21];

    //case suivante
    for (int i=0;i<39;i++){
        liste_cases[i]->setSuivante(liste_cases[i+1]);
        liste_cases[i]->setMonJeu(monJeu);
    }
    liste_cases[39]->setSuivante(liste_cases[0]);
    liste_cases[39]->setMonJeu(monJeu);

}

plateau::plateau(){}

Case* plateau::aller_vers(int indice) {
    return liste_cases[indice];
}

void plateau::getProprietesJoueur(Joueur *monJoueur) const {
    cout<<"Propriétés de "<<monJoueur->getNom()<<endl<<endl;
    cout<<"Les Terrains"<<endl;
    for (int i=0;i<22;i++){
        if (lesTerrains[i].isAchete()){
            if(lesTerrains[i].getProprietaire()->getNom()==monJoueur->getNom()){
                cout<<" - "<<lesTerrains[i].getNom();
                if(lesTerrains[i].isHypotheque()){
                    cout<<" (hypothèqué)"<<endl;
                }else{
                    cout<<endl;
                }
            }
        }
    }
    cout<<"Les Gares"<<endl;
    for (int i=0;i<4;i++){
        if (lesGares[i].isAchete()){
            if(lesGares[i].getProprietaire()->getNom()==monJoueur->getNom()){
                cout<<" - "<<lesGares[i].getNom();
                if(lesGares[i].isHypotheque()){
                    cout<<" (hypothèqué)"<<endl;
                }else{
                    cout<<endl;
                }
            }
        }
    }
    cout<<"Les Compagnies"<<endl;
    for (int i=0;i<2;i++){
        if (lesCompagnies[i].isAchete()){
            if(lesCompagnies[i].getProprietaire()->getNom()==monJoueur->getNom()){
                cout<<" - "<<lesCompagnies[i].getNom();
                if(lesCompagnies[i].isHypotheque()){
                    cout<<" (hypothèqué)"<<endl;
                }else{
                    cout<<endl;
                }
            }
        }
    }
}

void plateau::AcheterMaison(Joueur *monJoueur) {
    cout<<"Vous pouvez acheter des maisons dans ces terrains "<<endl;
    int cases[22];
    for (int i=0;i<22;i++){
        cases[i]=0;
    }
    for (int i=0;i<22;i++){
        if (lesTerrains[i].isAchete()){
            if(lesTerrains[i].toutGroupe(monJoueur)){
                if(lesTerrains[i].getNbMaison()<4){
                    cout<<" - "<<lesTerrains[i].getNom()<<"("<<i<<"), qui a "<<lesTerrains[i].getNbMaison()<<" maisons"<<endl;
                    cases[i]=1;
                }
            }
        }
    }
    string n_terrain;
    cout<<endl<<"Sur quel terrain voulez vous acheter une maison (entier attendu ou \"passer\" pour annuler la transaction) ?"<<endl;
    cin>>n_terrain;

    if(n_terrain=="passer"){}
    else{
        int int_n = stoi(n_terrain);
        if(cases[int_n]==1){
            lesTerrains[int_n].AddMaison(monJoueur);
        }
    }
}

void plateau::AcheterHotel(Joueur *monJoueur) {
    cout<<"Vous pouvez acheter des hotels dans ces terrains "<<endl;
    int cases[22];
    for (int i=0;i<22;i++){
        cases[i]=0;
    }
    for (int i=0;i<22;i++){
        if (lesTerrains[i].isAchete()){
            if(lesTerrains[i].toutGroupe(monJoueur)){
                if(lesTerrains[i].getNbMaison()==4){
                    cout<<" - "<<lesTerrains[i].getNom()<<"("<<i<<")"<<endl;
                    cases[i]=1;
                }
            }
        }
    }
    string n_terrain;
    cout<<endl<<"Sur quel terrain voulez vous acheter un hotel (entier attendu ou \"passer\" pour annuler la transaction) ?"<<endl;
    cin>>n_terrain;

    if(n_terrain=="passer"){}
    else{
        int int_n = stoi(n_terrain);
        if(cases[int_n]==1){
            lesTerrains[int_n].AddMaison(monJoueur);
        }
    }
}

void plateau::hypotheque(Joueur *monJoueur) {
    cout<<"Vous pouvez hypothequer ou racheter ces terrains "<<endl;
    int cases[28];
    for (int i=0;i<28;i++){
        cases[i]=0;
    }
    cout<<"Les Terrains"<<endl;
    for (int i=0;i<22;i++){
        if (lesTerrains[i].isAchete()){
            if(lesTerrains[i].getProprietaire()->getNom()==monJoueur->getNom()){
                cases[i]=1;
                if(lesTerrains[i].isHypotheque()){
                    cout<<" - "<<lesTerrains[i].getNom()<<"("<<i<<") racheter pour "<<1.1*lesTerrains[i].getPrixHypotheque()<<endl;
                    }else{
                    cout<<" - "<<lesTerrains[i].getNom()<<"("<<i<<") hypothequer pour "<<lesTerrains[i].getPrixHypotheque()<<endl;
                }
            }
        }
    }
    cout<<"Les Gares"<<endl;
    for (int i=22;i<26;i++){
        if (lesGares[i-22].isAchete()){
            if(lesGares[i-22].getProprietaire()->getNom()==monJoueur->getNom()){
                cases[i]=1;
                if(lesGares[i-22].isHypotheque()){
                    cout<<" - "<<lesGares[i-22].getNom()<<"("<<i<<") racheter pour "<<1.1*lesGares[i-22].getPrixHypotheque()<<endl;
                }else{
                    cout<<" - "<<lesGares[i-22].getNom()<<"("<<i<<") hypothequer pour "<<lesGares[i-22].getPrixHypotheque()<<endl;
                }
            }
        }
    }
    cout<<"Les Compagnies"<<endl;
    for (int i=26;i<28;i++){
        if (lesCompagnies[i-26].isAchete()){
            if(lesCompagnies[i-26].getProprietaire()->getNom()==monJoueur->getNom()){
                cases[i]=1;
                if(lesCompagnies[i-26].isHypotheque()){
                    cout<<" - "<<lesCompagnies[i-26].getNom()<<"("<<i<<") racheter pour "<<1.1*lesCompagnies[i-26].getPrixHypotheque()<<endl;
                }else{
                    cout<<" - "<<lesCompagnies[i-26].getNom()<<"("<<i<<") hypothequer pour "<<lesCompagnies[i-26].getPrixHypotheque()<<endl;
                }
            }
        }
    }
    string n_terrain;
    cout<<endl<<"Sur quel terrain voulez vous hypothequer (ou racheter) (entier attendu ou \"passer\" pour annuler la transaction) ?"<<endl;
    cin>>n_terrain;

    if(n_terrain=="passer"){}else
    {
        int int_n = stoi(n_terrain);
        if(cases[int_n]==1){
            if(int_n<22){
                lesTerrains[int_n].hypothequer(monJoueur);
            }else if(int_n<26){
                lesGares[int_n-22].hypothequer(monJoueur);
            }else{
                lesCompagnies[int_n-26].hypothequer(monJoueur);
            }

        }
    }
}