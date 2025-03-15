#include <stdio.h>
#include <stdlib.h>

int main()
{
    // for
    int a = 0;
    int somme = 0;
    int factorielle = 1;
    printf("enter a number : \n");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        somme += i;
        factorielle = factorielle * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            int res = i * j;
            printf("%d x %d = %d\n", i, j, res);
        }
        printf("==================\n ");
    }
    // printf("somme : %d\n",somme);
    // printf("factorielle : %d",factorielle);
    return 0;
}
