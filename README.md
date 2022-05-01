# PROJET_C

Sujet n°3 : Chiffrement de messages

L'application fut développé par: Anass HMADOUCH, Line CABARET, Noa DESPAUX et Eliott BENAIM

L'objectif de notre application est de pouvoir chiffrer le contenu d'un fichier texte avec la méthode Caesar. De plus notre application doit-être capable de déchiffré un fichier texte chiffré à l'aide de la méthode Caesar en lui mettant en paramètre la clef de chiffrement.
L'application chiffre et déchiffre les messages dans les fichiers textes respectif : texteChiffre.txt et texteDechiffre.txt .

Les fonctions utilisées sont : verifierAlphanumerique(), convertirAccents(), chiffrer(), dechiffrer(), affichagechiffre(), affichageDechiffre().
Le texte à chiffré est à écrire dans le fichier texte texte.txt. La taille maximal du message est fixé à 1 000 caractères initialement mais peut-être agrandi ou raccourci en modifiant la constante TAILLE_MAX présente dans main.c . De plus, la clef de chiffrement est initialement définie à 2, mais peut-être changé en modifiant la constante CLEF présente dans main.c .

Quant à la rédaction de nos fonctions, nous avons commencé par verifierAlphanumerique(int lettre), qui va nous permettre de savoir si les caractères entrés sont des caractères alphanumériques. C'est-à-dire les alphabétiques représentant les lettres (de A à Z dans l'alphabet) minuscules et majuscules, ainsi que les caractères espace ' ' et retour chariot '\n'. La fonction prend donc en paramètre le code ASCII en integer d'un caractère lettre.
La fonction retourne 1 si le caractère lettre passé en paramètre est une lettre en majuscule ou en minuscule, si le caractère est un espace ou bien un retour chariot.
Retourne 2 si la lettre comporte un accent sur les lettre a,e,i,o,u.
Retourne 3 si la caractère lu est un accent d'un caractère spécial.
Sinon la fonction lève l'exception EXIT_FAILURE.

La fonction int convertirAccents(int lettre), permet de convertir les caractères accentués en caractère sans accent.
exemple : ConvertirAccents('ê') Renvoie --> 'e'.
La fonction ConvertirAccents() prend en paramètre le code ASCII en integer d'un caractère lettre.
La fonction retourne un caractère.
Si la lettre est une majuscule, minuscule, un espace ou un retour chariot alors la fonction retourne le code de la lettre sans modification.
Si la lettre comporte un accent sur les lettres minuscules a,e,i,o,u alors la fonction retourne la lettre sans l'accent.

La fonction char chiffrer(char lettre, int cle), permet de chiffrer un caractère lettre avec la méthode Caesar, la clef de chiffrement est un entier cle.
Retourne un caractère chiffré à l'aide de la méthode Caesar.

La fonction char dechiffrer(char lettre, int cle), permet de dechiffrer un caractère lettre chiffré avec l'aide de la fonction chiffrer(). Elle prend en paramètre la clef de chiffrement cle et le caractère à déchiffré.
Retourne le déchiffrement du caractère lettre passé en paramètre à l'aide de la méthode Caesar et de la clef de déchiffrement cle.

La fonction void affichagechiffre(char * texteChiffre), permet l'affichage, de la chaine de caractère texteChiffre passé en paramètre, dans un fichier texte texteChiffre.txt .

La fonction void affichageDechiffre(char * texteDechiffre), permet l'affichage, de la chaine de caractère texteDechiffre passé en paramètre, dans un fichier texte texteDechiffre.txt .
