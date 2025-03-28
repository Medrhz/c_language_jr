#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;

    do{
     printf("enter a number between 10 and 20\n");
      scanf("%d",&number);
         if(number > 20){
            printf("Plus petit !");
          }
          if(number < 10){
            printf("Plus grand !");
          }
    }
    while(number < 10 || number >20);

    return 0;
}
