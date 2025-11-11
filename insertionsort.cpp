#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    
    for(int i=1;i<n;i++){//1st element is already sorted(i=0)
      int temp = arr[i];
      int j=i-1;
        for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];//shift krdo 
        }
        else{
            //ruk jao
            break;
        }
    }
    arr[j+1]=temp;//element ko shi position pe insert krdo
    }
}


int main(){

    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertion_sort(arr,n);

    for(int i=0;i<n;i++){  //return sorted elements
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}