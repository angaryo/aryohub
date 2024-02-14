#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float pedir_num(float x);
float sum2n(float m, float n);
float prom(float v1, float v2, float v3);


int main(void){

    do{
    
    int a=0, b=0, c=0;
    
    printf("Introduza 3 valores para hacer las sumas: \n");
    a=pedir_num(a);
    b=pedir_num(b);
    c=pedir_num(c);

    float ayb=0, byc=0, ayc=0, pr=0;

    ayb=sum2n(a,b);
    byc=sum2n(b,c);
    ayc=sum2n(a,c);
    pr=prom(a, b, c);

    printf("\n\nLa suma de 1ro y 2do es: %f", ayb);
    printf("\n\nLa suma de 2do y 3ro es: %f", byc);
    printf("\n\nLa suma de 1ro y 3ro es: %f", ayc);
    printf("\n\nEl promedio de los 3 es: %f", pr);
    
    } while (1);

    return 0;
}

float pedir_num(float x){
    printf("Introduce un numero: ");
    scanf("%f", &x);
    return x;
}

float sum2n(float m, float n){
    float r=0;
    r = m+n;
    return r;
}

float prom(float v1, float v2, float v3){
    float prom=0;
    prom = ((v1+v2+v3)/3);

    return prom;
}