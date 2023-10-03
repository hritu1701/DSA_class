#include<iostream>
using namespace std;

int main(){

int n,pos,arr[10];

cout<<"Enter element size: ";
cin>>n;

cout<<"Enter your elements";

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

cout<<"Enter Location";
cin>>pos;

if(pos>=0 && pos<n){
    for(int i=pos;i<n-1;i++)
        arr[i]=arr[i+1]
}
}

}
