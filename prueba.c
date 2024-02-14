#include <stdio.h>
#include <stdlib.h>

void loop(char hk [3][3]);
void intro(char hk [3][3]);

int main(){

    char hk [3][3];

    loop(hk);
    
    return 0;
}
 
void loop(char hk[3][3]){
    
}

void intro(char hk[3][3]){

    int i, j;
    char aux;

    aux = '1';

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            hk[i][j] = aux++;
        }
    }
}