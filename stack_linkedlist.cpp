#include <iostream>
using namespace std;

// Created node

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        
        data = val;
        next = nullptr;
    }
};

//creating all stack functions

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        cout << "Element " << x << " pushed into the stack." << endl;
    }

    void pop() {
        if (top == nullptr) {
            cout << "No element to pop!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << "Element " << temp->data << " popped from the stack." << endl;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "No element in Stack!" << endl;
            return -1;
        }
        return top->data;
    }

    bool empty() {
        return top == nullptr;
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack st;

//Using switch case for user input

    int choice;
    while (true) {
        cout << "Stack Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Check if empty" << endl;
        cout << "5. Exit" << endl;
        cout << "6. Display" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int x;
                cout << "Enter the number to insert: ";
                cin >> x;
                st.push(x);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                cout << "Top element: " << st.peek() << endl;
                break;
            case 4:
                cout << "Stack is " << (st.empty() ? "empty" : "not empty") << endl;
                break;
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            case 6:
                st.display();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;

}