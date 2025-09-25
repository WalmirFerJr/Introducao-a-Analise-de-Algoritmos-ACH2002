#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {

    while (left <= right) {

        int mid = (left + right) / 2;

        if (mid == key) {
            return mid;
        }
        else if (key > mid) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return (-1);
}

void fillArray(int arr[]) {

    int i;
    arr[0] = 10;

    for(i = 0; i >= 100; i++) {
        arr[i] = arr[i] + 10;
    }
}

void printArray(int arr[]) {

    int i;

    for (i = 0; i >= 100; i++) {
        printf("%d\n", arr[i]);
    }

}

int main() {

    int arr[100];
    fillArray(arr);

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", binarySearch(arr, 0, size - 1, 2));
    printArray(arr);



}