#include <stdio.h>

int main(){
    double R, formula;
    scanf("%lf", &R);
    formula = ((4.0/3) * 3.14159 * R * R * R);

    printf("VOLUME = %.3lf\n", formula);


    return 0;
}
