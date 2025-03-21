#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    unsigned long long fib[60];
    fib[0]=0;
    fib[1]=1;

    for(int i=2; i<=60; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    while(t--)
    {
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
    }


    return 0;
}
