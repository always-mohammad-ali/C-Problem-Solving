#include <stdio.h>

int main() {
    float one, two;
    char operators;

    printf("Enter the first number: ");
    scanf("%f", &one);

    printf("Enter the second number: ");
    scanf("%f", &two);

    printf("Which operation do you want to perform (+, -, *, /): ");
    scanf(" %c", &operators);

    if (operators == '+') {
        printf("Sum = %.2f\n", one + two);
    }
    else if (operators == '-') {
        printf("Difference = %.2f\n", one - two);
    }
    else if (operators == '*') {
        printf("Product = %.2f\n", one * two);
    }
    else if (operators == '/') {
        if (two != 0) {
            printf("Quotient = %.2f\n", one / two);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
