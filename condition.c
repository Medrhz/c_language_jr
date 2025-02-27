#include <stdio.h>
#include <stdlib.h>

void main()
{

    // < > <= <=  <>  algo
    //  < > <= <= != ==    c
    // et ou not   algo
    // && ||  !
    /*
       Données d'entrée
       Prix de fabrication : 13
       Prix de vente : 11
       Données de sortie
       Perte
    */
    // float prixFabrication = 0;
    // float prixVente = 0;
    // printf("Prix de fabrication :\n");
    // scanf("%f", &prixFabrication);
    // printf("Prix de vente   :\n");
    // scanf("%f", &prixVente);
    // float result = prixVente - prixFabrication;
    // if (prixVente < prixFabrication)
    // {
    //     printf("Perte : %f", result);
    // }
    // else
    // {
    //     printf("profit : %.2f", result);
    // }

    //====== example 2 =========
    // && => et
    // || => ou
    // !  => not
    int age = 0;
    int dn = 0;
    printf("enter dn : \n");
    scanf("%d", &dn);
    age = 2025 - dn;
    if (age >= 6 && age <= 7)
    {
        printf("Poussin\n");
    }
    else if (age >= 8 && age <= 9)
    {
        printf("Pupille\n");
    }
    else if (age >= 10 && age <= 11)
    {
        printf("Minime\n");
    }
    else if (age >= 12)
    {
        printf("Cadet\n");
    }
    else
    {
        printf("ignore\n");
    }
}