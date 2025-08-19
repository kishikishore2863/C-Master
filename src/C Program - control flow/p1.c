//
// Created by Kishi Kishore N on 19/08/25.
//
#include <stdio.h>
// Check Whether a Number is Positive or Negative or Zero
int main() {
    int number;
    printf("enter the number :");
    scanf("%d",&number);
    if (number<0) {
        printf(" negative");
    }else if (number >0) {
        printf(" positive");
    }else {
        printf("given number is 0");
    }
    return 0;
}