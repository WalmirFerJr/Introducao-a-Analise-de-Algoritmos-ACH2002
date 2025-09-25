#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int binary_search(int arr[], int left, int right, int x) {

    int mid = (left + right) / 2;

    while(left <= right) {

        if(x == mid) {
            return mid; 
        }
        else if(x <= mid) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return (-1);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n",binary_search(arr, 0, (size - 1), 5));

}