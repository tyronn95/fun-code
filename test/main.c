#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"


int main ()
{	
	int input = 0; 
	int experience = 0, niveau = 0, pointdeviecourant = 0, pointdeviemax = 0;
	int inventaire[10];
	printf("Tapez 1 si vous souhaitez creer un un personnage personnalisé ou tapez 2 si vous souhaitez un personnage standard");

	scanf_s("%d", &input);

	if (input == 1) {
		joueur joueur1 = creerjoueur();

		printf("%d, %d, %d ,%d", joueur1.experience, joueur1.niveau, joueur1.pointdeviecourant, joueur1.pointdeviemax, joueur1.inventaire);
	}
	else {
		int inventaire[] = { 0,0,0,0,5,6,7,8,8,10 };
		joueur joueur2;
		joueur2 = joueurentree(10, 16, 100, 100, inventaire);
		printf("%d, %d, %d ,%d", joueur2.experience, joueur2.niveau, joueur2.pointdeviecourant, joueur2.pointdeviemax, joueur2.inventaire);
		
		for (int i = 0; i != 10; i++) {
			int a;
			a = inventaire[i];
			printf("%d", a);
		}

	}

	return 0;
}