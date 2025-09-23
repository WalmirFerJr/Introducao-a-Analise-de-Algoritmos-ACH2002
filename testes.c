#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", size);

}