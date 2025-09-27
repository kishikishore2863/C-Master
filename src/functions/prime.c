//
// Created by Kishi Kishore N on 27/09/25.
//
// C Program to Check Prime Number using Simple Trial
// Division Approach
#include <stdio.h>

int isPrime(int N);
int main() {
    int N = 10;
    printf(" %d is ", N);
    if (isPrime(N)) {
        printf("PRIME");
    }
    else {
        printf("NOT PRIME");
    }

    return 0;
}

int isPrime(int N) {

    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}

