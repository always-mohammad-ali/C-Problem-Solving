#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    if(N>1 && N<1000)
    {
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j<=3; j++)
            {

                if(j==1)
                {
                    printf("%d ",i);
                }
                if(j==2)
                {
                    printf("%d ",i*i);
                }
                if(j==3)
                {
                    printf("%d", i*i*i);
                }

            }
            printf("\n");
        }
    }


    return 0;
}
