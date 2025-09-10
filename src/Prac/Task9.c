//
// Created by Kishi Kishore N on 10/09/25.
//
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} ListNode;


ListNode* removeNthFromEnd(ListNode* head, int n) {

    ListNode dummy;
    dummy.next = head;
    ListNode* fast = &dummy;
    ListNode* slow = &dummy;


    for (int i = 0; i <= n; i++) {
        if (fast == NULL) return head;
        fast = fast->next;
    }

    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode* temp = slow->next;
    slow->next = slow->next->next;
    free(temp);

    return dummy.next;
}
ListNode* newNode(int data) {
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    node->data = data;
    node->next = NULL;
    return node;
}

// Helper to print a linked list
void printList(ListNode* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL) printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

int main() {
    ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    printf("Original list: ");
    printList(head);

    int n = 2;
    head = removeNthFromEnd(head, n);

    printf("After removing %d-th node from end: ", n);
    printList(head);

    return 0;
}