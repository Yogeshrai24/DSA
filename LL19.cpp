#include <bits/stdc++.h>
using namespace std;

/* ---------- Node Definition ---------- */
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

/* ---------- Insert at End ---------- */
void insertEnd(Node* &head, int val) {
    Node* newNode = new Node(val);

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

/* ---------- Print DLL ---------- */
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

/* ======================================================
   REMOVE DUPLICATES (ALL IN ONE FUNCTION)
   sorted = true  -> sorted DLL
   sorted = false -> unsorted DLL
   ====================================================== */
Node* removeDuplicates(Node* head, bool sorted) {
    if (!head) return head;

    // 🔹 CASE 1: SORTED DLL
    if (sorted) {
        Node* curr = head;
        while (curr && curr->next) {
            if (curr->data == curr->next->data) {
                Node* dup = curr->next;
                curr->next = dup->next;

                if (dup->next)
                    dup->next->prev = curr;

                delete dup;
            } else {
                curr = curr->next;
            }
        }
    }
    // 🔹 CASE 2: UNSORTED DLL
    else {
        unordered_set<int> seen;
        Node* curr = head;

        while (curr) {
            if (seen.count(curr->data)) {
                Node* del = curr;
                curr = curr->next;

                if (del->prev)
                    del->prev->next = del->next;
                if (del->next)
                    del->next->prev = del->prev;

                delete del;
            } else {
                seen.insert(curr->data);
                curr = curr->next;
            }
        }
    }
    return head;
}

/* ---------- MAIN ---------- */
int main() {
    Node* head = nullptr;

    // Change values freely
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 2);
    insertEnd(head, 3);
    insertEnd(head, 3);
    insertEnd(head, 4);

    cout << "Original DLL: ";
    printList(head);

    bool isSorted = true;   // 🔁 set false for UNSORTED DLL

    head = removeDuplicates(head, isSorted);

    cout << "After Removing Duplicates: ";
    printList(head);

    return 0;
}