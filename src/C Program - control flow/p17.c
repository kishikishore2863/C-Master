//
// Created by Kishi Kishore N on 22/08/25.
//
#include <stdbool.h>
#include <stdio.h>
//Program to Check Palindrome Number in C
bool isPalindrome(int number);
int rev(int number);
int main() {
    // int number =121;
    int number =123;
    isPalindrome(number)?printf("YES"):printf("NO");
    return 0;
}

bool isPalindrome(int number) {
  int reverse = rev(number);
    if (reverse == number)return true;
    return false;
}

int rev(int number) {
    int res =0;
    while (number>0) {
        int digi = number%10;
        res = res*10+digi;
        number = number/10;
    }
    return res;
}
