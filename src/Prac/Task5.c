//
// Created by Kishi Kishore N on 08/09/25.
//
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node *next;
}ListNode;

int hasCycle(ListNode *head);
int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5 (no cycle)
    ListNode n1, n2, n3, n4, n5;
    n1.data = 1; n1.next = &n2;
    n2.data = 2; n2.next = &n3;
    n3.data = 3; n3.next = &n4;
    n4.data = 4; n4.next = &n5;
    n5.data = 5; n5.next = NULL;

    printf("Test 1: List with no cycle: ");
    if (hasCycle(&n1)) {
        printf("Cycle detected\n");
    } else {
        printf("No cycle\n");
    }

    // Create a cycle: 5 -> 3
    n5.next = &n3;

    printf("Test 2: List with cycle (5 -> 3): ");
    if (hasCycle(&n1)) {
        printf("Cycle detected\n");
    } else {
        printf("No cycle\n");
    }

    // Optional: break the cycle afterwards (not strictly needed here)
    n5.next = NULL;

    return 0;
}

int hasCycle(ListNode *head) {
    ListNode *fast=head;
    ListNode *slow =head;
    while (fast!=NULL && fast->next!=NULL) {
        fast= fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            return 1;
        }
    }
    return 0;
}