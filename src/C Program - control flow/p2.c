//
// Created by Kishi Kishore N on 19/08/25.
//
#include <stdio.h>
//check for odd or even
int main() {
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if (number %2 == 0) {
        printf("EVEN");
    }else {
        printf("ODD");
    }
    return 0;
}