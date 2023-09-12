#include <iostream>
using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow!" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = x;
            cout << "Element " << x << " pushed into the stack." << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop!" << endl;
            return;
        }
        else
        {
            cout << "Element " << arr[top] << " popped from the stack." << endl;
            top--;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "No element in Stack!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st;
    int choice;

    while (true)
    {
        cout << "Stack Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Check if empty" << endl;
        cout << "5. Exit" << endl;
        cout << "6. Display" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
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
