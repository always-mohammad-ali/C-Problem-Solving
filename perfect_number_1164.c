#include <stdio.h>

int main()
{

    int N, X, sum, equal;

    scanf("%d", &N);

    for(int i = 1; i<=N; i++)
    {
        scanf("%d", &X);
        sum=0;
        if(X%2!=0)
        {
            printf("%d nao eh perfeito\n", X);
        }
        if(X%2==0)
        {
            for(int j=1; j<=X-1; j++)
            {
                int iterate = X%j;
                if(iterate==0)
                {
                    sum+=j;

                }
                equal = sum;

            }
            if(equal==X)
            {
                printf("%d eh perfeito\n", X);
            }

            else if(equal!=X)
            {
                printf("%d nao eh perfeito\n", X);
            }


        }

    }


    return 0;
}
