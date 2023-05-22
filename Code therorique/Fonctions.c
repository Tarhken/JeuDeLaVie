#include "Fonctions.h"
#include <stdlib.h>
#include <stdio.h>
int** Initialisation(int lignes, int colonnes) {
	int k;
	int** tab;
	tab = malloc(lignes * sizeof(int));
	for (k = 0; k < lignes; k++) {
		tab[k] = malloc(colonnes * sizeof(int));
	}
	int i, j;
	for (i = 0; i < lignes; i++) {
		for (j = 0; j < colonnes; j++) {
			tab[i][j] = 0;
		}
	}
	return tab;
}

void AffichageTableau(int** tab, int lignes, int colonnes) {
	int i, j;
	for (i = 0; i < lignes; i++) {
		for (j = 0; j < colonnes; j++) {
			printf("%d", tab[i][j]);
		}
		printf("\n");
	}

}

void SuppressionTab(int** tab, int lignes) {
	int i;
	for (i = 0; i < lignes; i++) {
		free(tab[i]);
	}
	free(tab);
}
