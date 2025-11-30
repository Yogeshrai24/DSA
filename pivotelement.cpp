#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    
    int s=0,e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else
           e=mid;
        }
    return s;
}

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin >> arr[i];}

       cout<<"pivot element is at index "<<pivot(arr,n)<<endl;
}