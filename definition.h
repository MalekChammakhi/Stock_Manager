#ifndef DEFINITION_H_INCLUDED
#define DEFINITION_H_INCLUDED

typedef struct DATE
{
       int JOUR;
       int MOIS;
       int ANNEE;
} date;

typedef struct PRODUIT
{
       int NUM;
       char NOM[20];
       char CATEGORIE[30];
       int NOMBRE_STOCK;
       date DATE_ENTREE;
} produit;

#endif // DEFINITION_H_INCLUDED
