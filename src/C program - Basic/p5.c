//
// Created by Kishi Kishore N on 16/08/25.
//
#include <stdio.h>
// c program to check whether a number is prime or not
int isPrime(int n);
int main() {
    int x;
    printf("enter a number to check prime:");
    scanf("%d",&x);
    int result = isPrime(x);
    result==1?printf("given number is Prime"):printf("given number is not prime");
    return 0;
}

int isPrime(int x) {
    if (x <=1 ) {
        return 0;
    }

    for (int i=2; i<x; i++) {
        if (x%i == 0) {
            return 0;
        }
    }
    return 1;
}