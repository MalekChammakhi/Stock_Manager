#ifndef RECHERCHE_H_INCLUDED
#define RECHERCHE_H_INCLUDED

#include "definition.h"

void recherche (produit A[100], int CPT){
                int trouve;
                char nom[20];
                system("cls");
                printf(" RECHERCHE D'UN PRODUIT\n\n");
                printf("NOM : ");
                fflush(stdin);
                gets(nom);
                trouve = 0;
                for(int i=0 ; i<CPT ; i++)
                {
                    if ( strcmp(A[i].NOM, nom) == 0 )
                    {
                         trouve = 1;
                         printf("\nCoordonnees de %s\n",A[i].NOM);
                         printf("\nCategorie      : %s", A[i].CATEGORIE);
                         printf("\nNombre. Stock.   : %d", A[i].NOMBRE_STOCK);
                         printf("\nDate. Entree. : %d/%d/%d",A[i].DATE_ENTREE.JOUR, A[i].DATE_ENTREE.MOIS,A[i].DATE_ENTREE.ANNEE);
                    }
                }
                if (trouve == 0)
                   printf("\nAucune entree correspondante !");
                scanf("%s");
}

#endif // RECHERCHE_H_INCLUDED
