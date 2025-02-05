#include <stdio.h>

int main(){
    double A, B, C, TRI,CIR,TRAP,QUAD, RECTAN;
    scanf("%lf %lf %lf", &A, &B, &C);

    TRI = 0.5 * A * C;
    CIR = 3.14159 * C *C;
    TRAP = 0.5*(A + B) * C;
    QUAD = B * B;
    RECTAN = A * B;

    printf("TRIANGULO: %.3lf\n",TRI );
    printf("CIRCULO: %.3lf\n",CIR );
    printf("TRAPEZIO: %.3lf\n",TRAP );
    printf("QUADRADO: %.3lf\n",QUAD );
    printf("RETANGULO: %.3lf\n",RECTAN );

    return 0;
}
