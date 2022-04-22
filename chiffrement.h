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
*  Nom du fichier : chiffrement.h                                             *
*                                                                             *
******************************************************************************/

// renvoie 1 si le caractère passé en paramètre est une lettre de l'alphabet
// en majuscule ou en minuscule, si le caractère est un espace ou bien si la lettre
// porte un accent sur les lettre a,e,i,o,u
// sinon renvoie 0.
int verifierAlphanumerique(char c);

int verifierAlphanumerique2(char c);

// converti un caractère à accent passé en paramètre en un caractère sans accent.
int convertirAccents(int texte);

char* chiffrer(char * texte, int cle, char* tabChiffre);

char* dechiffrer(char * texte, int cle, char* tabDechiffre);

void affichage(char * texte);

// prend un caractère en paramètre et renvoie son code en décimal.
int charToInt(char texte);
