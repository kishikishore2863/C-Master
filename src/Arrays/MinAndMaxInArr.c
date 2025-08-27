//
// Created by Kishi Kishore N on 27/08/25.
//
#include <stdio.h>



int main() {
    int arr[9] ={1,2,3,4,5,6,7,8,9};
    int n=9;
    int min=*arr;
    int max=*arr;

    for (int i=0; i<n; i++) {
        if (*(arr+i) < min) {
            min = *(arr+i);
        }

        if (*(arr+i)> max) {
            max = *(arr+i);
        }
    }

    printf("min:%d\n",min);
    printf("max:%d\n",max);

}