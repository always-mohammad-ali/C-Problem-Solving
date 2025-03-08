#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    for(int i = 1; i<=N; i++)
    {
        int square = i*i;
        int cube = i*i*i;

        printf("%d %d %d\n", i, square, cube);
        printf("%d %d %d\n", i, square+1, cube+1);
    }

    return 0;
}
