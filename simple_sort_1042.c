#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int original_x = x, original_y = y, original_z = z;

    if(x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    if(x > z)
    {
        int temp = x;
        x = z;
        z = temp;
    }
    if(y > z)
    {
        int temp = y;
        y = z;
        z = temp;
    }

    printf("%d\n%d\n%d\n", x, y, z);
    printf("\n%d\n%d\n%d\n", original_x, original_y, original_z);

    return 0;
}
