cmake_minimum_required(VERSION 3.20)
project(Monopoly)

set(CMAKE_CXX_STANDARD 14)

add_executable(Monopoly main.cpp Cases/Case.cpp Cases/Case.h Joueur.cpp Joueur.h plateau.cpp plateau.h jeu.cpp jeu.h Cases/Propriete.cpp Cases/Propriete.h Carte.cpp Carte.h Cases/Communaute.cpp Cases/Communaute.h Cases/Depart.cpp Cases/Depart.h Cases/Prison.cpp Cases/Prison.h Cases/Chance.cpp Cases/Chance.h Cases/Terrain.cpp Cases/Terrain.h Cases/Gare.cpp Cases/Gare.h Cases/Compagnie.cpp Cases/Compagnie.h Cases/Parc.cpp Cases/Parc.h Cases/Taxes.cpp Cases/Taxes.h ListeCarte.cpp ListeCarte.h)
