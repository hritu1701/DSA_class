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


    for(int i=1;i<size;i++){

    int temp=arr[i];
    int j;

    j=i-1;
    while(j>=0 && temp<arr[i])
        {
        arr[j+1]=arr[j];
        j--;

        }
        arr[j+1]=temp;
    }

    cout<<"Shorted Array is: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
}
return 0;
}
