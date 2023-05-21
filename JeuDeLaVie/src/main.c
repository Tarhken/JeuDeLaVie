//Compilation: gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2

#include <stdio.h>
#include <SDL.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	
	//Initialisation
	if(SDL_Init(SDL_INIT_VIDEO) != 0){ //Fonction afin de savoir si l'initialisation (de la video) fonctionne bien
		SDL_Log("ERREUR: Initialisation SDL > %s \n", SDL_GetError()); //Affiche l'erreur de la SDL envoye par la fonction SDL_GetError
		exit(EXIT_FAILURE); //Sortie du programme 
	}

	//Programme 
	SDL_Window *window = NULL;
	window = SDL_CreateWindow("Jeu de la vie", 
								SDL_WINDOWPOS_CENTERED,
								SDL_WINDOWPOS_CENTERED,
								800,
								600,
								0); //creation de la fenetre graphique avec ses differents parametre

	if(window == NULL){ //Verifie que la fentre est bien cree
		SDL_Log("ERREUR: Creation fenetre > %s \n", SDL_GetError()); //Affiche l'erreur de la SDL envoye par la fonction SDL_GetError
		exit(EXIT_FAILURE); //Sortie du programme 
	}

	SDL_Delay(5000);

	// Ferme le SDL
	SDL_Quit();

	return 0;
}

