#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, formula1, formula2;
    scanf("%lf %lf %lf", &A, &B, &C);

    formula1 = (-B+ sqrt(B*B - 4*A*C))/(2*A);
    formula2 = (-B- sqrt((B*B) - (4*A*C)))/(2*A);


    if(A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else if((B*B-4*A*C) < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n", formula1);
        printf("R2 = %.5lf\n", formula2);
    }


    return 0;
}
