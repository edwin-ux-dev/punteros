#include <stdio.h>

int main(){

    float arr[] = {1.1, 1.2, 1.3, 1.4, 1.5};

    float *ptr = arr;

    
    for(int i = 0; i < 5; i++){
        printf("Valor arr[%d]: %.2f\n", i,*(ptr + i));
    }
    
    float *ptrlast = &arr[4];

    int distance = ptrlast - ptr;

    printf("distance : %d\n", distance);

    return 0;
}