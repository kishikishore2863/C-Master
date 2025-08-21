//
// Created by Kishi Kishore N on 21/08/25.
//
#include <stdio.h>
int pow(int base ,int power);
int main() {
    int n =153;
    int clone =n;
    int clone1 =n;

    int power = 0;
    while (clone>0) {
       power++;
        clone = clone/10;
    }

    int ans =0;
    while (clone1>0) {
        int digi = clone1%10;
        ans = ans + pow(digi,power);
        clone1 = clone1/10;
    }

    printf("%d\n",ans);

    return 0;
}


int pow(int base ,int power) {
    if (power == 1) {
        return base;
    }
    return pow(base,power-1)*base;
}