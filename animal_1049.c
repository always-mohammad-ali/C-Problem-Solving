#include <stdio.h>

int main(){
    char input1[50], input2[50], input3[50];

    scanf("%s %s %s", &input1, &input2, &input3);

    if(strcmp(input1, "vertebrado") == 0 && strcmp(input2, "ave") ==0 && strcmp(input3, "carnivoro") == 0)
    {
        printf("aguia\n");
    }

    else if(strcmp(input1, "vertebrado") == 0 && strcmp(input2, "ave") ==0 && strcmp(input3, "onivoro") == 0)
    {
        printf("pomba\n");
    }

    else if(strcmp(input1, "vertebrado") == 0 && strcmp(input2, "mamifero") == 0 && strcmp(input3, "onivoro") == 0)
    {
        printf("homem\n");
    }

    else if(strcmp(input1, "vertebrado") == 0 && strcmp(input2, "mamifero") == 0 && strcmp(input3, "herbivoro") == 0)
    {
        printf("vaca\n");
    }

    if(strcmp(input1, "invertebrado")==0 && strcmp(input2, "inseto")==0 && strcmp(input3, "hematofago")==0)
    {
        printf("pulga\n");
    }

    else if(strcmp(input1, "invertebrado")==0 && strcmp(input2, "inseto")==0 && strcmp(input3, "herbivoro")==0)
    {
        printf("lagarta\n");
    }

    else if(strcmp(input1, "invertebrado") == 0 && strcmp(input2, "anelideo")==0 && strcmp(input3, "hematofago") == 0)
    {
        printf("sanguessuga\n");
    }

    else if(strcmp(input1, "invertebrado") == 0 && strcmp(input2, "anelideo")==0 && strcmp(input3, "onivoro") == 0)
    {
        printf("minhoca\n");
    }


    return 0;
}
