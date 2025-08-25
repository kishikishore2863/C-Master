//
// Created by Kishi Kishore N on 25/08/25.
//
#include <stdio.h>

void print(int arr[3][3], int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{8,9,0}};
    print(arr,3,3);
}