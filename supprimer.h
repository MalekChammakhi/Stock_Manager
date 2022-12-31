#ifndef SUPPRIMER_H_INCLUDED
#define SUPPRIMER_H_INCLUDED
#include "definition.h"

void supprimer(produit A[100], int CPT){
                int trouve;
                char nom[20],reponse;
                system("cls");
                printf("\nSUPPRESSION D'UN PRODUIT\n\n");
                printf("Nom : ");
                fflush(stdin);
                scanf("%s",nom);
                trouve = 0;
                for(int i=0 ; i<CPT ; i++)
                {
                    if ( strcmp(A[i].NOM, nom) == 0 )
                    {
                         trouve = 1;
                         printf("\nVoulez vous reellement supprimer %s  (O/N) ?\n",A[i].NOM);
                         fflush(stdin);
                         reponse = getchar();
                         if( (reponse == 'o') || (reponse == 'O') )
                         {
                             for (int j=i;j<CPT;j++)
                             {
                                 A[j]=A[j+1];
                                 A[j].NUM=A[j].NUM-1;
                             }
                             CPT--;
                             printf("\nSuppression effectuee !");
                         }
                    }
                }
                if (trouve == 0){
                    printf("\nAucune entree correspondante !");
                }
                   scanf("%s");

}

#endif // SUPPRIMER_H_INCLUDED
