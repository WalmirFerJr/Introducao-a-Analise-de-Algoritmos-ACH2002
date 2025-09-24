#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int binary_search(int arr[], int left, int right, int x) {

    while (left <= right) {

        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            return mid; 
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return (-1); // Caso o valor não seja encontrado na lista

}

int main() {

    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Digite um valor pra buscar no vetor:\n");
    scanf("%d", &key);

    int result = binary_search(arr, 0, size - 1, key);

    if (result == (-1)) {
        printf("Valor não encontrado.\n");
    }
    else {

        printf("O valor %d foi encontrado na posição %d do vetor.\n", key, result);
    }
}