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
#// Retourne 1 si le caractère lettre passé en paramètre est une lettre 
// en majuscule ou en minuscule, si le caractère est un espace ou bien un retour chariot
// Retourne 2 si la lettre comporte un accent sur les lettre a,e,i,o,u
// Retourne 3 si la caractère lu est un accent d'un caractère spécial
// sinon lève l'exception EXIT_FAILURE
int verifierAlphanumerique(int lettre);

// prend en paramètre le code en integer d'un caractère lettre.
// Si la lettre est une majuscule, minuscule, un espace ou un retour chariot 
// alors la fonction retourne le code de la lettre comme son paramètre.
// Si la lettre comporte un accent sur les lettres minuscules a,e,i,o,u alors
// la fonction retourne la lettre sans l'accent.
int convertirAccents(int lettre);

// Prend un caractère lettre en paramètre et un entier cle
// Retourne un caractère chiffré à l'aide de la méthode Caesar.
char chiffrer(char lettre, int cle);

// Prend un caractère lettre en paramètre et un entier cle.
// Retourne le déchiffrement du caractère lettre passé en paramètre avec 
// l'aide d'une clef cle en utilisant la méthode Caesar pour le déchiffrement.
char dechiffrer(char lettre, int cle);

// Prend un tableau de caractères chiffré (texteChiffre) avec la méthode Caesar en paramètre.
// Cette fonction à pour but d'afficher le texte chiffré 
// dans un nouveau fichier texte nommé texteChiffre.txt
void affichagechiffre(char * texteChiffre);

// Prend un tableau de caractères déchiffré (texteDechiffre) avec la méthode Caesar en paramètre.
// Cette fonction à pour but d'afficher le texte déchiffré 
// dans un nouveau fichier texte nommé texteDechiffre.txt
void affichageDechiffre(char * texteDechiffre);
