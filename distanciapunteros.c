#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int *ptr  = &arr[2];

    printf("%d\n", *ptr);

    int *ptr2  = &arr[8];


    int distance = ptr2 - ptr;

    printf("la distancia entre punteros es %d\n", distance);



    return 0;
}