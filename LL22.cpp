#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

Node* cloneLL(Node* head) {
    if (!head) return NULL;

    Node* temp = head;

    // 1️⃣ Insert cloned nodes after original nodes
    while (temp) {
        Node* newNode = new Node(temp->data);
        newNode->next = temp->next;
        temp->next = newNode;
        temp = newNode->next;
    }

    // 2️⃣ Assign random pointers to cloned nodes
    temp = head;
    while (temp) {
        if (temp->random)
            temp->next->random = temp->random->next;
        temp = temp->next->next;
    }

    // 3️⃣ Separate original and cloned list
    temp = head;
    Node* cloneHead = head->next;
    Node* clone = cloneHead;

    while (temp) {
        temp->next = temp->next->next;
        if (clone->next)
            clone->next = clone->next->next;
        temp = temp->next;
        clone = clone->next;
    }

    return cloneHead;
}

// Utility to print list
void printList(Node* head) {
    while (head) {
        cout << "Data: " << head->data << ", Random: ";
        if (head->random) cout << head->random->data;
        else cout << "NULL";
        cout << endl;
        head = head->next;
    }
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    head->random = head->next->next;   // 1 -> 3
    head->next->random = head;          // 2 -> 1
    head->next->next->random = head->next; // 3 -> 2

    Node* cloned = cloneLL(head);

    cout << "Original List:\n";
    printList(head);

    cout << "\nCloned List:\n";
    printList(cloned);

    return 0;
}