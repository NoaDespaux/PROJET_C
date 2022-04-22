#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chiffrement.h"

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
	if (texte =='\n' || texte == 0){
		return 1; //retour chariot
	}
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

int convertirAccents(int texte) {
	//minuscule
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
	return texte;
}

int charToInt(char texte) {
	return texte;
}

char chiffrer(char lettre, int cle) {
	if(lettre == 32) {
		return 32;
	}
	char texte = convertirAccents(charToInt(lettre));
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
	return '\n';	
}

char dechiffrer(char texte, int cle){
	//espace
	if(texte == 32) {
		return 32;
	}
	if(texte == '\n') {
		return '\n';
	}
	//majuscule
	if(texte - cle < 65){
		return texte - cle + 26;
	} 
	if (texte - cle < 65){
		return texte - cle + 26;
	}
	return texte - cle;
}

void affichage(char * texteChiffre, char * texteDechiffre){
    FILE* output_file = fopen("texteChiffre.txt", "w");
    if (!output_file) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    fwrite(texteChiffre, 1, strlen(texteChiffre), output_file);
    fwrite(texteDechiffre, 1, strlen(texteDechiffre), output_file);

    printf("Done Writing!\n");
    fclose(output_file);
    exit(EXIT_SUCCESS);
}
