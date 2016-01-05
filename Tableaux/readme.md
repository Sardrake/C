Quelques exercices !

Je ne manque pas d'idées d'exercices pour vous entraîner ! Je vous propose de réaliser des fonctions travaillant sur des tableaux.

Je donne juste les énoncés des exercices ici pour vous forcer à réfléchir à vos fonctions. Si vous avez du mal à réaliser ces fonctions, rendez-vous sur les forums pour poser vos questions.

Exercice 1

Créez une fonction sommeTableau qui renvoie la somme des valeurs contenues dans le tableau (utilisez un return pour renvoyer la valeur). Pour vous aider, voici le prototype de la fonction à créer :

int sommeTableau(int tableau[], int tailleTableau);
Exercice 2

Créez une fonction moyenneTableau qui calcule et renvoie la moyenne des valeurs. Prototype :

double moyenneTableau(int tableau[], int tailleTableau);
La fonction renvoie un double car une moyenne est souvent un nombre décimal.

Exercice 3

Créez une fonction copierTableau qui prend en paramètre deux tableaux. Le contenu du premier tableau devra être copié dans le second tableau.
Prototype :

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
Exercice 4

Créez une fonction maximumTableau qui aura pour rôle de remettre à 0 toutes les cases du tableau ayant une valeur supérieure à un maximum. Cette fonction prendra en paramètres le tableau ainsi que le nombre maximum autorisé (valeurMax). Toutes les cases qui contiennent un nombre supérieur à valeurMax doivent être mises à 0. Prototype :

void maximumTableau(int tableau[], int tailleTableau, int valeurMax);
Exercice 5

Cet exercice est plus difficile. Créez une fonction ordonnerTableau qui classe les valeurs d'un tableau dans l'ordre croissant. Ainsi, un tableau qui vaut {15, 81, 22, 13} doit à la fin de la fonction valoir {13, 15, 22, 81}.
Prototype :

void ordonnerTableau(int tableau[], int tailleTableau);
Cet exercice est donc un peu plus difficile que les autres, mais tout à fait réalisable. Ça va vous occuper un petit moment.

Faites-vous un petit fichier de fonctions appelé tableaux.c (avec son homologue tableaux.h qui contiendra les prototypes, bien sûr !) contenant toutes les fonctions de votre cru réalisant des opérations sur des tableaux.
Au travail ! :-)
