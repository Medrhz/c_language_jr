#include <stdio.h>
#include <stdlib.h>

int main()
{

    // boucles

    // for(int i = 0 ;i<10;i++){
    //   printf("hello from from\n");
    //}

    // table multiplication 5;
    /*
    printf("%d\n", 5*1);
    printf("%d\n", 5*2);
      printf("%d\n", 5*3);
      printf("%d\n", 5*4);
      printf("%d\n", 5*5);
      printf("%d\n", 5*6);
      */
    // for

    for (int x = 0; x <= 10; x++)
    {
        printf("-----------\n");
        int res = 5 * x;
        printf("%d * %d = %d\n", 5, x, res);
    }

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

    // while
    int i = 0; // declaration
    while (i <= 10)
    {
        int res = 5 * i;
        printf("%d * %d = %d\n", 5, i, res);
        i++;
    }
    return 0;
}
