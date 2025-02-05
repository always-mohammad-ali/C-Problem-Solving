#include <stdio.h>


int main(){
    int product_onecode, product_oneunit, product_twocode, product_twounit;
    float price_1, price_2;

    scanf("%d %d %f", &product_onecode, &product_oneunit, &price_1);
    scanf("%d %d %f", &product_twocode, &product_twounit, &price_2);

    float total = (product_oneunit*price_1)+(product_twounit*price_2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);


    return 0;
}
