//
// Created by Kishi Kishore N on 19/08/25.
//
#include <stdio.h>
// Calculate Sum of Natural Numbers
void firstApproach();
void secondApp();
int  thirdApp(int n);


int main() {
    firstApproach();
    secondApp();
    printf("%d\n",thirdApp(10));
    return 0;
}

void firstApproach() {
    // using while loop
    int n=10;
    int i=1;
    int count=0;
    while (i<=n) {
        count =count+i;
        i++;
    }
    printf("%d\n",count);
}

void secondApp() {
    int n=10;
    int count=0;
    for (int i=1; i<=n; i++) {
        count = count+i;
    }
    printf("%d\n",count);

}

int thirdApp(int n) {
    if (n==1) {
        return 1;
    }
    return thirdApp(n-1)+n;
}
