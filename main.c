#include <stdio.h>
#include "header.h"

int main(){
    int age;
    char hair_color[20];

    printf("Informe sua idade: \n");
    scanf("%d %s", &age, &hair_color);
    readInfo(age, hair_color);
    return 0;
}