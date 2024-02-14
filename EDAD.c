#include <stdio.h>
#include <stdlib.h>

int rectAn();
int rectMe();

int main(){

    char aaa, mmm;

    rectAn(aaa);

    if (aaa>2024)
    {
        printf("Valor Invalido");


    } else {

        printf("Valor Valido");
    }
    

    return 0;
}

int rectAn(char aaa){

    printf("Introduzca su año de nacimiento: ");
    scanf("%i", aaa);
}

int rectMe(char mmm){

    printf("Introduzca su mes de nacimiento: ");
    scanf("%i", mmm);
}