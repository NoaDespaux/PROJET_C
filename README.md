# PROJET_C

Sujet n°3 : Chiffrement de messages

Dans un premier temps nous avons cherché à comprendre le fonctionnement du déchiffremment César.
Une fois celui-ci comprit nous avons écrit l'algorithme correspondant.

Dans un second temps nous avons débuté la rédaction du programme. 
Pour cela nous avons réfléchi aux différentes fonctions dont nous aurions besoin.
Les fonctions générales du sujet sont : chiffrer, déchiffrer, vérifier Alphanumérique, ConvertirAccent.
De plus il a été jugé préférable, dans nos différentes fonctions, de ne pas prendre en compte le texte dans son intrégalité mais que chaque fonction ne vérifie que caractère par caractère.
Tous les caractères sont identifiés par leurs codes ASCII.

Quant à la rédaction de nos fonctions, nous sommes partis tous d'abord de vérifier Alphanumérique, 
qui va nous permettre de savoir si les caractères entrés, sont des caractères alphanumériques, soit qui comprennent 
les alphabétiques représentant les lettres (de A à Z dans l'alphabet) minuscules et majuscules, 
ainsi que les caractères numériques (de 0 à 9).
Pour notre cas, la fonction retourne 1 si le caractère lettre, passé en paramètre est soit une lettre majuscule /minuscule, un espace ou encore un retour chariot.
La fonction retourne 2, si le caractère est une lettre accentuée (sur les lettres a, e, i, o, u).
Sinon la fonction, retourne 4.

Suite à cela, la fonction ConvertirAccents 
