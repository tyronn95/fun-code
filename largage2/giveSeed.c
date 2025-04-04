#include "giveSeed.h"
#include "generateMap.h"
#include <stdio.h>
#include <stdlib.h>
#include "tab2D.h"
#include <math.h>

int* transfoTab(char *seed) { //"15.9.2.0.0.0.1.2.7.7.7.6.5.2.3.2"
    int tmp =0;
    int nb = 1;
    int counter = 0;


    while (seed[counter] != '.') {
        counter++;
    }

    for (int i=counter-1; i>=0; i--) {
        tmp = tmp + (seed[i]-'0')*nb;
        nb*=10;
    }
    //printf("\n%d\n", tmp); //DEBUG
    int* tab = (int*)malloc(sizeof(int) * tmp);

    counter++;
    tmp = 0;
    nb = 1;
    int i=0;

    while (seed[counter] !='\0') {
        if(seed[counter+1]!='.'&&seed[counter+1]!='\0') {
            tab[i] = (seed[counter]-'0')*10 + (seed[counter+1]-'0');
            //printf("debug n %d avec tab[%d] = %d\n", counter-3, i, tab[i]); //DEBUG
            counter++;
            counter++;
        }
        else {
            tab[i] = seed[counter]-'0';
            //printf("debug n %d avec tab[%d] = %d\n", counter-3, i, tab[i]); //DEBUG
            counter++;
        }
        counter++;
        i++;
    }



    /*temp = seed/pow(10,nb-1);
    //temp = temp+1

    for (int i = 0; i < temp; i++) {
        temp *pow()
        tab[counter] = seed/pow(10,nb-counter-2);
        counter++;
    }

    temp = seed/pow(10,nb-counter-1);*/

    return tab;
}

int* giveSeed(char *seed) {

    int *seedTab = transfoTab(seed);
    //printf("3xprout");
    return seedTab;

}

