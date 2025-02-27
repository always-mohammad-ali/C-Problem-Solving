#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    for(int i = 2; i<=N; i+=2)
    {
        if(N>5 && N<2000)
        {
            int result = i * i;
            printf("%d^2 = %d\n", i, result);
        }
    }

    return 0;
}
