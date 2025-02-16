#include <stdio.h>

int main(){

    float salary;
    scanf("%f", &salary);

    if(salary >= 0.00 && salary <= 2000.00)
    {
        printf("Isento\n");
    }

    else if(salary >= 2000.01 && salary <=3000.00)
    {
        float tax1 = salary - 2000.00;
        tax1 = tax1 * (8.0/100);
        printf("R$ %.2f\n", tax1);
    }

    else if(salary >= 3000.01 && salary <= 4500.00)
    {
        float tax1 = 1000.00 * (8.0/100);
        float tax2 = salary - 3000.00;

        tax2 = tax1 + (tax2 *(18.0/100));
        printf("R$ %.2f\n", tax2);
    }

    else if(salary >= 4500.00)
    {
        float tax1 = 1000.00 * (8.0/100);
        float tax2 = 1500.00 * (18.0/100);
        float tax3 = salary - 4500.00;

        tax3 = tax1 + tax2 + (tax3 * (28.0/100));
        printf("R$ %.2f\n", tax3);
    }


    return 0;
}
