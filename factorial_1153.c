#include <stdio.h>

int main(){
    int N, product=1;
    scanf("%d", &N);

    for(int i = N; i>0; i--)
    {
        product*=i;
    }
    printf("%d\n", product);

    return 0;
}
