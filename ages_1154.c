#include <stdio.h>

int main()
{
    int x, count=0;
    float sum=0;

    while(1)
    {
        scanf("%d", &x);
        if(x<0)
        {
            break;
        }

        sum+=x;
        count++;
    }
    float avg = sum/count;
    printf("%.2f\n", avg);
    return 0;
}
