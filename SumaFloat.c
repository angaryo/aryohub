#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int pedir_num(int x);
int sum2n(int m, int n);

int main(void){

    int a=0, b=0, c=0;
    
    printf("Introduza 3 valores para hacer las sumas: \n");
    a=pedir_num(a);
    b=pedir_num(b);
    c=pedir_num(c);

    int ayb=0, byc=0, ayc=0;

    ayb=sum2n(a,b);
    byc=sum2n(b,c);
    ayc=sum2n(a,c);

    printf("\nLa suma de 1ro y 2do es: %i" ayb);
    printf("\nLa suma de 2do y 3ro es: %i" byc);
    printf("\nLa suma de 1ro y 3ro es: %i" ayc);

    system("pause");
    return 0;
}

int pedir_num(int x){
    printf("Introduce un numero: ");
    scanf("%i" &x);

    return x;
}

int sum2n(int m, int n){
    int r=0;
    r = m+n;
    return r;
}