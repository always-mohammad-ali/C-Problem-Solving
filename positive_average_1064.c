#include <stdio.h>

int main(){
    float num;
    int positive_total_num = 0;
    float average_total_num = 0;

    for(int i = 0; i<6; i++)
    {
        scanf("%f", &num);
        if(num>0)
        {
            positive_total_num ++;
            average_total_num += num;
        }
    }
    printf("%d valores positivos\n", positive_total_num);
    printf("%.1f\n", average_total_num/positive_total_num);


    return 0;
}
