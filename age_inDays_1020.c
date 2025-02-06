#include <stdio.h>


int main(){

    int input, years, months, days;
    scanf("%d", &input);

    years = input / 365;

    input = input % 365;

    months = input / 30;

    input = input % 30;

    days = input;

    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);

    return 0;
}
