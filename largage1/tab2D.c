#include "tab2D.h"
#include <stdio.h>
#include <stdlib.h>

//création de tableau 2D
int** tab2D(int x, int y) {
    int** tab = malloc(x * sizeof(int*));

    for (int i = 0; i < x; i++) {
        tab[i] = malloc(y * sizeof(int));
    }
    return tab;
}

//affichage de tableau 2D
void printTab2D(int** tab, int x, int y) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("[%2d] ", tab[i][j]);
        }
        printf("\n");
    }
}

//free de tableau 2D
void freeTab2D(int** tab, int line) {
    for (int i = 0; i < line; i++) {
        free(tab[i]);
    }
    free(tab);
}