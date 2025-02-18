#include <stdio.h>

int main(){

    float N1, N2, N3, N4;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    float average = (N1*2 + N2*3 + N3*4 + N4*1)/10;
    printf("Media: %.1f\n", average);

    if(average>= 7.0)
    {
        printf("Aluno aprovado.\n");
    }

    if(average<=4.9)
    {
        printf("Aluno reprovado.\n");
    }

    if(average>=5.0 && average<=6.9)
    {
        printf("Aluno em exame.\n");
        float another_point;
        scanf("%f", &another_point);
        printf("Nota do exame: %.1f\n", another_point);


        float re_average = (average + another_point)/2;

        if(re_average >=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", re_average);
        }
        else if(re_average<=4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",re_average);
        }
    }
    return 0;
}
