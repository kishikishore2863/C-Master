//
// Created by Kishi Kishore N on 01/09/25.
//
#include <stdio.h>

int main() {
    int arr[] = {1,2,1,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int value =1;
    for (int i=0; i<n; i++) {
        if (arr[i] != value) {
            printf("%d ,",arr[i]);
        }
    }
}

