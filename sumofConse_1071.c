#include <stdio.h>

int main(){

    int X, Y, sum = 0;
    scanf("%d %d", &X, &Y);

    if(X > Y)
    {
        int swap = X;
        X = Y;
        Y = swap;
    }

    for(int i = X+1; i<Y; i++){
        if(i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);


    return 0;
}
