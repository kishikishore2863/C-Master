//
// Created by Kishi Kishore N on 21/08/25.
//
#include <stdio.h>
//fibonacci series
int main() {
    int n=5;
    int first =0;
    int second =1;
    printf("%d\n",first);
    printf("%d\n",second);

    for (int i=3; i<=n; i++) {
        int temp =first +second;
        first = second;
        second = temp;
        printf("%d\n",temp);
    }

    return 0;
}

