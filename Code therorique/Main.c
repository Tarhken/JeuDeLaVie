#include <stdio.h>
#include "Fonctions.c"

int main() {
	int *tab;
	int lignes, colonnes;
	lignes = 5;
	colonnes = 5;
	tab = Initialisation(5, 5);
	AffichageTableau(tab,lignes, colonnes);
	free(tab);
	return 0;
}
