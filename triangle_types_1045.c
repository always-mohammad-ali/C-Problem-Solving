#include <stdio.h>

int main(){

    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    if(B > A)
    {
        double temp = A;
        A = B;
        B = temp;
    }
    if(C > A)
    {
        double temp = A;
        A = C;
        C = temp;
    }
    if(C > B)
    {
        double temp = B;
        B = C;
        C = temp;
    }
    if (A >= B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }



    if ((A*A == B*B + C*C))
    {
        printf("TRIANGULO RETANGULO\n");

    }

    else if((A*A > B*B + C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else
    {
        printf("TRIANGULO ACUTANGULO\n");
    }


    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }


    else if (A == B || B == C || C == A)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
