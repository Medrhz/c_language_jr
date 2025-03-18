#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 0;
    age = 23;
    float weight = 0;
    char gender = ' ';
    printf("Enter age:\n");
    scanf("%d", &age);
    printf("Enter weight:\n");
    scanf("%f", &weight);
    printf("Enter gender\n");
    scanf(" %c", &gender);
    printf("the weight is%.2f\n", weight);
    printf("Gender:%c", gender);
    printf("Age is:%d", age);
    return 0;
}
