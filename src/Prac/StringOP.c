//
// Created by Kishi Kishore N on 23/09/25.
//

#include <stdio.h>

int main() {
    char s[30] = "kishi";
    char s1[4] = "kishi";
    int i=0;
    while (s[i] != '\0') {
       i++;
    }
    int j=0;
    while (s1[j] != '\0') {
        s[i] = s1[j];
        i++;
        j++;
    }
    s[i] = '\0';
    printf("%s",s);
    return 0;
}