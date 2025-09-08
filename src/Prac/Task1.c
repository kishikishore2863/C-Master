//
// Created by Kishi Kishore N on 08/09/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/syslimits.h>

typedef struct Node{
    int data;
    struct Node *next;
}ListNode;

// struct Node {
//     int data;
//     struct Node *next;
// };

 ListNode* insertAtBeginning(struct Node*,int);
void display(struct Node *Head);
int main() {
   ListNode l5={5,NULL};
   ListNode l4={4,&l5};
   ListNode l3={3,&l4};
   ListNode l2={2,&l3};
   ListNode l1={1,&l2};

     ListNode *Head = &l1;
     ListNode  *res= insertAtBeginning(Head,14);
    display(res);


    return 0;
}

 ListNode* insertAtBeginning(ListNode *head,int data) {
     ListNode *newNode=malloc(sizeof(ListNode));
    if (newNode!=NULL) {
        newNode->data = data;
        newNode->next = head;
    }
    return newNode;
}

void display(ListNode *Head) {
    while (Head!=NULL) {
        printf("%d ",Head->data);
        Head=Head->next;
    }
}

