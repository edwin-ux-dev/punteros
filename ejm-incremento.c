#include <stdio.h>

int main(){
    int arr[5] = {10,20,30,40,50};

    int *ptr = arr;

    printf("valor inicial: %d\n", *ptr);

    *ptr++;

    printf("valor despues de incremento: %d\n", *ptr);

    *ptr--;

    printf("valor despues de decrementar: %d\n", *ptr);




    return 0;
}