#include <stdio.h>

int main(){
    int num;
    int total_even_num = 0;

    for(int i = 0; i<5; i++)
    {
        scanf("%d", &num);
        if(num%2==0)
        {
            total_even_num++;
        }
    }
    printf("%d valores pares\n", total_even_num);

   return 0;
}
