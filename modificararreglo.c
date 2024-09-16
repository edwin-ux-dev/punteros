#include <stdio.h>

void modificarArreglo(int *arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] *= 2;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }

    modificarArreglo(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    

    return 0;
}