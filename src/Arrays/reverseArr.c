//
// Created by Kishi Kishore N on 05/09/25.
//

#include <stdio.h>

void reverse_print(int arr[],int n,int i);
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    reverse_print(arr,9,0);
    return 0;
}

void reverse_print(int arr[],int n,int i) {
    if (i==n) {
        return;
    }

    reverse_print(arr,n,i+1);
    printf("%d",arr[i]);

}