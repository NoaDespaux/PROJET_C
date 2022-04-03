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

int verifierAlphanumerique(char * texte){
	for(int i = 0; i < strlen(texte); i++){
		if (texte[i] < 32){
			return 0;
		}
		if (texte[i] >= 33 && texte[i] <=43 ){
			return 0;
		}
		if (texte[i] >= 58 && texte[i] <= 64 ){
			return 0;
		}
		if (texte[i] >= 91 && texte[i] <= 96 ){
			return 0;
		}
		if (texte[i] > 122){
			return 0;
		}
	}
	return 1;
}