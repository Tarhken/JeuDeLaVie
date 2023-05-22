#include "Fonctions.h"
#include <stdio.h>

int main() {
	int** tab;
	int lignes, colonnes;
	lignes = 10;
	colonnes = 10;
	tab = Initialisation(5, 5);
	AffichageTableau(tab, lignes, colonnes);
	SuppressionTab(tab, lignes);
	return 0;
}
