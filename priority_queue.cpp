#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void displayPriorityQueue(priority_queue<int> pq) {
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of Queue: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    priority_queue<int> pq;
    cout << "Queue is: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    int choice;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Priority Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        for (int i = 0; i < size; i++) {
            pq.push(arr[i]);
        }

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter the element to enqueue: ";
                cin >> element;
                pq.push(element);

                cout<<"After enqueue: ";  
				displayPriorityQueue(pq);
                break;
            }
            case 2: {
                if (!pq.empty()) {
                    int front = pq.top();
                    pq.pop();
                    cout << "Dequeued element: " << front << endl;
                } else {
                    cout << "Queue is empty." << endl;
                }
				cout<<"After dequeue: ";
                displayPriorityQueue(pq);
                break;
            }
            case 3: {
				cout<<"Priority Queue is: ";
                displayPriorityQueue(pq);
                break;
            }
            case 4: {
                exit(0);
            }
            default:
                cout << "Invalid choice.!" << endl;
        }

        cout << endl;
    }

    return 0;
}
