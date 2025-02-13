#include <stdio.h>

int main(){

   float x, y, first_x,first_y, second, third, fourth;

   scanf("%f %f", &x, &y);



   if(x>=0.1 && y>=0.1)
   {
       printf("Q1\n");
   }
   else if(x <=-0.1 && y >= 0.1)
   {
       printf("Q2\n");
   }

   else if(x <=-0.1 && y <= -0.1)
   {
       printf("Q3\n");
   }

   else if(x >=0.1 && y <= -0.1)
   {
       printf("Q4\n");
   }

   else if(x ==0 && (y<= -1 || y>=1) )
   {
       printf("Eixo Y\n");
   }

   else if(y ==0 && (x<= -1 || x>=1) )
   {
       printf("Eixo X\n");
   }
   else
   {
    printf("Origem\n");
   }
   return 0;
}
