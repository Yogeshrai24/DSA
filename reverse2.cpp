//reverse an array
#include<iostream>
using namespace std;

void reverse_array(int arr[],int n){

    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);//swap() is inbuilt function for swapping
        start++;
        end--;
    }
}

void printarray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int n;
    cin>>n;

    

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse_array(arr,n);
    printarray(arr,n);

    
    return 0;
}