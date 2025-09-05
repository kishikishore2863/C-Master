//
// Created by Kishi Kishore N on 05/09/25.
//
#include <stdio.h>

#include <stdio.h>

void reverse(int arr[], int n);
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, n);
    for (int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}

void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}