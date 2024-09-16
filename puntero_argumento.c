#include <stdio.h>

void modificar(int *x, int *y){
    int temp= *x;
    *x = *y;
    *y = temp;
}

int main(){

    int num1 = 5;
    int num2 = 6;


    printf("Valor antes de modificar:\n valor num1 : %d\n Valor num2 : %d");

    modificar(&num1, &num2);

    printf("Valor despues de modificar:\n valor num1 : %d\n Valor num2 : %d");



    return 0;
}