//
// Created by Kishi Kishore N on 19/08/25.
//
#include <stdio.h>
// check vowel or consonant
int main() {
    char c;
    printf("enter a character to check vowel or consonant :");
    scanf("%c",&c);
    if ((c >= 'A' && c<='Z') || (c >= 'a' && c<='z') ) {
        if (c == 'a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c == 'A' || c=='E' || c=='I' || c=='O' || c=='U'
        ) {
            printf("given number is a vowel ");
        }else {
            printf("given number is a consonant");
        }
    }
    return 0;
}