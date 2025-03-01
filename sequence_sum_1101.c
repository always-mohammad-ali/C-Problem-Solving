#include <stdio.h>

int main(){

    int M, N;
    while(1)
    {
        int sum=0;
        scanf("%d %d", &M, &N);
        if(M>N)
        {
            int temp = M;
            M=N;
            N = temp;
        }
        if(M<=0 || N<=0)
        {
            break;
        }
        for(int i = M; i<=N; i++)
        {
            sum+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n", sum);
    }


    return 0;
}
