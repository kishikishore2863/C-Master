//
// Created by Kishi Kishore N on 29/08/25.
//
#include <stdio.h>

int main() {
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    int sum=0;
    for (int i=0; i<n; i++) {
        sum = sum+arr[i];
    }

    float avg = (float)sum/n;

    printf("%f\n",avg);
    printf("%d",sum);

}