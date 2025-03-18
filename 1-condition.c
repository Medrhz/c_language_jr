#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 0;
    int b = 0;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Enter mode : 1_addition 2_substraction 3_multiplication 4_division/n");
    int c = 0;
    scanf("%d", &c);
    if (c == 1)
    {
        int d = a + b;
        printf("%d + %d = %d", a, b, d);
    }
    if (c == 3)
    {
        int d = a * b;
        printf("%d x %d = %d", a, b, d);
    }
    if (c == 3)
    {
        int d = a / b;
        printf("%d / %d = %d", a, b, d);
    }
    return 0;
}
