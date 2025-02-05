#include <stdio.h>
#include <stdlib.h>

/*
int main(){
    int a, b, s, max_ab, final_max;
    scanf("%d %d %d", &a, &b, &s);

    max_ab = (a+b+abs(a-b))/2;
    final_max = (max_ab + s + abs(max_ab - s))/2;

    printf("%d eh o maior\n", final_max);


    return 0;
}
*/
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >=c)
    {
        printf("%d", a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d", b);
    }

    else
    {
        printf("%d", c);
    }

    return 0;
}
