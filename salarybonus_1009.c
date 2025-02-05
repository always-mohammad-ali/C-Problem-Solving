#include <stdio.h>
int main(){
    char name[50];
    scanf("%s", name);

    double fixed_salary, total_sold, total;


    scanf("%lf %lf", &fixed_salary, &total_sold);




    double bonus = (total_sold * 0.15);


    printf("TOTAL = R$ %.2lf\n", fixed_salary+bonus);


    return 0;
}
