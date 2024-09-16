#include <stdio.h>

int main() {
    float num = 5.5;
    float *ptr;

    ptr = &num;

    
    printf("Dirección de num: %p\n", (void*)&num);
    printf("Valor de ptr: %p\n", (void*)ptr);
    printf("Valor de num a través de ptr: %.2f\n", *ptr);
    

   printf("el valor del puntero es %p \n y la direccion de la variable de num es %.2f\n ", (void*)ptr , *ptr );

    return 0;
}