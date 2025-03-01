#include <stdio.h>

int main(){
    int N, X, Y, sum;
    scanf("%d", &N);

    for(int i = 1; i<=N; i++)
    {

            scanf("%d %d", &X, &Y);

            if(X>Y)
            {
                int temp = X;
                X=Y;
                Y = temp;
            }
            sum=0;
            for(int m = X+1; m<Y; m++)
            {
                if(m%2!=0)
                {
                    sum+=m;
                }

            }
             printf("%d\n",sum);


    }



    return 0;
}
