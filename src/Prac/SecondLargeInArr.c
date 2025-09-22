//
// Created by Kishi Kishore N on 22/09/25.
//
#include<stdio.h>

int main() {
    int arr[]={1,2,3,9,6,1,7,3,90,33};
    int large=0;
    int second=0;
    int n= sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n; i++) {
        if (arr[i]>large) {
            int temp = large;
            large = arr[i];
            second = temp;
        }
        if (arr[i]<large && arr[i]>second) {
            second = arr[i];
        }
    }
    printf("%d",second);
    return 0;
}