cmake_minimum_required(VERSION 3.20)
project(Monopoly)

set(CMAKE_CXX_STANDARD 14)

add_executable(Monopoly main.cpp Case.cpp Case.h Joueur.cpp Joueur.h plateau.cpp plateau.h jeu.cpp jeu.h Propriete.cpp Propriete.h Carte.cpp Carte.h Communaute.cpp Communaute.h Depart.cpp Depart.h)
