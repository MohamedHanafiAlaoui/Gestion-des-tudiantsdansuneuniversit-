# include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count = 8;
int vcount = 0;

typedef  struct 
{
    int     Numerounique ;
    char    Nom [100];
    char    Prenom [100];
    char    DateNaissance[100];
    char    Departement[100];
    float   generale;
}etudiants ;

typedef  struct 
{
    int     Numerounique ;
    char    Nom [100];
    char    Prenom [100];
    char    DateNaissance[100];
    char    Departement[100];
    float   generale;
}Vetudiants ;

void    Float_swap(float *p1, float *p2)
{
    float a;
     a = *p1;
    *p1 = *p2;
    *p2 = a;
}

void    Int_swap(int *p1, int *p2)
{
    int a;
    a = *p1;
    *p1 = *p2;
    *p2 = a;
}

void    char_swap(char *p1 ,char *p2)
{
    char a[100];
    strcpy(a,p1);
    strcpy(p1,p2);
    strcpy(p2,a);
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
void    Trier(etudiants etudiant[100], Vetudiants Vetudiant[100]);
void    TriAlphabetique(etudiants etudiant[100]);
void    Trimoyenne(etudiants etudiant[100]);
void    TriReussite (etudiants etudiant[100],Vetudiants Vetudiant[100]);

void    data(  etudiants etudiant[100])
{

            strcpy(etudiant[0].Nom , "mohamed");
            strcpy(etudiant[0].Prenom , "hanafi");
            strcpy(etudiant[0].DateNaissance ,"2001/03/19");
            strcpy(etudiant[0].Departement  , "A" );
            etudiant[0].generale  = 16.5 ;
            etudiant[0].Numerounique = 1;
            //----------------------------------------------
            strcpy(etudiant[1].Nom , "abdelhafid");
            strcpy(etudiant[1].Prenom , "mohamed");
            strcpy(etudiant[1].DateNaissance ,"2001/01/10");
            strcpy(etudiant[1].Departement  , "B" );
            etudiant[1].generale  = 16.5 ;
            etudiant[1].Numerounique = 2;
            //----------------------------------------------
            strcpy(etudiant[2].Nom , "abdelhafid");

            strcpy(etudiant[2].Prenom , "mohamed");
            strcpy(etudiant[2].DateNaissance ,"2002/02/20");
            strcpy(etudiant[2].Departement  , "C" );
            etudiant[2].generale  = 16.5 ;
            etudiant[2].Numerounique = 3;
            //----------------------------------------------
            strcpy(etudiant[3].Nom , "hamza");

            strcpy(etudiant[3].Prenom , "mohamed");
            strcpy(etudiant[3].DateNaissance ,"2003/03/30");
            strcpy(etudiant[3].Departement  , "D" );
            etudiant[3].generale  = 16.5 ;
            etudiant[3].Numerounique = 4;
            //----------------------------------------------
            strcpy(etudiant[4].Nom , "anass");
            strcpy(etudiant[4].Prenom , "mohamed");
            strcpy(etudiant[4].DateNaissance ,"2007/07/18");
            strcpy(etudiant[4].Departement  , "A" );
            etudiant[4].generale  = 19 ;
            etudiant[4].Numerounique = 5;
            //----------------------------------------------
            strcpy(etudiant[5].Nom , "mariem");
            strcpy(etudiant[5].Prenom , "mohamed");
            strcpy(etudiant[5].DateNaissance ,"2006/06/05");
            strcpy(etudiant[5].Departement  , "B" );
            etudiant[5].generale  = 17.5 ;
            etudiant[5].Numerounique = 6;
            //----------------------------------------------
            strcpy(etudiant[6].Nom , "aya");

            strcpy(etudiant[6].Prenom , "mohamed");
            strcpy(etudiant[6].DateNaissance ,"2004/04/15");
            strcpy(etudiant[6].Departement  , "C" );
            etudiant[6].generale  = 6.5 ;
            etudiant[6].Numerounique = 7;
            //----------------------------------------------
            strcpy(etudiant[7].Nom , "aamir");
            strcpy(etudiant[7].Prenom , "mohamed");
            strcpy(etudiant[7].DateNaissance ,"2005/05/25");
            strcpy(etudiant[7].Departement  , "D" );
            etudiant[7].generale  = 19.5 ;
            etudiant[7].Numerounique = 8;
}

int numirInt()
{
    int i = 0;
    int s = 0;
    char choi[10];
    scanf("%s",choi);
    while (choi[i])
    {
        if ( choi[i] >= '0' && choi[i] <= '9')
        {
            s = (s * 10) + (choi[i] - 48 );
        }
        else
        {
            return 10;
        }
        i++; 
    }
    return s;
}

int main()
{
etudiants etudiant[100];
Vetudiants Vetudiant[100];
    data(etudiant);
    int choi ;
    int i = 0;

    
    while(1)
    {
        aficeh();
        choi = numirInt();
  
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
    case 5:
        Calculer(etudiant);
        break;
    case 6:
        Rechercher(etudiant);
        break;
    case 7:
        Trier(etudiant , Vetudiant);
        break;
    case 0:
        printf("sortire");
        exit(0);  
    default:
        printf("Default!");
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
    printf("1 => modifer\n2 => Supprimer");
    chio = numirInt();
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
    id = numirInt();
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
    id = numirInt();

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
            etudiant[i].Numerounique = i + 1;
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
    int choi;
    choi = numirInt();
    if (choi == 1)
    {
    printf ("totale etudiant %d \n", count);
        
    }
    else if (choi == 2)
    {
            NombreChaqueDepartement(etudiant);
    }else if (choi == 3)
    {
        NombreChaquemoyenne(etudiant);
    }
    else if (choi == 4)
    {
        Meilleures3Notes(etudiant);
    }
    else if (choi == 6)
    {
        ChaquedePartement10(etudiant);
    }   
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
        if (etudiant[i].Departement[0] == 'B' && etudiant[i].generale >= 10.00)
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
void    Trier(etudiants etudiant[100], Vetudiants Vetudiant[100])
{
    int choi;
    choi = numirInt();

    if (choi == 1)
    {
       TriAlphabetique(etudiant);
    }
    else if (choi == 2)
    {
        Trimoyenne(etudiant);
    }
    else if (choi == 3)
    {
        TriReussite(etudiant,Vetudiant);
    }

}


void TriAlphabetique(etudiants etudiant[100])
{
    for (int i = 0; i < count-1; i++)
    {
        for (int j = 0; j < count-1-i; j++)
        {
        if (strcmp(etudiant[j].Nom ,etudiant[j + 1].Nom) > 0)
        {
            Int_swap(&etudiant[j].Numerounique , &etudiant[j + 1].Numerounique);
            char_swap(etudiant[j].Nom , etudiant[j + 1].Nom );
            char_swap(etudiant[j].Prenom , etudiant[j + 1].Prenom);
            char_swap(etudiant[j].DateNaissance ,  etudiant[j + 1].DateNaissance);
            char_swap(etudiant[j].Departement , etudiant[j + 1].Departement);
            Float_swap(&etudiant[j].generale , &etudiant[j + 1].generale);
        }
        }
    }
}

void Trimoyenne(etudiants etudiant[100])
{
    for (int i = 0; i < count-1; i++)
    {
        for (int j = 0; j < count-1-i; j++)
        {
        if (etudiant[j].generale < etudiant[j + 1].generale)
        {
            Int_swap(&etudiant[j].Numerounique ,&etudiant[j+1].Numerounique);
            char_swap(etudiant[j].Nom , etudiant[j+1].Nom );
            char_swap(etudiant[j].Prenom , etudiant[j+1].Prenom);
            char_swap(etudiant[j].DateNaissance ,  etudiant[j+1].DateNaissance);
            char_swap(etudiant[j].Departement , etudiant[j+1].Departement);
            Float_swap(&etudiant[j].generale , &etudiant[j+1].generale);
        }
        }
    }
}

void    TriReussite (etudiants etudiant[100] ,Vetudiants Vetudiant[100])
{
    for (int i = 0; i < count; i++)
    {
        if ( etudiant[i].generale > 9)
        {
            strcpy(Vetudiant[vcount].Nom , etudiant[i].Nom );
            strcpy(Vetudiant[vcount].Prenom , etudiant[i].Prenom);
            strcpy(Vetudiant[vcount].DateNaissance ,  etudiant[i].DateNaissance);
            strcpy(Vetudiant[vcount].Departement , etudiant[i].Departement);
            Float_swap(&Vetudiant[vcount].generale , &etudiant[i].generale);
            Int_swap(&Vetudiant[vcount].Numerounique , &etudiant[i].Numerounique);
            vcount++;
        }
        
    }
    for (int i = 0; i < vcount; i++)
    {
        printf ("%.2f \n",Vetudiant[i].generale); 
        
    }
    
    
}
