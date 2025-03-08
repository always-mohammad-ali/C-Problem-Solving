#include <stdio.h>

int main()
{
    int A, N, SUM=0;

    scanf("%d %d", &A, &N);

    while(N<=0)
    {
        scanf("%d", &N);
    }


    for(int i = 0; i<N; i++)
    {
        SUM+=A+i;
    }
    printf("%d\n", SUM);


    return 0;
}
