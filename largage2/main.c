#include <stdio.h>
#include <stdlib.h>
#include "generateMap.h"
#include "tab2D.h"
#include "giveSeed.h"

int main(void) {

    char* seed = "15.9.2.0.0.0.1.2.7.7.7.6.5.2.3.2";
    printf("Hello, World!\nla Seed est : %s \n\n", seed);
    //scanf("%d", &seed);
    //printf("prout");
    int* tab = giveSeed(seed);
    int **map = generateMap(tab);//on génère la map ici

    printTab2D(map, tab[0], tab[0]); // juste pour afficher une map
    printf("\n");




    free(tab);
    freeTab2D(map, tab[0]);  // free un tableau 2d
    return 0;
}
