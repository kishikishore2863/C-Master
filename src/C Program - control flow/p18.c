//
// Created by Kishi Kishore N on 22/08/25.
//
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);
int main() {
    // int number =29;
    int number =15;
    isPrime(number)?printf("%d is PRIME",number):printf("%d is NOT PRIME",number);
    return 0;
}

bool isPrime(int num) {
    if (num==1)return true;
    for (int i=2; i<num; i++) {
        if (num%i==0) {
            return false;
        }
    }
    return true;
}