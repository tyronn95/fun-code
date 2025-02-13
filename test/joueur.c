#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"


joueur creerjoueur(){

	joueur joueur1;
	joueur1.inventaire = (int*)malloc(sizeof(int)*10);
	joueur1.experience = 0;
	joueur1.niveau = 0;
	joueur1.pointdeviecourant = 100;
	joueur1.pointdeviemax = 100;

	printf("Creer le joueur.");


	printf("Entrer l'experience voulue");

	scanf_s("%d", &joueur1.experience);

	printf("Entrer le niveau");
	scanf_s("%d", &joueur1.niveau);
	printf("Entrer les points de vie");
	scanf_s("%d", &joueur1.pointdeviecourant);
	printf("Entrer les points de vie max ");
	scanf_s("%d", &joueur1.pointdeviemax);

	printf("entrer l'inventaire");

	for (int i = 0; i < 10; i++) {
		printf("entrer l'element %d de l'inventaire", i+1);
		scanf_s()
	}


	free(joueur1.inventaire);

}

joueur joueurentree(int experience, int niveau, int pointdeviecourant, int pointdeviemax, int* inventaire) {

	joueur joueur2;

	joueur2.experience = experience;
	joueur2.niveau = niveau; 
	joueur2.pointdeviecourant;
	joueur2.pointdeviemax = pointdeviemax;
	joueur2.inventaire = inventaire;

	return joueur2;
} 