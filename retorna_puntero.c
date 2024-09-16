#include <stdio.h>

int *mayorQue(int a, int b) {
    if (a > b) {
        return &a; // Retorna la dirección de a
    } else {
        return &b; // Retorna la dirección de b
    }
}

int main() {
    int x = 15, y = 10;
    int *mayor = mayorQue(x, y);
    printf("El mayor de %d y %d es %d\n", x, y, *mayor);
    return 0;
}
