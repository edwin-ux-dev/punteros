#include <stdio.h>

int *menor(int *a, int *b){
    if(*a < *b) {
        return a;
    }else {
        return b;
    }
}

int main(){
    int x ,y;
    x = 5;
    y = 56;

    int *ptrMenor =  menor(&x, &y);
    printf("El menor de %d y %d es %d\n", x, y, *ptrMenor);

    return 0;
}