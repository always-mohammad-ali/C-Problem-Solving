#include <stdio.h>
#include <math.h>


int main(){

    double x1, y1, x2, y2, distance, root_over_distance;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distance = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    root_over_distance = pow(distance, 0.5);

    printf("%.4lf\n", root_over_distance);


    return 0;
}
