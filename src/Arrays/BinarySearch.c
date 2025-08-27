//
// Created by Kishi Kishore N on 27/08/25.
//
#include <stdio.h>

int search(int *arr ,int n,int target) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (target < arr[mid]) {
            end = mid - 1;
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int target=9;
    int res = search(&arr,n,target);
    printf("result:%d\n",res);
    return 0;
}