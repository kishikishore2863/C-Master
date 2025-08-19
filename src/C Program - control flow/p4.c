//
// Created by Kishi Kishore N on 19/08/25.
//
#include <stdio.h>
//Find the Largest Number Among Three Numbers
int main() {
    int a,b,c;
    printf("enter a first number:");
    scanf("%d",&a);
    printf("enter a second number:");
    scanf("%d",&b);
    printf("enter a third number:");
    scanf("%d",&c);
    if (a>b && a>c) {
        printf("first number is Largest");
    }else if (b>a && b>c) {
        printf("second number is Largest");
    }else {
        printf("third number is Largest");
    }
    return 0;
}