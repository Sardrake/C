#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// fonction pour le menu du choix de la difficulté
int niveau()
{
    int choix = 0;
    while (choix<1 || choix>3)
    {
    printf("Niveau de difficulte\n\n1 = entre 1 et 100\n2 = entre 1 et 1000\n3 = entre 1 et 10000\n\n Votre choix ?");
    scanf("%d",&choix);
    }
    if (choix==1)
        return 100;
    if (choix==2)
        return 1000;
    if (choix==3)
        return 10000;
}

int main ( int argc, char** argv )
{
    int continuerPartie = 1;
    do
    {
        // amorcage des variables, la varaible nombreMaximum appelle la fonction niveau()
        int nombreMystere = 0, nombreEntre = 0, nombreCoups = 0, nombreMaximum = niveau();
        const int MIN = 1;

        // Génération du nombre aléatoire

        srand(time(NULL));
        nombreMystere = (rand() % (nombreMaximum - MIN + 1)) + MIN;

        /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */

        do
        {
            // On demande le nombre
            printf("Quel est le nombre ? ");
            scanf("%d", &nombreEntre);
            // On incrémente le compteur de coupe
            nombreCoups++;
            // On compare le nombre entré avec le nombre mystère

            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n\n");
            else
                printf ("Bravo, vous avez trouve le nombre mystere en %d coups!!!\n\n",nombreCoups);
        } while (nombreEntre != nombreMystere);
        // On demande si on continue ou si on arrete
        printf("\n 0 - Quitter la partie\n 1 - Continuer la partie\n\n Votre choix ?");
        scanf("%d",&continuerPartie);
    } while (continuerPartie);
    return 0;
}
