//
// Created by Kishi Kishore N on 20/08/25.
//
#include <stdio.h>
// Program to print Alphabet FromA to Z using Loop
void fun();
int main() {
    fun();
    return 0;
}

void fun() {
    char c ='A';
    while (c<='Z') {
        printf("%c ",c);
        c++;
    }
}