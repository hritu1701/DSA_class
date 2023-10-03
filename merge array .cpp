#include<iostream>
using namespace std;

 int main(){

int s1,s2;
int arr1[10];
int arr2[10];

cout<<"Enter size1: ";
cin>>s1;

cout<<"Enter array 1 elements: ";

for(int i=0;i<s1;i++)
{
    cin>>arr1[i];
}

cout<<"Enter size2: ";
cin>>s2;

cout<<"Enter array 2: ";
for(int j=0;j<s2;j++){
    cin>>arr2[j];
}

int arr3[s1+s2];
return 0;
}


