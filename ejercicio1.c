#include <stdio.h>

int main(){
    float var = 10 ;
    float *ptr;

    ptr = &var;

    printf("la direccion de la variable es %f, y el valor es %f\n ", ptr, *ptr )

}