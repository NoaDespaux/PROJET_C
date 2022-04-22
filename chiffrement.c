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

//Caractères autorisés : A-Z a-z ' ' et les accents sur a,e,i,o,u
int verifierAlphanumerique(char texte){
	if (texte == 32){
		return 1; //espace
	}
	if (texte >= 65 && texte <= 90 ){
		return 1; //alphabet majuscule
	}
	if (texte >= 97 && texte <= 122 ){
		return 1; //alphabet minuscule
	}
	//accent
	if (texte >= -68 && texte <= -71 ){
		return 1;
	}
	if (texte >= -74 && texte <= -78 ){
		return 1;
	}
	if (texte >= -81 && texte <= -89 ){
		return 1;
	}
	if (texte >= -91 && texte <= -96 ){
		return 1;
	}
	return 0;
}



//pour des tests
int verifierAlphanumerique2(char c){
	if (c < 129 || c > 141){
		return 0;
	}
	return 1;
}


int convertirAccents(long texte) {
	if (texte == -92 || texte == -96 || texte == -95|| texte == -94|| texte == -93|| texte == -91) {
		return 97 ; //a
	}
	if (texte == -89) {
		return 99; //c
	}
	if (texte == -87 || texte == -88 || texte == -86 || texte == -85) {
		return 101; //e
	}
	if (texte == -81 || texte == -82 || texte == -83 || texte == -84) {
		return 105; //i
	}
	if (texte == -78 || texte == -77 || texte == -76 || texte == -75 || texte == -74) {
		return 111; //o
	}
	if (texte == -71 || texte == -70 || texte == -69 || texte == -68) {
		return 117; //u
	}
	return 0;
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
