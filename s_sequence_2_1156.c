#include <stdio.h>

int main()
{
    float sum=0, deno=1;

    for(float i = 1; i<=39; i+=2)
    {
        float iterate = i/deno;
        deno*=2;
        sum+=iterate;
    }
    printf("%.2f\n", sum);


    return 0;
}
