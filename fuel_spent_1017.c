#include <stdio.h>


int main(){
    int spent_time, average_speed, total_distance;
    scanf("%d %d", &spent_time, &average_speed);

    total_distance = spent_time * average_speed;

    double fuel_need = total_distance / 12.0;
    printf("%.3lf\n", fuel_need);


    return 0;
}
