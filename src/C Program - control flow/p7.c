//
// Created by Kishi Kishore N on 20/08/25.
//
#include <stdio.h>
#include <stdbool.h>
//
bool isLeapYear(int year);
int main() {
    isLeapYear(2025)?printf("true"):printf("false");
    return 0;
}

bool isLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;

    return false;
}