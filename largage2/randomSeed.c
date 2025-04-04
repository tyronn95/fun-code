#include <stdlib.h>
#include "randomSeed.h"
#include <time.h>

int* randomSeed() { //seed random sans taille fixé
    int nbCailloux = 0;
    int nbPlante = 0;
    srand(time(NULL));
    int taille = rand() % (25 - 10 +1) + 10;  //taille de 10 à 25 qui commence par 10
    int counter = 0;
    int placeRestante = taille*taille;

    int *seedR = malloc(sizeof(int)*taille);
    seedR[counter] = taille;

    nbCailloux = rand() % (3 - (taille/3)+1 ) + 3;  //génération aléatoire du nb de cailloux
    seedR[counter] = nbCailloux;
    counter++;

    for(int i = 0; i < nbCailloux; i++) {  //génération coordoné de chaque cailloux
        seedR[counter] = rand() % taille;
        counter++;
        seedR[counter] = rand() % taille;
        counter++;
    }

    nbPlante = rand() % (3 - (taille/3)+1 ) + 3;  //génération aléatoire du nb de plante
    seedR[counter] = nbPlante;
    counter++;

    for(int i = 0; i < nbPlante; i++) {  //génération coordoné de chaque plante
        seedR[counter] = rand() % taille;
        counter++;
        seedR[counter] = rand() % taille;
        counter++;
        if(seedR[counter] == seedR[counter]) {
    }




    return seedR;
}

int* randomSeed(int nb) {//seed random avec taille fixé
    int seedR = malloc
}