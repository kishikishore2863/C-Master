//
// Created by Kishi Kishore N on 21/08/25.
//
#include <stdio.h>
void a(int n) {
    if (n>0) {
        a(n-1);
        printf("%d",n);
        a(n-1);
    }
}
int main() {
    int number =12354;
    int rev=0;

    while (number>0) {
        int digi = number%10;
        rev = rev *10+digi;
        number =number/10;
    }

    printf("%d",rev);
}