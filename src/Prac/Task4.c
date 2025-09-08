//
// Created by Kishi Kishore N on 08/09/25.
//
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node *next;
}ListNode;

ListNode* findMiddle(ListNode* head) ;
int main() {
    // Odd length list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode n5 = {5, NULL};
    ListNode n4 = {4, &n5};
    ListNode n3 = {3, &n4};
    ListNode n2 = {2, &n3};
    ListNode n1 = {1, &n2};
    ListNode* head_odd = &n1;
    ListNode* mid_odd = findMiddle(head_odd);
    printf("Middle of odd-length list: %d\n", mid_odd->data); // Should print 3

    // Even length list: 1 -> 2 -> 3 -> 4 -> 5 -> 6
    ListNode e6 = {6, NULL};
    ListNode e5 = {5, &e6};
    ListNode e4 = {4, &e5};
    ListNode e3 = {3, &e4};
    ListNode e2 = {2, &e3};
    ListNode e1 = {1, &e2};
    ListNode* head_even = &e1;
    ListNode* mid_even = findMiddle(head_even);
    printf("Middle of even-length list: %d\n", mid_even->data); // Should print 4

    return 0;
}

ListNode* findMiddle(ListNode* head) {
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast!=NULL && fast->next!=NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}