//
// Created by Kishi Kishore N on 17/08/25.
//
#include <stdio.h>
//
float fahrenheit_to_celsius(float f);
int main() {
    float f = 40;

    printf("Temperature in Degree Celsius : %0.2f",fahrenheit_to_celsius(f));
    return 0;
}

float fahrenheit_to_celsius(float f) {
    return ((f - 32.0) * 5.0 / 9.0);
}