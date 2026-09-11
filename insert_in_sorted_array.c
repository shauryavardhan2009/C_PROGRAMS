//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
void insertInSortedArray(int arr[], int n, int key) {
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = key;
}


