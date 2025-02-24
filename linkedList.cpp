#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the list
void insertEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete a node at a specific position
void deleteNode(Node** head, int position) {
    if (*head == nullptr) return;

    Node* temp = *head;

    // If deleting the head node
    if (position == 0) {
        *head = temp->next;
        delete temp;
        return;
    }

    // Find the previous node of the node to be deleted
    for (int i = 0; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) return;

    Node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
}

// Function to display the linked list
void displayList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "Yay it is the end of the list!\n";
}

int main() {
    cout << "\nWelcome to the Happy Linked List Adventure!\n";

    Node* head = nullptr;

    // Insert sample values
    insertEnd(&head, 13);
    insertEnd(&head, 24);
    insertEnd(&head, 37);
    insertEnd(&head, 49);

    // Display the list
    cout << "Linked List: ";
    displayList(head);

    // Delete node at position 2 (0-based index)
    deleteNode(&head, 2);

    // Display list after deletion
    cout << "\nList after deleting node at position 2:\n";
    displayList(head);

    return 0;
}