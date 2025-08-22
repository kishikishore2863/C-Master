//
// Created by Kishi Kishore N on 22/08/25.
//
#include <stdio.h>
#include <stdbool.h>
//C Program To Check Neon Number

bool isNeon(int number);
int main() {
    isNeon(9)?printf("YES"):printf("NO");
    return 0;
}

bool isNeon(int number) {
    int prod = number*number;
    int sum =0;

    while (prod>0) {
        int digi = prod%10;
        sum = sum+digi;
        prod = prod/10;
    }
    printf("sum=%d\n",sum);
    printf("numsber=%d\n",number);
    if (sum == number)return true;
    return false;
}