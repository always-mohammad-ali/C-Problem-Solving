#include <stdio.h>

int main(){

    float x, sum;
    int count, choice;

    while(1)
    {
        sum =0.0;
        count=0;
        while(count<2)
        {

        scanf("%f", &x);

        if(x<0 || x>10)
        {
            printf("nota invalida\n");
        }
        else
        {
            sum+=x;
            count++;
        }
        }
        printf("media = %.2f\n",sum/2);



    do
    {
      printf("novo calculo (1-sim 2-nao)\n");

      scanf("%d", &choice);

    }while(choice!=1 && choice!=2);

    if(choice == 2)
    {
        break;
    }
    }


    return 0;
}
