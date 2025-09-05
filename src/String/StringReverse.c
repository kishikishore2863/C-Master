//
// Created by Kishi Kishore N on 05/09/25.
//
#include <stdio.h>
#include <string.h>

void reverse(char *s, char *r );
int main() {
    char s[] = "kishore";
    reverse(s,s+strlen(s)-1);
    printf("%s",s);
    return 0;
}

void reverse(char *s, char *r ) {
    if (s == r) return;

    char c = *s;
    *s = *r;
    *r = c;
    reverse(s+1,r-1);

}

