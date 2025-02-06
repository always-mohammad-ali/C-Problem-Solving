#include <stdio.h>

int main(){
    int seconds, hours, mint;
    scanf("%d", &seconds);

    hours = seconds /3600;

    seconds = seconds % 3600;

    mint = seconds / 60;

    seconds = seconds % 60;

    printf("%d:%d:%d\n", hours, mint, seconds);




    return 0;
}
