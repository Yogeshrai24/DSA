#include<iostream>
using namespace std;
int peakelement(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){ // here we cant use (s<=e) because in this case loop will not terminate
        mid=s+(e-s)/2;
        if( arr[mid] < arr[mid+1]){//mid left line pe h
            s=mid+1;
        }
        else  //mid is either at left line or is at peak
           e=mid;
    }
   return s;// return s or e because both are equal in this condition
}

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin >> arr[i];}

    int peak= peakelement(arr,n);
    cout<<"peak element is at index "<< peak <<endl;
}