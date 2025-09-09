//
// Created by Kishi Kishore N on 09/09/25.
//
#include <stdio.h>

int main() {
    int arr[] = {1,1,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n-1; i++) {
        if (arr[i]<arr[i+1]) {
            printf("%d",arr[i]);
        }
    }
}