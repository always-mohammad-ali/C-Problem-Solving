#include <stdio.h>

int main(){
    float S=1.0, sum=0;

    for(int i=1; i<=100; i++)
    {
        float iterate = S/i;
        sum+=iterate;
    }
    printf("%.2f\n", sum);

    return 0;
}
