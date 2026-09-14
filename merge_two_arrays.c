#include <stdio.h>

void mergeTwoArrays(int arr1[], int arr2[], int merged[], int n1, int n2) {
    int i = 0, j = 0, k = 0;

    // Merge the two arrays while maintaining sorted order
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy any remaining elements from either array
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}