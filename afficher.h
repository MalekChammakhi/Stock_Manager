#ifndef AFFICHER_H_INCLUDED
#define AFFICHER_H_INCLUDED

#include "definition.h"

void afficher(produit A[100], int CPT){
    int i;
    system("cls");
                printf("\nLISTE DES PRODUITS\n");
                printf(" NUM |NOM                |CATEGORIE       |STOCK    |DATE_ENTREE  ");
                printf("\n----+--------------------+---------------+--------+----------------\n");


               for(i=0; i<CPT ; i++){
                printf("%-4d|%-20s|%-15s|%-10d|%2d-%2d-%4d\n",
                    A[i].NUM, A[i].NOM, A[i].CATEGORIE, A[i].NOMBRE_STOCK,
                    A[i].DATE_ENTREE.JOUR,
                    A[i].DATE_ENTREE.MOIS,
                    A[i].DATE_ENTREE.ANNEE);
               }
               scanf("%s");
}

#endif // AFFICHER_H_INCLUDED
