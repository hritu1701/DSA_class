#include<iostream>
using namespace std;

struct Node {
    struct Node* prev;
    int data;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* temp = NULL;

int main() {
    int choice;
    cout << "Enter your choice (exit->0,continue->1): ";
    cin >> choice;

    while (choice) {
        struct Node* newnode = new Node();
        cout << "Enter data: ";
        cin >> newnode->data;

        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        cout << "Do you want to continue (No->0,Yes->1): ";
        cin >> choice;
    }

    temp = head;
    cout << "Before insertion: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    struct Node* newnode = new Node();
    cout << "Enter data: ";
    cin >> newnode->data;
    newnode->prev = NULL;
    newnode->next = NULL;

    newnode->next = head;
    head->prev = newnode;
    head = newnode;

    cout << "After Insertion: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
