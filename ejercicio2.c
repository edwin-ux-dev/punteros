#include <stdio.h>

int main(){

    int num = 25;
    int *ptr;

    ptr = &num;

    printf("%d\n", *ptr );

    *ptr = 45; 

    printf("%d\n", *ptr );
    printf("%d\n", num );
    printf("%p\n", ptr );

    return 0;
}