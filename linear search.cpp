#include<iostream>
using namespace std;

int main(){

int n,f,arr[10];
int index=-1;

cout<<"Enter element size: ";
cin>>n;

cout<<"Enter your elements: ";

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

cout<<"Enter Element to search: ";
cin>>f;


for(int i=0;i<n;i++){

    if (arr[i]==f){
 index=f;
 break;}
}

 if(index!=-1){
    cout<<"Founded";
 }
 else{
    cout<<"Not founded";
 }
return 0;
}

