#include <iostream>
using namespace std;

#define MAX_HEAP_SIZE 100

int heap[MAX_HEAP_SIZE];
int heapSize = 0;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeapify(int index) {
    while (index > 0 && heap[index] > heap[(index - 1) / 2]) {
        swap(&heap[index], &heap[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

void insert(int value) {
    if (heapSize >= MAX_HEAP_SIZE) {
        cout << "Heap is full. Cannot insert.\n";
        return;
    }

    heap[heapSize] = value;
    maxHeapify(heapSize);
    heapSize++;
}

void heapify(int index) {
    int largest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < heapSize && heap[leftChild] > heap[largest]) {
        largest = leftChild;
    }

    if (rightChild < heapSize && heap[rightChild] > heap[largest]) {
        largest = rightChild;
    }

    if (largest != index) {
        swap(&heap[index], &heap[largest]);
        heapify(largest);
    }
}

int deleteMax() {
    if (heapSize == 0) {
        cout << "Heap is empty. Cannot delete.\n";
        return -1; // Error value
    }

    int deletedValue = heap[0];
    heap[0] = heap[heapSize - 1];
    heapSize--;
    heapify(0);
    return deletedValue;
}

int main() {
    int count, data;
    cout << "Enter count: ";
    cin >> count;

    cout << "Enter data: ";
    for (int i = 0; i < count; i++) { 
        cin >> data;
        insert(data);
    }

    cout << "Max heap after insertion: ";
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;

    int max = deleteMax();
    cout << "Max value deleted: " << max << endl;

    cout << "Heap after deletion: ";
    for (int i = 0; i < heapSize; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;

    return 0;
}
