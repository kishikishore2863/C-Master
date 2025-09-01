//
// Created by Kishi Kishore N on 01/09/25.
//
#include <stdio.h>

void approach1();
void approach2();
int main() {
    approach1();
    approach2();
}

void approach1() {
    int arr[] = {8, 2, 3, 4, 5, 6, 7, 1};
    int arr2[] = {4, 5, 7, 11, 6, 1};

    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++ ) {
        for (int j=0; j<sizeof(arr2)/sizeof(arr2[0]); j++) {
            if (arr[i]== arr2[j]) {
                printf("%d ,",arr[i]);
            }
        }
    }
}

void approach2() {
    int arr[] = { 1, 2, 2, 3, 5, 6, 7, 8, 18, 29, 37};
    int arr2[] = {2, 2, 4, 5, 7, 9, 10, 18};

    int n_arr = sizeof(arr)/sizeof(arr[0]);
    int n_arr2 = sizeof(arr2)/sizeof(arr2[0]);

    int i=0;
    int j=0;

    while (i<n_arr && j<n_arr2) {
        if (arr[i]<arr2[j]) {
            i++;
        }else if (arr[i]>arr2[j]) {
            j++;
        }else {
            printf("%d",arr[i]);
            i++;
            j++;
        }
    }


}




