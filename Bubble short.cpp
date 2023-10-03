#include<iostream>
using namespace std;

int main(){
    int size;

    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the Elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;i++)
            {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"Shorted Array is: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
}
return 0;
}
