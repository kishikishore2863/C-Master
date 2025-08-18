//
// Created by Kishi Kishore N on 18/08/25.
//
// C program to demonstrate the
// area and perimeter of rectangle
#include <stdio.h>

int main(){

    int l = 10, b = 10;
    int A, P;
    A = l * b;
    P = 2 * (l + b);
    printf("Area of rectangle is : %d", A);
    printf("\nPerimeter of rectangle is : %d", P);
    return 0;
}