#include <stdio.h>

int main()
{
    int N, X, Y, SUM;
    scanf("%d", &N);

    for(int i = 1; i<=N; i++)
    {
        SUM=0;

        scanf("%d %d", &X, &Y);

        if(X%2==0)
        {
            X++;
        }

        for(int j=1; j<=Y; j++)
        {
            SUM+=X;
            X+=2;
        }
        printf("%d\n", SUM);

    }

    return 0;
}
