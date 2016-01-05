#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int mini = 0, maxi = 0;//Je définit ces variable en dehors du 'main' car j'en aurai besoin dans plusieurs fonctions

/*
    Fonction qui permettra de demander et de stocker le choix de difficulté.
    Cette fonction ne prend aucun paramètre mais renverra un 'int'.
*/
int choixUtilisateur()
{
    int choix = 0;

    while ( choix < 1 || choix > 3)//la boucle recommence tant que l'utilisateur n'a pas tapé un chiffre correspondaant à un niveau de difficulté
    {
        printf("\n\tChoisissez la difficulte ( 1, 2 ou 3) :\n\t");

        scanf("%d", &choix);
    }

    return choix;//on renvoie la valeur de la variable 'choix'

}

void difficulte (int choix)
{
    if (choix == 1)//si l'utilisateur a choisi la difficulté 1
    {
        printf("\n\n\tVous avez choisi FACILE.\n\n");//J'affiche la difficulté selectionnée par l'utilisateur
        mini = 0, maxi = 100;//je donne les minima et maximadu nombre aleatoire
    }
    else if (choix == 2)
    {
        printf("\n\n\tVous avez choisi MOYEN.\n\n");
        mini = 0, maxi = 1000;
    }
    else
    {
        printf("\n\n\tVous avez choisi DIFFICILE.\n\n");
        mini = 0, maxi = 10000;
    }
}

int main()
{
    srand(time(NULL));//Je place cette instruction au début du programme et surtout pas dans une boucle, elle ne doit etre lu qu'une seule fois

    /*
        En temps normal, j'aurais du mettre mes variables les unes à la suite de l'autre, mais ici pour être plus clair
        et plus à l'aise avec mon code, j'en mets une par ligne.
    */
    int recommencer = 0;//variable qui permettra de recommencer si on le veut
    int choixDifficulte = 0;//variable pour stocker le choix de difficulté selectionné par l'utilisateur
    int nombreMystere = 0;//variable où sera stocké le nombre choisi au hazard par l'ordinateur
    int nombre = 0;//variable où sera stockée le nombre entré par l'utilisateur
    int compteur = 0;//variable de comptage de coups

    //Titre et présentation du programme qui ne s'affichera qu'une seule fois au lancement
    printf("\n\n\tBonjour et bienvenue dans le jeu du + ou - :\n\t********************************************\n\n");
    printf("\tDans ce jeu, vous devrez trouver le nombre mystere.\n");
    printf("\n\tTapez '1' pour choisir le mode FACILE(le nombre est pris entre 0 et 100),\n");
    printf("\ttapez '2' pour choisir le mode MOYEN(le nombre est pris entre 0 et 1.000)");
    printf("\n\ttapez '3' pour choisir le mode DIFFICILE(le nombre est pris entre 0 et 10.000)");

    do//boucle générale du programme qui demandera à l'utilisateur s'il veut rejouer ou pas
    {
        choixDifficulte = choixUtilisateur();//Je stocke la valeur rentrée par l'utilisateur dans la variable correspondante

        //Je dois d'abord créer les boucles de difficulté.
        difficulte(choixDifficulte);

        //le nombre aléatoire est généré
        nombreMystere = (rand() % (maxi-mini+1))+mini;

        //Je peux maintenant laisser jouer le joueur
        printf("\tEntrez un nombre entre %d et %d :\n\t",mini,maxi);//à afficher une seule fois au début du jeu

        do //boucle à répéter tant que le joueur n'a pas trouvé
        {
            scanf("%d",&nombre);
            compteur++;//un coup de plus à chaque essais
            printf("\n");//Je passe une ligne pour la mise en page

            if (nombre<nombreMystere)
            {
                printf("\n\tPlus grand\n\t");
            }
            else if (nombre>nombreMystere)
            {
                printf("\n\tPlus petit\n\t");
            }
        }while (nombre != nombreMystere);
        //On est sortit de la boucle le joueur a trouvé le nombre mystère
        printf("\n\n\tBravo, vous avez trouve le nombre mystere!!\n\tEn seulement %d coups!\n",compteur);

        printf("\n\tPour rejouer, tapez '1',\n\tpour arreter le programme, tapez n'importe quoi : \n\t");
        scanf("%d",&recommencer);
        //Ces deux dernières lignes permettent de demander au joueur s'il veut oui ou non rejouer
    }while(recommencer == 1);

    return 0;
}
