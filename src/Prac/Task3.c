//
// Created by Kishi Kishore N on 08/09/25.
//
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node *next;
}ListNode;

ListNode* reverse(ListNode *head);
int main() {
    // Manually create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode n1, n2, n3, n4, n5;
    n1.data = 1; n1.next = &n2;
    n2.data = 2; n2.next = &n3;
    n3.data = 3; n3.next = &n4;
    n4.data = 4; n4.next = &n5;
    n5.data = 5; n5.next = NULL;
    ListNode *head = &n1;


    ListNode *reversed = reverse(head);

    printf("Reversed list: ");
    ListNode *curr = reversed;
    while (curr != NULL) {
        printf("%d", curr->data);
        if (curr->next != NULL) printf(" -> ");
        curr = curr->next;
    }
    printf("\n");
    return 0;
}

ListNode* reverse(ListNode *head) {
    ListNode *prev=NULL;
    ListNode *curr = head;

    while (curr!=NULL) {
       ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

