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

int verifierAlphanumerique(char c);
int verifierAlphanumerique2(char c);

void convertirAccents(char * texte);

char* chiffrer(char * texte, int cle, char* tabChiffre);

char* dechiffrer(char * texte, int cle, char* tabDechiffre);

void affichage(char * texte);
