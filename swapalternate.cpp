//swap alternate elements of array
#include<iostream>
using namespace std;

void swap_alternate(int arr[],int n){

    for(int i=0;i<n;i+=2){

        if((i+1)<n){
        swap(arr[i],arr[i+1]);//swap() is inbuilt function for swapping
        
    }
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

    swap_alternate(arr,n);
    printarray(arr,n);

    
    return 0;
}