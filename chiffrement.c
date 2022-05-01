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

//Caractères autorisés : A-Z a-z ' ' et les accents sur a,e,i,o,u
int verifierAlphanumerique(int lettre){
	if (lettre == 32 ||(lettre >= 97 && lettre <= 122) || (lettre >= 65 && lettre <= 90) || lettre == 10){
		return 1; //espace, maj, minuscule & retour chariot
	}
	if (lettre == -68 || lettre == -69 || lettre == -70 || lettre == -71){
		return 2;
	}
	if (lettre == -74 || lettre == -75 || lettre == -76 || lettre == -77 || lettre == -78){
		return 2;
	}
	if (lettre == -81 || lettre == -82 || lettre == -83 || lettre == -84 || lettre == -85 || lettre == -86 || lettre == -87 || lettre == -88 || lettre == -89){
		return 2;
	}
	if (lettre == -91 || lettre == -92 || lettre == -93 || lettre == -94 || lettre == -96){
		return 2;
	}
	if(lettre == 195 || lettre == 255 || lettre == -61 || lettre == -1){
		return 3; // caractères spéciaux accents
	}
	printf("erreur : caractère spécial\n");
	exit(EXIT_FAILURE);
}

int convertirAccents(int lettre) {
	if(verifierAlphanumerique(lettre) == 1) {
		return lettre;
	}
	//minuscule
	if (lettre == -91 || lettre == -92 || lettre == -93 || lettre == -94 || lettre == -96) {
		return 97 ; //a
	}
	if (lettre == -89) {
		return 99; //c
	}
	if (lettre == -85 || lettre == -86 || lettre == -87 || lettre == -88) {
		return 101; //e
	}
	if (lettre == -81 || lettre == -82 || lettre == -83 || lettre == -84) {
		return 105; //i
	}
	if (lettre == -74 || lettre == -75 || lettre == -76 || lettre == -77 || lettre == -78) {
		return 111; //o
	} 
	if(lettre == -68 || lettre == -69 || lettre == -70 || lettre == -71) {
		return 117; //u
	}
}


char chiffrer(char lettre, int cle) {
	if(lettre == 32) {
		return 32; //espace
	}
	if(lettre == 10) {
		return 10; //espace
	}
	int texte = convertirAccents(lettre);
	//minuscule
	if (texte >= 97 && texte <= 122 ) {
		if (texte + cle > 122){
			return cle + texte - 26;
		} else {
			return cle + texte;
		}
	}
	//majuscule
	if (texte >= 65 && texte <= 90 ){
		if (texte + cle > 90){
			return cle + texte - 26;
		} else {
			return cle + texte;
		}
	}
}

char dechiffrer(char lettre, int cle){
	//espace
	if(lettre == 32) {
		return 32;
	}
	if(lettre == 10) {
		return 10;
	}
	//majuscule
	if(lettre >= 65 && lettre <= 90) {
		if(lettre - cle < 65){
			return(lettre - cle + 26);
		} else {
			return(lettre - cle);
		}
	}
	//minuscule
	if(lettre >= 97 && lettre <= 122) {
		if(lettre - cle < 97){
			return(lettre - cle + 26);
		} else {
			return(lettre - cle);
		}
	}
}

void affichagechiffre(char * texteChiffre){
    FILE* output_file = fopen("texteChiffre.txt", "w");
    if (!output_file) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    fwrite(texteChiffre, 1, strlen(texteChiffre), output_file);
    fclose(output_file);
    //exit(EXIT_SUCCESS);
}

void affichageDechiffre(char * texteDechiffre){
    FILE* output_file2 = fopen("texteDechiffre.txt", "w");
    if (!output_file2) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    fwrite(texteDechiffre, 1, strlen(texteDechiffre), output_file2);
    fclose(output_file2);
}
