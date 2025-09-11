//
// Created by Kishi Kishore N on 11/09/25.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

ListNode* newNode(int val) {
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr) {
        printf("%d", curr->val);
        if (curr->next) printf("->");
        curr = curr->next;
    }
    printf("\n");
}

ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    int length = 1;
    ListNode* tail = head;
    while (tail->next) {
        tail = tail->next;
        length++;
    }

    tail->next = head;

    k = k % length;
    int stepsToNewTail = length - k - 1;
    ListNode* newTail = head;
    for (int i = 0; i < stepsToNewTail; i++) {
        newTail = newTail->next;
    }

    // New head is next of newTail
    ListNode* newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
}

int main() {
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    printf("Original list: ");
    printList(head);

    int k = 2;
    head = rotateRight(head, k);

    printf("Rotated list by %d: ", k);
    printList(head);

    return 0;
}
