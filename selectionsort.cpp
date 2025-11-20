#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;//initially take the element at index i as min element

        for(int j=i+1;j<n;j++){//here i+1 bcs i is already taken above
            if(arr[j]<arr[minindex])
                minindex=j;//update the index value of min element

        }
         swap(arr[minindex],arr[i]);//swap the min element with element at i
    }
    
}
int main(){

    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(arr,n);

    for(int i=0;i<n;i++){  //return sorted elements
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}