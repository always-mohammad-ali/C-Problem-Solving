#include <stdio.h>

int main(){

    float salary;
    scanf("%f", &salary);

    if(salary >= 0 && salary <=400.00)
    {
        float re_salary = (salary * 115)/100;
        float increment = (salary * 15)/100;
        char per = '%';
        printf("Novo salario: %.2f\n", re_salary);
        printf("Reajuste ganho: %.2f\n", increment);
        printf("Em percentual: 15 %c\n", per);
    }

    else if(salary >= 400.01 && salary <=800.00)
    {
        float re_salary = (salary * 112)/100;
        float increment = (salary * 12)/100;
        char per = '%';
        printf("Novo salario: %.2f\n", re_salary);
        printf("Reajuste ganho: %.2f\n", increment);
        printf("Em percentual: 12 %c\n", per);
    }

    else if(salary >= 800.01 && salary <=1200.00)
    {
        float re_salary = (salary * 110)/100;
        float increment = (salary * 10)/100;
        char per = '%';
        printf("Novo salario: %.2f\n", re_salary);
        printf("Reajuste ganho: %.2f\n", increment);
        printf("Em percentual: 10 %c\n",per);
    }

    else if(salary >= 1200.01 && salary <=2000.00)
    {
        float re_salary = (salary * 107)/100;
        float increment = (salary * 7)/100;
        char per = '%';
        printf("Novo salario: %.2f\n", re_salary);
        printf("Reajuste ganho: %.2f\n", increment);
        printf("Em percentual: 7 %c\n", per);
    }
    else if(salary >= 2000.00)
    {
        float re_salary = (salary * 104)/100;
        float increment = (salary * 4)/100;
        char per = '%';
        printf("Novo salario: %.2f\n", re_salary);
        printf("Reajuste ganho: %.2f\n", increment);
        printf("Em percentual: 4 %c\n",per);
    }


    return 0;
}
