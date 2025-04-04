#include "generateMap.h"
#include <stdio.h>
#include <stdlib.h>
#include "tab2D.h"
#define R1 4 //Rocher zone 1
#define P1 3 //Plante zone 1

//on génere la map ici
//int** generateMap(int map1, int map2, int map3) {
int** generateMap(int *map1) {
    int counter=0;

    int** tab1 = tab2D(map1[counter], map1[counter]);  //génération d'un tableau 2D

    for(int i = 0; i < map1[counter]; i++) {   //on innitialise tout à 0 (CHANGE)
        for(int j = 0; j < map1[counter]; j++) {
            tab1[i][j] = 0;
        }
    }

    counter++;
    int tmp = map1[counter];
    for(int i = 0; i < tmp; i++) {
        //Rocher zone 1
        tab1[map1[counter+1]][map1[counter+2]] = R1;
        counter+=2;
    }
    counter++;
    tmp = map1[counter];
    for(int i = 0; i < tmp; i++) {
        //Plante zone 1
        tab1[map1[counter+1]][map1[counter+2]] = P1;
        counter+=2;
    }
    counter++;
    tab1[map1[counter]][map1[counter+1]] = -1; //Portail de zone 1 à 2
    counter+=2;
    tab1[map1[counter]][map1[counter+1]] = 2; //PNJ

    return tab1;
}
