#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   int element=unique(arr,n);

   cout<<"unique element is:"<<element<<endl;

    
    return 0;
}