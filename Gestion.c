# include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count = 0;

typedef  struct etudiant 
{
    int Numerounique ;
    char Nom [100];
    char Prenom [100];
    char DateNaissance[100];
    char Departement[100];
    float generale;
}etudiants ;

void    ajouter(etudiants etudiant[100] );
void    SupprimerUpdate(etudiants etudiant[100]);
void    afficher(etudiants etudiant[100]);
void    Statistique(etudiants etudiant[100]);
void    Calculer(etudiants etudiant[100]);
void    update(etudiants etudiant[100]);
void    Supprimer (etudiants etudiant[100]);


int main()
{
  etudiants etudiant[100];
  ajouter(etudiant);
  printf("%d",count);

}

void    ajouter(etudiants etudiant[100] )
{
        etudiant[count].Numerounique = count + 1; 
        printf ("Nom : ");
        scanf ("%s", &etudiant[count].Nom);
        printf ("Prenom : ");
        scanf ("%s", &etudiant[count].Prenom);
        printf ("Date Naissance : ");
        scanf ("%s", &etudiant[count].DateNaissance);
         printf ("Departement : ");
        scanf ("%s", &etudiant[count].Departement);
        printf ("Note generale : ");
        scanf ("%d", &etudiant[count].generale); 
        count+=1;
}

void    Supprimerupdate(etudiants etudiant[100])
{


}

void    update(etudiants etudiant[100])
{
    
    int r;
    int n = 0;
    char Nome[100];
    printf("Enter the name: ");
    scanf("%s", Nome);
    to_lower_case(Nome);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(etudiant[count].Nom ,Nome) == 0)
        {
             r = i;
             n = 1;
             break;
        }
    }
    if ( n == 1)
    {
        printf ("Nom : ");
        scanf ("%s", &etudiant[r].Nom);
        printf ("Prenom : ");
        scanf ("%s", &etudiant[r].Prenom);
        printf ("Date Naissance : ");
        scanf ("%s", &etudiant[r].DateNaissance);
        printf ("Departement : ");
        scanf ("%s", &etudiant[r].Departement);
        printf ("Note generale : ");
        scanf ("%d", &etudiant[r].generale); 
    }
    else
    {

    }  
}

void    Supprimer (etudiants etudiant[100])
{
    int r;
    int n = 0;
    int i, j;
    char Nome[100];
    printf("Enter the titre: ");
    scanf("%s", Nome);

    for (i = 0; i < count; i++) 
    {
        if (strcmp(etudiant[count].Nom,Nome) == 0)
        {
            r = i;
            n = 1;
            break;
        }
    }

    if ( n == 1)
    {
        printf ("Nom : ");
        scanf ("%s", &etudiant[r].Nom);
        printf ("Prenom : ");
        scanf ("%s", &etudiant[r].Prenom);
        printf ("Date Naissance : ");
        scanf ("%s", &etudiant[r].DateNaissance);
        printf ("Departement : ");
        scanf ("%s", &etudiant[r].Departement);
        printf ("Note generale : ");
        scanf ("%d", &etudiant[r].generale); 
    }
    else
    {
    }
}
