
#include<iostream>
using namespace std;

int main(){

int arr[10],pos,size,val,i,n;

cout<<"Enter the size of array: ";
cin>>size;

cout<<"Enter elements in array: ";

i=0;
while(i<size){
    cin>>arr[i];
    i++;
}
cout<<"Enter the insertion location: ";
cin>>pos;
;

cout<<"Enter the value to insert: ";
cin>>val;

for(int i=size-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
arr[pos-1]=val;


cout<<"The new array is: ";
}

i=0;
while(i<size)
{
    cout<<arr[i]<<endl;
    i++;
}
return 0;
}

