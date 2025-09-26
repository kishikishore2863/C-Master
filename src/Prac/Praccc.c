//
// Created by Kishi Kishore N on 25/09/25.
//
#include <stdio.h>

int main() {
    // int a[10] ={1,2,3,4,5};
    int a[10] ={1} ;
    int s = sizeof(a)/sizeof(a[0]);
    int *ptr = a;

    // for (int i=0; i<s; i++) {
    //     printf("%d",ptr[i]);
    // }

    s=s-1;
    while (s>=0) {
        printf("%d",ptr[s--]);
    }
}