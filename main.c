/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :                                                                 *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : Benaïm-Eliott                                                * 
*                                                                             *
*  Nom-prénom2 : Despaux-Noa                                                  *
*                                                                             *
*  Nom-prénom3 : Cabaret-Line                                                 *
*                                                                             *
*  Nom-prénom4 : Hmadouch-Anass                                               *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : main.c                                                    *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include "chiffrement.h"
#include <string.h>
#define TAILLE_MAX 1000
#define CLEF 2

void main(){
	char tabChiffre[TAILLE_MAX];
	char tabDechiffre[TAILLE_MAX];
	int i = 0;
	FILE* fic;
	int lectChar = 0;

	fic = fopen("texte.txt", "r");
	if (fic == NULL) {
		printf("Erreur à l'ouverture du fichier texte\n");
	} else {
		do { 
			lectChar = fgetc(fic);
			tabChiffre[i] = chiffrer(lectChar, CLEF) ;
			i++;
		} while (feof(fic) == 0); 
		fclose(fic);
	}
	for(int y=0; y<TAILLE_MAX; y++) {
		tabDechiffre[y] = dechiffrer(tabChiffre[y], CLEF);
	}
	affichagechiffre(tabChiffre);
	affichageDechiffre(tabDechiffre);
}
