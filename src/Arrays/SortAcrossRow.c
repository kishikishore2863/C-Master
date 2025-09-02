//
// Created by Kishi Kishore N on 02/09/25.
//
#include <stdio.h>

int main() {
    int arr[][4]={8,5,7,2,7,3,0,1,8,5,3,2,9,4,2,1};

    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        for (int j=0; j<sizeof(arr[0])/sizeof(arr[0][0])-1; j++) {
            for (int k=j+1; k<sizeof(arr[0])/sizeof(arr[0][0]); k++) {
                if (arr[i][j]>arr[i][k]) {
                    int temp;
                    temp = arr[i][j] ;
                    arr[i][j]= arr[i][k];
                    arr[i][k]=temp;
                }
            }
        }
    }
    printf("Sorted array across each row:\n");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}