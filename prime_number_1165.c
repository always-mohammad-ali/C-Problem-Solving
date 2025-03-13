#include <stdio.h>

int main()
{

    int N, X, checkPrime;
    scanf("%d", &N);

    for(int i = 1; i<=N; i++)
    {
        scanf("%d", &X);

        checkPrime=1;

        if(X<2)
        {
            checkPrime=0;
        }
        else
        {


            for(int j = 2; j<X; j++)
            {
                if(X%j==0)
                {
                    checkPrime=0;
                    break;
                }
                else
                {
                    checkPrime=1;
                }

            }
        }
        if(checkPrime==1)
        {
            printf("%d eh primo\n", X);
        }
        else
        {
            printf("%d nao eh primo\n", X);
        }

    }

    return 0;
}
