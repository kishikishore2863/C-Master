//
// Created by Kishi Kishore N on 08/09/25.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}ListNode;

void insertAtEnd(ListNode *head, int data);
ListNode* delete(ListNode *head,int del);
void display(ListNode *head);
int main() {
    ListNode l6 ={6,NULL};
    ListNode l5 ={5,&l6};
    ListNode l4 ={4,&l5};
    ListNode l3 ={3,&l4};
    ListNode l2 ={2,&l3};
    ListNode l1 ={1,&l2};

    ListNode *head = &l1;
    insertAtEnd(head,15);
    head = delete(head,3);
    display(head);
    return 0;
}

void insertAtEnd(ListNode *head, int data) {
    ListNode *newNode = malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        return;
    }
    while (head->next!=NULL) {
        head = head->next;
    }
    head->next = newNode;
}

ListNode* delete(ListNode *head,int del){
    if (head == NULL) return NULL;
    if (head->data == del) {
        ListNode* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    ListNode* curr = head;
    while (curr->next != NULL && curr->next->data != del) {
        curr = curr->next;
    }
    if (curr->next == NULL) {
        return head;
    }
    ListNode* temp = curr->next;
    curr->next = curr->next->next;
    free(temp);
    return head;
}

void display(ListNode *head) {
    while (head!=NULL) {
        printf("%d ,",head->data);
        head = head->next;
    }
}