#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    
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

int binarysearch(int arr[],int s,int e, int target){ 
     
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;

        }
        else
           s=mid+1;
           
        }
        return -1;
}
  

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin >> arr[i];}

    int target;   
    cout<<"enter target:"<<endl;
    cin >> target;
    int pivot =  getpivot(arr,n);
    

   if(arr[pivot]<=target && target<=arr[n-1]){//binary search on 2 line
       int ans=binarysearch(arr,pivot,n-1,target);
       cout<<"target is at index "<<ans<<endl;
   }
   else{// binary search on 1 line
    int ans=binarysearch(arr,0,pivot-1,target);
    cout<<"target is at index "<<ans<<endl;
   }
}
       
