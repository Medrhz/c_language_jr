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
    float prixFabrication = 0;
    float prixVente = 0;
    printf("Prix de fabrication :\n");
    scanf("%f", &prixFabrication);
    printf("Prix de vente   :\n");
    scanf("%f", &prixVente);
    float result = prixVente - prixFabrication;
    if (prixVente < prixFabrication)
    {
        printf("Perte : %f", result);
    }
    else
    {
        printf("profit : %.2f", result);
    }
}