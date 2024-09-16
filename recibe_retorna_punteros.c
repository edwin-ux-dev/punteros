#include <stdio.h>

int *sumar(int *a, int *b ){
    static int resultado ;
    resultado = *a + *b;
    return &resultado;
}


int main(){
    int x = 5 , y =6;
    int *ptrResultado = sumar(&x, &y);

    printf("La suma de %d y %d es %d", x, y , *ptrResultado);


    return 0;
}