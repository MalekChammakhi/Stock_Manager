#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "definition.h"
#include "modifier.h"
#include "supprimer.h"
#include "recherche.h"
#include "afficher.h"

int main()
{
    produit A[100];
    int choix = 0,CPT=0;
    char ch[10];

    while(choix != 6)
 {
 /********** Affichage du menu **********/
 do
 {
   system("cls");
   printf("\nGESTION DE STOCK\n");
   printf("\n* 1 *\tAjouter un produit");
   printf("\n* 2 *\tModifier un produit");
   printf("\n* 3 *\tSupprimer un produit");
   printf("\n* 4 *\tRechercher un produit");
   printf("\n* 5 *\tAfficher tous les produits");
   printf("\n* 6 *\tQuitter le programme");
   printf("\n\nSaisissez votre choix : ");
   fflush(stdin);
   scanf("%s",ch);
   choix=atoi(ch);
  } while( (choix<1)||(choix>6) );



    switch(choix){
    case 1:
        {
       system("cls");
         printf("\nAJOUT D'UN NOUVEAU PRODUIT\n\n");
         A[CPT].NUM = CPT + 1;
         printf("Numero       : %d\n", A[CPT].NUM);
         printf("Nom          : ");
         fflush(stdin);
         scanf("%s",A[CPT].NOM);
         printf("Categorie       : ");
         fflush(stdin);
          scanf("%s",A[CPT].CATEGORIE);
         printf("Nombre. Stock.    : ");
         scanf("%d", &A[CPT].NOMBRE_STOCK);
         printf("Date. Entree. : ");
         printf("jour : ");
         scanf("%d",&A[CPT].DATE_ENTREE.JOUR);
         printf("mois : ");
         scanf("%d",&A[CPT].DATE_ENTREE.MOIS);
         printf("annee : ");
         scanf("%d",&A[CPT].DATE_ENTREE.ANNEE);
         printf("\nOPERATION D'AJOUT EFFECTUEE !");
         CPT++;
        break;
        }
    case 2:
        {
        modifier(A,CPT);
        break;
        }
    case 3:
        {
        supprimer(A,CPT);
        break;
        }
    case 4:
        {
        recherche(A,CPT);
        break;
        }
    case 5:
        {
        afficher(A,CPT);
        break;
        }
    default:{
        break;
    }
}
}
return 0;

}
