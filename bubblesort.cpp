#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    
    for(int i=1;i<n;i++){//it represents no. of rounds 1 to n-1
        bool swapped=false;
        for(int j=0;j<n-i;j++){//here n-i bcs with each round a largest element is sorted and we have to make less comparisons
        if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapped=true;//if array is sorted and no further swapping then exit
        }
    
   
   if(swapped==false)//already sorted array
       break;
}
}


int main(){

    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble_sort(arr,n);

    for(int i=0;i<n;i++){  //return sorted elements
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}