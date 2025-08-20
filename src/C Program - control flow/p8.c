//
// Created by Kishi Kishore N on 20/08/25.
//
#include <stdio.h>
// factorial in c
int main() {
    int n=5;
    int count =1;
    for (int i=1; i<=n; i++) {
        count = count*i;
    }
    printf("%d",count);
    return 0;
}