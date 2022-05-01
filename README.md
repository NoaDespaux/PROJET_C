# PROJET_C

Sujet n°3 : Chiffrement de messages

Dans un premier temps nous avons cherché à comprendre le fonctionnement du chiffremment César.
Une fois celui-ci comprit nous avons écrit l'algorithme correspondant.

Dans un second temps nous avons débuté la rédaction du programme. 
Pour cela nous avons réfléchi aux différentes fonctions dont nous aurions besoin.
Les fonctions générales du sujet sont : chiffrer, déchiffrer, vérifier Alphanumérique, ConvertirAccent.
De plus il a été jugé préférable, dans nos différentes fonctions, de ne pas prendre en compte le texte dans son intrégalité mais que chaque fonction ne vérifie que caractère par caractère.
Tous les caractères sont identifiés par leurs codes ASCII.

Quant à la rédaction de nos fonctions, nous avons commencé par vérifier Alphanumérique, qui va nous permettre de savoir si les caractères entrés sont des caractères alphanumériques. C'est-à-dire les alphabétiques représentant les lettres (de A à Z dans l'alphabet) minuscules et majuscules, ainsi que les caractères numériques (de 0 à 9).
Pour notre fonction nous avons 4 cas : 
La fonction retourne 1 si le caractère lettre passé en paramètre est une lettre majuscule / minuscule, un espace ou encore un retour chariot.
La fonction retourne 2 si le caractère est une lettre accentuée (sur les lettres a, e, i, o, u) 
La fonction retourne 3 lorsque qu'il est question de caractères spéciaux.
Sinon la fonction, retourne 4.

La fonction ConvertirAccents, permet de convertir les caractères accentués en caractère sans accent.
Afin de déterminer au préalable la nature du caractère en paramètre, nous utilisons la fonction "vérifier Alphanumérique" expliquée au dessus.
Quand on entre en paramètre un caractère lettre sans accent (1), celui-ci ne necessite pas de conversion, la fonction retourne donc la lettre sans modification.
Cependant quand s'il est question d'un caractère accentué (2), la fonction retourne le caractère lettre sans l'accent.
De plus lorsqu'il s'agit d'un caractère spécial (3), un message d'erreur s'affiche avant d'arrêter le programme.

Suite à cela, il nous faut chiffrer la totalité de ces caractères. Comme dit plus tôt, nous sommes partis du chiffrement césar.
Le texte chiffré s'obtient en remplaçant chaque lettre du texte original par une lettre à distance fixe (clé de chiffrement), toujours du même côté, dans l'ordre de l'alphabet. Par exemple si notre clé vaut 3, la lettre C va être chiffrée par la 3ième lettre après lui dans l'ordre alphabétique, c'est à dire F.
Nous prenons ainsi en paramètre, un caractère lettre (majuscule et minuscule seulement) ainsi qu'un entier cle qui sera additioné à cahque caractère du code. Ceci nous permettra de retourner de par la méthode césar, le caractère chiffré.
Pour cela nous allons suivre 3 étapes:
Dans un premier temps on détermine la nature du caractère.
Ensuite on utilise notre fonction ConvertirAccents afin d'enlever tous les accentsde notre texte.
En fin on ajoute notre clé à chaque caractère. Pour cela, on traite si la lettre est en minuscule ou en majuscule puis on fait attention au retour possible. C'est à dire que pour les lettre en fin de liste comme X par exemple, lorsqu'on lui ajoute la clé de valeur 4 nous devons revenir au début de l'alphabet pour le chiffrer en B. 
Pour ajouter notre clé à un caractère, nous prenons sont code ASCII qui est un entier, et nous y ajoutons la valeur voulue.
Par exemple le caractère A à comme code ASCII : 65    si nous lui ajoutons la clé de valeur 3 nous abtenons le code ASCII : 68 qui correspond au caractère : D

Quant au déchiffrement de ces caractères, il s'agit là de retrouver les caractères originaux à partir de la fonction dechiffrement.
À l'inverse de la fonction chiffrer, il nous suffit de soustraire cette même clé au code de chacun des caractères.


Pour finir, il ne nous reste plus qu'à afficher le texte chiffré et déchiffré dans des fichiers texte distinct.
