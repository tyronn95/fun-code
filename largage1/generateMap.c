#include "generateMap.h"
#include <stdio.h>
#include <stdlib.h>
#include "tab2D.h"

//on génere la map ici
int** generateMap(int map1, int map2, int map3) {
    int a = 0;
    int** tab1 = tab2D(map1, map1);  //génération d'un tableau 2D

    for(int i = 0; i < map1; i++) {   //on innitialise tout à 0 (CHANGE)
        for(int j = 0; j < map1; j++) {
            tab1[i][j] = 0;
        }
    }

    tab1[map1/2][map1/2] = 1;      // 1 = joueur (CHANGE)

    tab1[map1/2+1][map1/2] = 3;    // 3 = plante (CHANGE)
    tab1[map1/2+2][map1/2] = 3;
    tab1[map1/2+1][map1/2+1] = 4;  // 4 = cailloux (CHANGE)
    tab1[map1/2-2][map1/2-2] = 2;  // 2 = PNJ (CHANGE)
    tab1[1][1] = 12;               // 12 = monstre (CHANGE)

    return tab1;
}
