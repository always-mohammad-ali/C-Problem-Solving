#include <stdio.h>

int main()
{

    int N, user_case, rab=0, rat=0, fro=0, total;
    char animal;
    char percent = '%';
    scanf("%d", &N);

    for(int i = 1; i<= N*2; i++)
    {
        scanf("%d", &user_case);
        scanf("%c", &animal);

        if(animal == 'C')
        {
            rab+= user_case;
        }

        if(animal == 'R')
        {
            rat+= user_case;
        }
        if(animal == 'S')
        {
            fro+= user_case;
        }

    }
    total = rab+rat+fro;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rab);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", fro);

    float per1 = ((rab*1.0)/total)*100.0;
    float per2 = ((rat*1.0)/total)*100.0;
    float per3 = ((fro*1.0)/total)*100.0;

    printf("Percentual de coelhos: %.2f %c\n", per1, percent);
    printf("Percentual de ratos: %.2f %c\n", per2, percent);
    printf("Percentual de sapos: %.2f %c\n", per3, percent);




    return 0;
}
