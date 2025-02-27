#include <stdio.h>

int main(){

    int X;
    scanf("%d", &X);

   if(X%2==0)
   {
       X +=1;
       for(int i = X; i<= X+10; i+=2)
       {
           printf("%d\n",i);
       }
   }
   else
   {
       for(int i = X; i<= X+10; i+=2)
       {
           printf("%d\n",i);
       }
   }



    return 0;
}
