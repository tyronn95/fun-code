#include <stdio.h>
#include <stdlib.h>
#include "generateMap.h"
#include "tab2D.h"

int main(void) {

    printf("Hello, World!\n");
    int** test =  generateMap(5, 0, 0); //on génère la map ici

    printTab2D(test, 5, 5); // juste pour afficher une map

    freeTab2D(test, 5);  // free un tableau 2d
    return 0;
}
