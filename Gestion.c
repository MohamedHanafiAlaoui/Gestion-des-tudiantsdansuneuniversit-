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
void    aficeh();


int main()
{
    int choi;
    int i = 0;

    
  etudiants etudiant[100];
    while(1)
    {
        aficeh();
    while (i < 3)
    {
        scanf ("%d",&choi);
       if ( choi >= 0 && choi <= 7)
       {
            break;
       }
       else if (i == 2)
       {
        break;
       }
       i++;
    }
  
    switch (choi)
    {
    case 1:
        ajouter(etudiant);
        printf("%d",count);
        break;
    case 2:
        afficher(etudiant);
        break;
    case 3:
        SupprimerUpdate(etudiant);
        printf("%d",count);
        break;
    default:
        break;
    }
    }
        return 0;
}

void    aficeh()
{
    printf("\n\n/***************************************************************/");
    printf("1 => ajouter\n");
    printf("2 => afficher\n");
    printf("3 => Supprimer et Update\n");
    printf("4 => Supprimer\n");
    printf("5 => Calculer\n");
    printf("6 => Rechercher\n");
    printf("/***************************************************************/\n\n");
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
        scanf ("%f", &etudiant[count].generale); 
        count+=1;
}

void    afficher(etudiants etudiant[100])
{
    for (int i = 0; i < count; i++)
    {
        printf("\n------------------------------\n");
        printf ("id %d \n", etudiant[i].Numerounique);
        printf ("Nom : ");
        printf ("%s \n", etudiant[i].Nom);
        printf ("Prenom : ");
        printf ("%s \n", etudiant[i].Prenom);
        printf ("Date Naissance : ");
        printf ("%s \n", etudiant[i].DateNaissance);
        printf ("Departement : ");
        printf ("%s \n", etudiant[i].Departement);
        printf ("Note generale : ");
        printf ("%.2f \n", etudiant[i].generale); 
           
    }
    
}


void    SupprimerUpdate(etudiants etudiant[100])
{
    int chio;
    printf("");
    scanf("%d",&chio);
    if (chio == 1)
    {
       update(etudiant);
    }
    else if (chio == 2)
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
        for (int i = r; i < count ; i++)
        {
            float a =  etudiant[i+1].generale ;
            int b =  etudiant[i+1].Numerounique ;
            etudiant[i].Numerounique = b-1 ;
            etudiant[i].generale = a;
            strcpy(etudiant[i].Nom , etudiant[i+1].Nom );
            strcpy(etudiant[i].Prenom , etudiant[i+1].Prenom);
            strcpy(etudiant[i].DateNaissance ,  etudiant[i+1].DateNaissance);
            strcpy(etudiant[i].Departement , etudiant[i+1].Departement);

            
        }
        count-=1;
        
    }
    else
    {
    }
    }
}

void    update(etudiants etudiant[100])
{
    
    int r;
    int n = 0;
    char Nome[100];
    printf("Enter the name: ");
    scanf("%s", Nome);
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

