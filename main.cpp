#include <iostream>
#include "Joueur.h"
#include "Cases/Case.h"
#include "jeu.h"
#include "plateau.h"

int main() {
    cout << "Test de jeu"<<endl;
    jeu monJeu(1);
    monJeu.Jouer();
}
