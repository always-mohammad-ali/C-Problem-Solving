#include <stdio.h>

int main()
{
    int X, SUM;

    while(1)
    {
        scanf("%d", &X);
        SUM=0;
        if(X==0)
        {
            break;
        }
        for(int i = 1; i<=5; i++)
        {

            if(X%2!=0)
            {
                X++;
            }

            SUM+=X;
            X+=2;

        }
        printf("%d\n", SUM);
    }

    return 0;
}
