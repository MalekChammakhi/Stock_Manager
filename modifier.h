#ifndef MODIFIER_H_INCLUDED
#define MODIFIER_H_INCLUDED

#include "definition.h"

void modifier(produit A[100], int CPT){
         int trouve;
         char nom[20];
         system("cls");
         printf("\nMODIFICATION D'UN PRODUIT\n\n");
         printf("Nom : ");
         fflush(stdin);
         scanf("%s",nom);
         trouve = 0;
          for(int i=0 ; i<CPT ; i++)
          {
             if ( strcmp(A[i].NOM, nom) == 0 )
             {
                trouve = 1;

        printf("\nAnciennes coordonnees de %s \n",A[i].NOM);
                printf(" Categorie      : %s\n", A[i].CATEGORIE);
                printf(" Nombre. Stock.    : %d\n", A[i].NOMBRE_STOCK);
                printf(" Date. Entree. : %d/%d/%d\n",A[i].DATE_ENTREE.JOUR, A[i].DATE_ENTREE.MOIS,A[i].DATE_ENTREE.ANNEE);
                printf("\nNouvelles coordonnees de %s\n", A[i].NOM);
                printf(" Categorie      : ");
                fflush(stdin);
                scanf("%s",A[i].CATEGORIE);
                printf("Nombre. Stock.    : ");
                scanf("%d", &A[i].NOMBRE_STOCK);
                printf("Date. Entree. : ");
                printf("jour : ");
                scanf("%d",&A[CPT].DATE_ENTREE.JOUR);
                printf("mois : ");
                scanf("%d",&A[CPT].DATE_ENTREE.MOIS);
                printf("annee : ");
                scanf("%d",&A[CPT].DATE_ENTREE.ANNEE);
                printf("\nModification effectuee !");
              }
           }
              if (trouve == 0){
                printf("\nAucune entree correspondante !");
                scanf("%s");
              }

}


#endif // MODIFIER_H_INCLUDED
