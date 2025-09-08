//
// Created by Kishi Kishore N on 08/09/25.
//
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node *next;
}ListNode;

ListNode* detectCycleStart(ListNode* head);
int main() {
    // Create nodes
    ListNode n1, n2, n3, n4, n5;
    n1.data = 1; n2.data = 2; n3.data = 3; n4.data = 4; n5.data = 5;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;

    // Test 1: No cycle
    ListNode* res = detectCycleStart(&n1);
    if (res == NULL) {
        printf("Test 1: List with no cycle: No cycle\n");
    } else {
        printf("Test 1: List with no cycle: Cycle detected at node with value %d\n", res->data);
    }

    // Create a cycle: n5.next -> n3
    n5.next = &n3;

    // Test 2: With cycle
    res = detectCycleStart(&n1);
    if (res == NULL) {
        printf("Test 2: List with cycle (5 -> 3): No cycle\n");
    } else {
        printf("Test 2: List with cycle (5 -> 3): Cycle detected at node with value %d\n", res->data);
    }

    // Optional: break the cycle for safety (not needed in this small test)
    n5.next = NULL;

    return 0;
}

ListNode* detectCycleStart(ListNode* head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast!=NULL && fast->next!=NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast) {
            break;
        }
    }
    if (fast == NULL || fast->next == NULL) {
        // No cycle
        return NULL;
    }
    ListNode *p = head;
    while (slow != p) {
        p = p->next;
        slow = slow->next;
    }
    return slow;
}