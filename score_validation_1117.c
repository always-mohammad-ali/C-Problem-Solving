#include <stdio.h>

int main(){

    float x,sum=0;

    int count = 0;

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
     float media = sum/2.0;
        printf("media = %.2f\n", media);

    return 0;
}
