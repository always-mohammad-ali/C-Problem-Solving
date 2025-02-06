#include <stdio.h>
#include <math.h>


int main(){
    float myNum;
    scanf("%f", &myNum);

    if(myNum>=0 && myNum<=25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(myNum>25 && myNum<=50)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(myNum>50 && myNum<=75)
    {
        printf("Intervalo (50,75]\n");
    }
    else if(myNum>75 && myNum<=100)
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }


    return 0;
}
