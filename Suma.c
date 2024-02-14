#include <stdio.h>
#include <stdlib.h>

int suma();

int main(){

    int n1, n2;
    
    printf("Primer valor: ");
    scanf("%d", &n1);

    printf("Segundo valor: ");
    scanf("%d", &n2);

    printf("La suma es: %d\n", suma(n1, n2));
    
    system("pause");
    return 0;
}

int suma(int a, int b){

    int suma = a + b;
    
    return suma; 
}