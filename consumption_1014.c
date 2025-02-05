#include <stdio.h>


int main(){

    int distance;
    float total_fuel;

    scanf("%d %f", &distance, &total_fuel);
    float per_km = distance / total_fuel;

    printf("%.3f km/l\n", per_km);


    return 0;
}
