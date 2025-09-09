//
// Created by Kishi Kishore N on 09/09/25.
//
#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
}ListNode;

void removeDuplicates(ListNode* head);
void display(ListNode *head);
int main() {
    ListNode n5 = {4, NULL};
    ListNode n4 = {4, &n5};
    ListNode n3 = {4, &n4};
    ListNode n2 = {1, &n3};
    ListNode n1 = {1, &n2};
    ListNode* head_odd = &n1;

    removeDuplicates(head_odd);
     display( head_odd);

}

void removeDuplicates(ListNode* head) {
    if (head == NULL) return;
    ListNode *prev = head;
    ListNode *curr = head;
    while (curr != NULL) {
        if (curr->data != prev->data) {
            prev->next = curr;
        }
        curr = curr-> next;
    }
    prev->next = NULL;
}

void display(ListNode *head) {
    while (head!=NULL) {
        printf("%d ,",head->data);
        head= head->next;
    }
}