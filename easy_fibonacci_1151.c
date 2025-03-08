#include <stdio.h>

int main(){

    int N, FIRST=0, SECOND=1, SUM;
    scanf("%d", &N);

    for(int i = 0; i<N; i++)
    {
        if(i==0)
        {
            printf("%d", FIRST);
        }
        else if(i==1)
        {
            printf(" %d", SECOND);
        }
        else if(i>1)
        {

            SUM=FIRST+SECOND;
            printf(" %d", SUM);
            FIRST = SECOND;
            SECOND = SUM;
        }

    }
    printf("\n");

    return 0;
}
