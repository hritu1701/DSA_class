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
cout<<"Enter the elements at beginning: ";
cin>>item;
n++;

i=n;
while(i>1)
{
    arr[i-1]=arr[i-2];
    i--;
}
arr[0]=item;
cout<<"Resultant array element: ";

i=0;
while(i<n)
{
    cout<<arr[i]<<endl;
    i++;
}
return 0;
}

