#include <stdio.h>

int main(){
    int num, total_odd=0, total_even=0, total_positive = 0, total_neg=0;

    for(int i = 0; i<5; i++)
    {
        scanf("%d", &num);
        if(num >0)
        {
            total_positive++;
        }
        if(num<0)
        {
            total_neg++;
        }
        if(num%2 == 0)
        {
            total_even++;
        }
        if(num%2 != 0)
        {
            total_odd++;
        }
    }
    printf("%d valor(es) par(es)\n",total_even);
    printf("%d valor(es) impar(es)\n",total_odd);
    printf("%d valor(es) positivo(s)\n",total_positive);
    printf("%d valor(es) negativo(s)\n",total_neg);


    return 0;
}
