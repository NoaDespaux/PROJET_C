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


void main(){


/* test verifier alphaNumérique

	if(verifierAlphanumerique(' ')==1){
		printf("le caractère espace est ok\n");
	} else {
		printf("le caractère espace est KO \n");
	}

	printf("\n Alphabet Majuscule\n");
	for(int i=-81; i<-89; i++) {
		if(verifierAlphanumerique(i)==1){
			printf("le caractère %c est ok \n", i);
		} else {
			printf("le caractère %c est KO \n", i);
		}
	}
	printf("\n Alphabet Minuscule\n");
	for(int i=97; i<122; i++) {
		if(verifierAlphanumerique(i)==1){
			printf("le caractère %c est ok \n", i);
		} else {
			printf("le caractère %c est KO \n", i);
		}
	}
	printf("le caractère %c est ok \n", 'à');
*/
	char tabChiffre[100];
	char tabDechiffre[100];
	int i = 0;

	FILE* fic;
	int lectChar = 0;

	fic = fopen("texte.txt", "r");
	if (fic == NULL) {
		printf("Erreur à l'ouverture du fichier texte\n");
	} else {
		do { 
			lectChar = fgetc(fic);
			tabChiffre[i] = chiffrer(lectChar,2) ;
			i++;
		} while (feof(fic) == 0); 
		fclose(fic);
	}
	for(int y=0; y<100; y++) {
		tabDechiffre[y] = dechiffrer(tabChiffre[y],2);
	}
	affichage(tabChiffre, tabDechiffre);

}
