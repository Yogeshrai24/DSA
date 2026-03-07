#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* insertEnd(Node* head, int val) {

    Node* newNode = new Node();
    newNode->data = val;

    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    }

    Node* last = head->prev;

    newNode->next = head;
    newNode->prev = last;

    last->next = newNode;
    head->prev = newNode;

    return head;
}

void display(Node* head) {

    if (head == NULL) return;

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {

    Node* head = NULL;

    head = insertEnd(head, 5);
    head = insertEnd(head, 15);
    head = insertEnd(head, 25);
    head = insertEnd(head, 35);

    cout << "Circular Doubly LL: ";
    display(head);

    return 0;
}