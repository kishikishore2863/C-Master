//
// Created by Kishi Kishore N on 26/08/25.
//
#include <stdio.h>

int findMax(int *arr, int n) {
    int max =*arr;
    for (int i=1; i<n; i++) {
        if (*arr+i > max ) {
            max = arr[i];
        }
    }
    return max;
}


int main() {
    int arr[]= {1,2,3,14,5,6,7,8,9};
    int res =findMax(arr,9);
    printf("%d",res);

}