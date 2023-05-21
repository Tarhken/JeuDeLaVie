#include "Fonctions.h"
#include <stdlib.h>
int* Initialisation(int lignes, int colonnes) {
	int* tab;
	tab = malloc(lignes * sizeof(int) + colonnes * sizeof(int));
	int i, j;
	for (i = 0; i < lignes; i++) {
		for (j = 0; j < colonnes; j++) {
			*(tab + i * colonnes * sizeof(int) + j * sizeof(int)) = 0;
		}
	}
	return tab;
}

void AffichageTableau(int *tab, int lignes, int colonnes) {
	int i, j;
	for (i = 0; i < lignes; i++) {
		for (j = 0; j < colonnes; j++) {
			printf("%d", tab + i * colonnes + j);
		}
		printf("\n");
	}

}