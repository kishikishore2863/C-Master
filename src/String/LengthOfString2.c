//
// Created by Kishi Kishore N on 07/09/25.
//
#include <stdio.h>

int findLen(char* p);
int main() {
    char s[] = "kishi";
    int len = findLen(s);
    printf("%d",len);
    return 0;
}

int findLen(char* p) {
    int count=0;
    while (*p) {
        count++;
        p++;
    }
    return count;
}