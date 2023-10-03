#include<iostream>
using namespace std;
int main(){

int arr[10],n,i,item;

cout<<"Enter the size of array: ";
cin>>n;

cout<<"Enter elements in array: ";

i=0;
while(i<n){
    cin>>arr[i];
    i++;
}
cout<<"Enter the elements to insert at the end: ";
cin>>item;
n++;

arr[i]=item;

cout<<"The new array is: ";

i=0;
while(i<n)
{
    cout<<arr[i]<<endl;
    i++;
}
return 0;
}

