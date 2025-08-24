//
// Created by Kishi Kishore N on 24/08/25.
//
#include <stdio.h>
//Print Hollow Pyramid Patterns

int main() {
    int n=5;
    for (int i=1; i<=n; i++) {
        for (int j = 1; j <= n; j++) {

            if (j == 5 || i==5) {
                printf("*\t");
            }else {
                printf(" \t ");
            }
        }
        printf("\n");
    }
    return 0;
}