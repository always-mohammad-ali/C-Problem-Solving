#include <stdio.h>

int main(){

    int X, Z, COUNT=0, sum=0;

    scanf("%d %d", &X, &Z);

    while(Z<=X)
    {
        scanf("%d", &Z);
    }

    for(int i = X; i<=Z; i++)
    {
        sum+=i;
        COUNT+=1;
        if(sum>Z)
        {
            break;
        }
    }
    printf("%d\n", COUNT);



    return 0;
}
