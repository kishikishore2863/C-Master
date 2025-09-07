//
// Created by Kishi Kishore N on 07/09/25.
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPangram(const char *s);
int main() {
    const char *s = "wertyuio";
    bool res = isPangram(s);
    res?printf("true"):printf("false");
    return 0;
}

bool isPangram(const char *s) {
    int arr[26]={0};

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            arr[s[i] - 'a'] = 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            arr[s[i] - 'A'] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i]!= 1)return false;
    }
    return true;
}