#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age = 0;
    printf("enter your age:\n");
    scanf("%d", &age);

    // et &&
    // ou ||
    // not !
    /*
        "Poussin" de 6 � 7 ans
        "Pupille" de 8 � 9 ans
        "Minime" de 10 � 11 ans
        "Cadet" apr�s 12 ans
    */

    if (age != 18)
    {
        printf("hello dear : \n");
        printf("your age is :%d years old\n", age);
    }
    else
    {
        printf("not valid\n");
    }

    printf("good by !");

    /*

   float weight = 0;
   float salary = 0;
   char gender = ' ';
   printf("enter your weight (kg) :\n");
   scanf("%f",&weight);
   printf("enter your salary (DH) : \n");
   scanf("%f",&salary);
   printf("enter your gender (F/M) :\n");
   scanf(" %c",&gender);
   printf("======= client details ======\n");
   printf("your salary is :%.2f DH \n",salary);
   printf("your weight is :%.2f KG\n",weight);
   printf("your gender is :%c\n",gender);


   */
}
