#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

// Merge two sorted linked lists using bottom pointer
Node* merge(Node* a, Node* b) {
    if (!a) return b;
    if (!b) return a;

    Node* result;

    if (a->data < b->data) {
        result = a;
        result->bottom = merge(a->bottom, b);
    } else {
        result = b;
        result->bottom = merge(a, b->bottom);
    }

    result->next = NULL; // IMPORTANT
    return result;
}

// Flatten the linked list
Node* flatten(Node* root) {
    if (!root || !root->next)
        return root;

    // Recursively flatten the next list
    root->next = flatten(root->next);

    // Merge current list with next flattened list
    root = merge(root, root->next);

    return root;
}

// Utility function to print flattened list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->bottom;
    }
    cout << endl;
}

// Driver code (optional)
int main() {
    Node* head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    head->next = new Node(10);
    head->next->bottom = new Node(20);

    head->next->next = new Node(19);
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    head->next->next->next = new Node(28);
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom->bottom = new Node(40);
    head->next->next->next->bottom->bottom->bottom = new Node(45);

    head = flatten(head);
    printList(head);

    return 0;
}