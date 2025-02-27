#include <stdio.h>

int main(){

   int choice, alco=0, gas=0, dies=0;
   while(1)
   {
       scanf("%d", &choice);
       if(choice==4)
       {
           break;
       }

       switch(choice)
       {
           case 1:
               alco++;
               break;
           case 2:
               gas++;
               break;
           case 3:
               dies++;
               break;
           case 4:
               continue;


       }

   }
   printf("MUITO OBRIGADO\n");
   printf("Alcool: %d\n", alco);
   printf("Gasolina: %d\n", gas);
   printf("Diesel: %d\n", dies);

    return 0;
}
