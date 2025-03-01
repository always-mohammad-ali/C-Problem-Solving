#include <stdio.h>

int main(){
    int N;
    float X, Y, result;

    scanf("%d", &N);

    for(int i = 1; i<=N; i++)
    {
        scanf("%f %f", &X, &Y);
        result=0;
        if(Y==0)
        {
           printf("divisao impossivel\n");
        }
        else
        {

           result = X/Y;
           printf("%.1f\n", result);
        }
    }

    return 0;
}
