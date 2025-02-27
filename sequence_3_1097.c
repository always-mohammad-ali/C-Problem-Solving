#include <stdio.h>

int main(){
    for(int i = 1, startj= 7; i<=9; i+=2, startj+=2)
    {
        for(int j = startj; j>=startj-2; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}
