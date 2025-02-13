#ifndef JOUEUR_H
#define JOUEUR_H

struct joueur { int experience; int niveau; int pointdeviecourant; int pointdeviemax; int* inventaire; };
typedef struct joueur joueur;

joueur creerjoueur();

joueur joueurentree(int experience, int niveau,  int pointdeviecourant, int pointdeviemax, int* inventaire);

#endif
