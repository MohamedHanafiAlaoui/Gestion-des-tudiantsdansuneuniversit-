# include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count = 0;

typedef  struct 
{
    int     Numerounique ;
    char    Nom [100];
    char    Prenom [100];
    char    DateNaissance[100];
    char    Departement[100];
    float   generale;
}etudiants ;



void    Float_swap(float *p1, float *p2)
{
    float a;
     a = *p1;
    *p1 = *p2;
    *p2 = a;
}
void    char_swap(char *p1 ,char *p2)
{
    char a[100];
    *a = *p1;
    *p1 = *p2;
    *p2 = *a;
}
void    ajouter(etudiants etudiant[100]);
void    SupprimerUpdate(etudiants etudiant[100]);
void    afficher(etudiants etudiant[100]);
void    Statistique(etudiants etudiant[100]);
void    Calculer(etudiants etudiant[100]);
void    update(etudiants etudiant[100]);
void    Supprimer (etudiants etudiant[100]);
void    aficeh();
void    NombreChaqueDepartement(etudiants etudiant[100]);
void    NombreChaquemoyenne(etudiants etudiant[100]);
void    Meilleures3Notes(etudiants etudiant[100]);
void    ChaquedePartement10(etudiants etudiant[100]);
void    Rechercher(etudiants etudiant[100]);
void    TriAlphabetique(etudiants etudiant[100]);



int main()
{
etudiants etudiant[100];

    int choi;
    int i = 0;

    
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
    case 4:
        Statistique(etudiant);
        break;
    default:
        break;
    }
    }
        return 0;
}

void    aficeh()
{
    printf("\n\n/***************************************************************/\n");
    printf("1 => ajouter\n");
    printf("2 => afficher\n");
    printf("3 => Supprimer et Update\n");
    printf("4 => Statistique\n");
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
        printf("\nA =  \nB =  \n C =  \n D = \n");
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

        Supprimer(etudiant);

    }
}

void    update(etudiants etudiant[100])
{
    
    int r;
    int n = 0;
    int id;
    printf("Enter the id: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++)
    {
        if (etudiant[i].Numerounique == id)
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
        printf("\nA =  \nB =  \n C =  \n D = \n");
        printf ("Departement : ");
        scanf ("%s", &etudiant[r].Departement);
        printf ("Note generale : ");
        scanf ("%f", &etudiant[r].generale); 
    }
    else
    {
        printf("no pas cher");
    }  
}

void    Supprimer (etudiants etudiant[100])
{
    int r;
    int n = 0;
    int i, j;
    int id;
    printf("Enter the id : ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) 
    {
        if (etudiant[i].Numerounique == id)
        {
            r = i;
            n = 1;
            break;
        }
    }


         j = r;
        for (int i = r; i < count ; i++)
        {
            strcpy(etudiant[i].Nom , etudiant[i+1].Nom );
            strcpy(etudiant[i].Prenom , etudiant[i+1].Prenom);
            strcpy(etudiant[i].DateNaissance ,  etudiant[i+1].DateNaissance);
            strcpy(etudiant[i].Departement , etudiant[i+1].Departement);
            Float_swap(&etudiant[i].generale , &etudiant[i+1].generale);
            etudiant[i].Numerounique = j + 1;
        }
        count-=1;  
}

void    Calculer(etudiants etudiant[100])
{
    int GlInk;
    int sum = 0;
    printf("jdkd");
    scanf("%d",&GlInk);
    if (GlInk == 1)
    {
        char choi[100];
        printf("\nA =  \nB =  \n C =  \n D = \n");
        scanf("%s",choi);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(etudiant[i].Departement , choi) == 0)
        {

           sum += etudiant[i].generale;
        }
        
    }
    printf("%d",sum);
    }
    else if (GlInk == 2)
    {
        for (int i = 0; i < count; i++)
    {
           sum += etudiant[i].generale;   
    }
    printf("%d",sum);

    }
}


void    Statistique(etudiants etudiant[100])
{


    //printf ("totale etudiant %d \n", etudiant[count].Numerounique);
    NombreChaqueDepartement(etudiant);
}

void    NombreChaqueDepartement(etudiants etudiant[100])
{
    int A = 0 ,B = 0, C = 0, D = 0;
    for (int i = 0; i < count; i++)
    {
        if (etudiant[i].Departement[0] == 'A')
        {
            A+=1;
        }
        if (etudiant[i].Departement[0] == 'B')
        {
            B+=1;
        }
        if (etudiant[i].Departement[0] == 'C')
        {
            C+=1;
        }
        if (etudiant[i].Departement[0] == 'D')
        {
            D+=1;
        }
    }
    printf("A %d B %d C %d D %d",A, B, C, D);
    
}


void    NombreChaquemoyenne(etudiants etudiant[100])
{
    float moyenne;
    printf("enter la ");
    scanf("%f",&moyenne);
    for (int i = 0; i < count; i++)
    {
        if (etudiant[i].generale > moyenne)
        {
            printf("%.2f",etudiant[i].generale);
        }
        
    }
    
}


void    Meilleures3Notes(etudiants etudiant[100])
{
    float max1 = 0;
    float max2 = 0;
    float max3 = 0;
    for (int i = 0; i < count; i++)
    {
        if (max1 < etudiant[i].generale)
        {
            max3 = max2;
            max2 = max1;
            max1 = etudiant[i].generale;
        }
        else if (max1 > max2 && max2 < etudiant[i].generale )
        {
            max3 = max2;
            max2 = etudiant[i].generale;
        }
        else if (max2 > max3 && max3 < etudiant[i].generale )
        {
            max3 = etudiant[i].generale;
            
        }
        
        
    }   
}

void    ChaquedePartement10(etudiants etudiant[100])
{
    int A = 0 ,B = 0, C = 0, D = 0;
    printf ("A = \n");

    for (int i = 0; i < count; i++)
    {
        if (etudiant[i].Departement[0] == 'A' && etudiant[i].generale > 10.00)
        {
            printf ("%d \n",etudiant[i].generale);
        }
    }
    printf ("B = \n");

    for (int i = 0; i < count; i++)
    {
        if (etudiant[i].Departement[0] == 'B' && etudiant[i].generale > 10.00)
        {
            printf ("%d \n",etudiant[i].generale);
            
        }

    }
    printf ("C = \n");
    for (int i = 0; i < count; i++)
    {
        if (etudiant[i].Departement[0] == 'C'&& etudiant[i].generale > 10.00)
        {
            printf ("%d \n",etudiant[i].generale);
        }
    }
    printf ("D = \n");

    for (int i = 0; i < count; i++)
    {
        if (etudiant[i].Departement[0] == 'D'&& etudiant[i].generale > 10.00)
        {
            printf ("%d \n",etudiant[i].generale);
        }
    }
}


void Rechercher (etudiants etudiant[100])
{
    int choi;
    int n = 0;
    int i;


    if (choi == 1)
    {
    char Nome[100];
    printf("Enter the titre: ");
    scanf("%s", Nome);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(etudiant[i].Nom,Nome) == 0)
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

             n = 1;
             break;
        }
    }
    if (n == 0)
    {

    }else
    {
        printf("dlklfd,fld,fl");
    }
    }else if (choi == 2)
    {
        char Nome[100];
    printf("Enter the titre: ");
    scanf("%s", Nome);
    for (int i = 0; i < count; i++)
    {
        if (etudiant[i].Departement[0] == Nome[0])
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
        n = 1;
        }
    }
    if (n == 0)
    {
        printf("dlklfd,fld,fl");

    }
    }
  
}

void TriAlphabetique(etudiants etudiant[100])
{
    for (int i = 0; i < count-1; i++)
    {
        for (int j = 0; j < count-1-i; j++)
        {
        if (strcmp(etudiant[i].Nom ,etudiant[j + 1].Nom) > 0)
        {
            char_swap(etudiant[i].Nom , etudiant[i+1].Nom );
            char_swap(etudiant[i].Prenom , etudiant[i+1].Prenom);
            char_swap(etudiant[i].DateNaissance ,  etudiant[i+1].DateNaissance);
            char_swap(etudiant[i].Departement , etudiant[i+1].Departement);
            Float_swap(&etudiant[i].generale , &etudiant[i+1].generale);

        }
}
}