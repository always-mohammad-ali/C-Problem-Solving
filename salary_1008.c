#include <stdio.h>

int main(){

    int employee, number;
    float rate;
    scanf("%d %d %f", &employee, &number, &rate);


    float salary=number*rate;
    printf("NUMBER = %d\n",employee);
    printf("SALARY = U$ %.2f\n",salary);



    return 0;
}

