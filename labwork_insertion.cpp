#include <iostream> 
using namespace std; 
int main() 
{ 
int n; 

cout<<"Enter amount of elements: "<<endl; 

cin>>n; 

  

int arr[n]; 

cout<<"Enter the elements in the array that are to be sorted: "<<endl; 

for (int i=0; i<n; i++) 

{ 

cin>>arr[i]; 

} 

for(int i= 1; i<n; i++) 

{ 

int current = arr[i]; 

int j=i-1; 

while(arr[j]>current&&j>=0){ 

arr[j+1]=arr[j]; 

j--; 

} 

arr[j+1]=current; 

} 

cout<<"Sorted array will be:";//INSERTION SORT 

for(int i=0;i<n;i++) 

{ 

    cout<<arr[i]<<" "; 

} 

} 
