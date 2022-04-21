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
*  Nom du fichier : chiffrement.c                                             *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chiffrement.h"


//Caractères autorisés : A-Z a-z 0-9 ',' '-' '.' '/'

int verifierAlphanumerique(char c){
	if (c < 32){
		return 0;
	}
	if (c >= 33 && c <=43 ){
		return 0;
	}
	if (c >= 58 && c <= 64 ){
		return 0;
	}
	if (c >= 91 && c <= 96 ){
		return 0;
	}
	if (c > 122){
		return 0;
	}
	return 1;
}


//pour des tests
int verifierAlphanumerique2(char c){
	if (c < 129 || c > 141){
		return 0;
	}
	return 1;
}


//ne marche pas encore
void convertirAccents(char * c){
	if (*c == -61){
		printf("samarch\n");
		*c = 97;
	}
}


// Je ne sais pas pourquoi mais rajoute des caractères a la fin
// Sinon marche bien
char* chiffrer(char * texte, int cle, char* tabChiffre){
	char tab[strlen(texte)];
	for (int i = 0; i < strlen(texte); i++){
		if (verifierAlphanumerique(texte[i]) == 0){
			printf("Erreur de caractères spéciaux\n");
			exit(EXIT_FAILURE);
		}
		convertirAccents(&texte[i]);
		tab[i] = texte[i];
		if (texte[i] + cle > 122){
			tabChiffre[i] = cle + tab[i] - 26;
		} else {
			tabChiffre[i] = cle + tab[i];
		}
	}
	return tabChiffre;
}


// Même chose que pour chiffrer
char* dechiffrer(char * texte, int cle, char* tabDechiffre){
	for (int i = 0; i < strlen(texte); i++){
		if(texte[i] - cle < 97){
			tabDechiffre[i] = texte[i] - cle + 26;
		} else {
			tabDechiffre[i] = texte[i] - cle;
		}
	}
	return tabDechiffre;
}


void affichage(char * texte){
	printf("%s\n", texte);
}