#include <stdio.h>

int main()
{

    int v, n[10];
    scanf("%d", &v);
    printf("N[0] = %d\n",v);

    for(int i = 1; i<10; i++)
    {

        n[i]=v*2;

        printf("N[%d] = %d\n", i, n[i]);
        v=n[i];
    }


    return 0;
}
