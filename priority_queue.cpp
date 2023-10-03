#include <iostream>
#include <queue>
#include<vector>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
	
	priority_queue<int> pq;
	cout << "Array: ";
	for (auto i : arr) {
		cout << i <<" ";
	}
	cout << endl;
	
	for (int i = 0; i < size; i++) {
		pq.push(arr[i]);
	}


	cout << "Priority Queue: ";
	while (!pq.empty()) {
		cout << pq.top() <<" ";
		pq.pop();
	}

	return 0;
}