//
// Created by Kishi Kishore N on 17/08/25.
//
#include <stdio.h>
//
float multiply(float a, float b);
int main() {
    float a= 2.12;
    float b= 3.88;

    float product = multiply(a,b);
    printf("%.3f",product);
    return 0;
}

float multiply(float a,float b) {
    return a*b;
}